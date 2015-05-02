#!/usr/bin/perl

use strict;
use warnings;


my $a=return_number();
my $b=return_number();
my $c=return_number();
my $d=return_number();
my $exame = return_number();

my $media = (($a*2)+($b*3)+($c*4)+$d)/10;
$media = sprintf("%.1f",$media);
my $media_ok = 0;
my $messagem = 0;


open(FH,"echo $a $b $c $d|./prog |") or die();

while(my $line = <FH>){
	print $line;
	if($line =~ /Media: (\d*\.\d*)/){
		#print  "O numero é: $1\n";
		if($media == $1){
			$media_ok = 1;
		}
	}

	if($media >= 7 && $line =~ /Aluno aprovado\./){
		$messagem = 1;
	}

	if($media < 5 && $line =~ /Aluno reprovado\./){
		$messagem = 1;
	}
	if($line =~ /Aluno em exame\./){
		print FH $exame;
	}

	
}

#print "$messagem $media_ok\n";

if($messagem && $media_ok){

	print "\nPara os numeros $a $b $c $d o programa esta gerando 
a resposta correta\n";
}
#print_numbers($a);
#print_numbers($b);
#print_numbers($c);
#print_numbers($d);



sub print_numbers{

	my($number) = @_;
	
	print $number,"\n";

}

sub return_number{
	
	my $random_number = sprintf("%.1f",rand(10));
	return $random_number;
}

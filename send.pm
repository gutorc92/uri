#!/usr/bin/perl

use strict;
use warnings;

use LWP;
open( my $fh,"<", "key") or die("Meu cu");
my $key;
while(my $line = <$fh>){
	chomp $line;
	if($line){
		$key = $line;
	}
}
print "This is lib www.perl.- $LWP::VERSION\n";

my $url = "https://www.urionlinejudge.com.br/judge/pt/runs";
my $username = "gutorc\@hotmail.com";
my $password = "763a561c";

my $browser = LWP::UserAgent->new("Mozilla");




my $header = HTTP::Headers->new;

$header->header("Connection","keep-alive");
$header->header("Content-Type","application/x-www-form-urlencoded");

my $req = HTTP::Request->new(POST=>"https://www.urionlinejudge.com.br/judge/login",$header);
$req->content( "data[User][email]=$username&
		data[User][password]=$password&
		data[_Token][key]=981fe61ef026a76c21245cb949326ee95&
		data[_Token][fields]=$key&
		data[_Token][unlocked]=");
print $req->as_string(),"\n";
my $res = $browser->request($req);

print $res->as_string;
print $res->content;

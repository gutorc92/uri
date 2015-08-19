#!/usr/bin/perl

use strict;
use warnings;
use Data::Dumper;
use WWW::Mechanize;
use LWP;

print "This is lib www.perl.- $LWP::VERSION\n";

my $username = "gutorc\@hotmail.com";
my $password = "763a561c";


my $mech = WWW::Mechanize->new();
$mech->agent_alias("Linux Mozilla");
$mech->get("https://www.urionlinejudge.com.br/judge/login");
my $form = $mech->form_id("UserLoginForm");
$form->dump;
$mech->field("data[User][email]",$username);
$mech->field("data[User][password]",$password);
my $res3 = $mech->submit_form();
if($res3->is_success){
	print "Deu certo\n";
	$res3->decoded_content;
}else{
	$res3->status_line;
}
#print $res3->as_string;

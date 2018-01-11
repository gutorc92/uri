import os
import sys

if __name__ == "__main__":
    dic = {"vertebrado":
               {"ave":
                    {"carnivoro": "aguia", "onivoro": "pomba"},
                "mamifero" :
                    {"onivoro": "homem", "herbivoro": "vaca"}
                },
           "invertebrado":
               {"inseto":
                    {"hematofago": "pulga", "herbivoro": "lagarta"},
                "anelideo":
                    {"hematofago": "sanguessuga", "onivoro": "minhoca"}
                }
           }
    ind1 = input()
    ind2 = input()
    ind3 = input()
    print(dic[ind1][ind2][ind3])
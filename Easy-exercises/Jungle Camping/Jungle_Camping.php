<?php
 $sounds = ['Grr', 'Rawr', 'Ssss', 'Chirp'];
 $animals = ['Lions', 'Tigers', 'Snakes', 'Birds'];
 $equiv = array_combine($sounds, $animals);
 $index = 0;
 $cor_s = null;
 $n = (int)readline("Enter Number of animals to search: \n");
 while($index < $n){
    $cor_s = (string)readline("Enter Animal sound: \n");
    print_r("{$equiv[$cor_s]}\n");
    $index++;
 }

?>
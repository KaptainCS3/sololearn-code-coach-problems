<?php
    $i = 1;
    echo ("enter value for yard :\n");
    $yard = (int)readline('');
    if($yard > 10)
    echo ("High Five");
    else if($yard < 1)
    echo ("shh");
    else{
        while($i <= $yard){
            echo ("Ra!");   
            $i++;
        }
    }
?>
<?php
    printf("Enter number of criminals:\n");
    $criminals = (int)readline("");
    if($criminals > 10)
    echo ("Good Luck out there!\n");
    else if($criminals >= 5 && $criminals < 10)
    echo ("Help me Batman\n");
    else
    echo("I got this!\n");
    ?>
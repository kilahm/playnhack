<?hh

include dirname(__DIR__) . '/src/app.hh';

$app = new App();

//Vector<string>
$message = Vector {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D'};

echo "I would expect this should fail: ". $app->run($message, 99) . '<br />';


echo "This should pass: " . $app->runCorrect($message, 99) . '<br />';


echo "So why do both work...?";

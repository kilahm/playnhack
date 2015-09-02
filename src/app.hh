<?hh //strict

class App {
	
	/**
	 * Demo of incorrect Vector<type> check on a Vector<string>, where a Vector<int> is called for
	 * @param  Vector<int> $message
	 * @param  int    $num_chars Num characters to return
	 * @return string
	 */
	public function run(Vector<int> $message, int $num_chars) : string {
		
		$msg_len = count($message);		
		if( $msg_len < $num_chars) {
			$num_chars = $msg_len;
		}
		$return = 'My message is: ';
		
		for($i = 0; $i < $num_chars; $i++) {
			$return .= $message[$i];
		}
		return $return . '!';
	}

	/**
	 * This version does, and should work on Vector<string>
	 * @param  Vector<string> $message
	 * @param  int    $num_chars Num characters to return
	 * @return string
	 */
	public function runCorrect(Vector<string> $message, int $num_chars) : string {
		
		$msg_len = count($message);		
		if( $msg_len < $num_chars) {
			$num_chars = $msg_len;
		}
		$return = 'My message is: ';
		
		for($i = 0; $i < $num_chars; $i++) {
			$return .= $message[$i];
		}
		return $return . '!';
	}
}
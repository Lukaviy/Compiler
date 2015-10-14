#ifdef TOKEN_FUNC
token_container_t token_char(string str, AUTOMATON_STATE state, int line, int column) {
	return token_container_t(new token_with_value_t<char>(line, column, T_CHAR, str[1]));
}
#endif

#ifdef TOKEN_LIST
register_token(CHAR, "char", token_char)
#endif
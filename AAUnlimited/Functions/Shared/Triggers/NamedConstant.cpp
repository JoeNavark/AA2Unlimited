#include "StdAfx.h"



namespace Shared {
namespace Triggers {

std::wstring g_NamedConstantCategories[NCONSTCAT_N] {
	TEXT("Relationship"),
	TEXT("Conversation"),
	TEXT("Trait"),
	TEXT("Time (Day)"),
	TEXT("Time (Period)"),
	TEXT("Character (Pregnancy Risk)"),
	TEXT("Event Type"),
	TEXT("Mood"),
	TEXT("Preferences"),
	TEXT("Opinions")
};

std::vector<NamedConstant> g_NamedConstants[N_TYPES] = {
	{ //INVALID
		
	},
	{ //INT
		//Relationship
		{
			1, NCONSTCAT_RELATIONSHIP,
				TEXT("Love Points"), TEXT("LOVE"), TEXT("Love points"),
				Value(0)
		},
		{
			2, NCONSTCAT_RELATIONSHIP,
				TEXT("Like Points"), TEXT("LIKE"), TEXT("Like points"),
				Value(1)
		},
		{
			3, NCONSTCAT_RELATIONSHIP,
				TEXT("Dislike Points"), TEXT("DISLIKE"), TEXT("Dislike points"),
				Value(2)
		},
		{
			4, NCONSTCAT_RELATIONSHIP,
				TEXT("Hate Points"), TEXT("HATE"), TEXT("Hate points"),
				Value(3)
		},
		//Conversation
		{
			5, NCONSTCAT_CONVERSATIONS,
				TEXT("ENCOURAGE"), TEXT("ENCOURAGE"), TEXT("ENCOURAGE"),
				Value(ExtClass::ConversationId::ENCOURAGE)
		},
		{
			6, NCONSTCAT_CONVERSATIONS,
				TEXT("CALM"), TEXT("CALM"), TEXT("CALM"),
				Value(ExtClass::ConversationId::CALM)
		},
		{
			7, NCONSTCAT_CONVERSATIONS,
				TEXT("PRAISE"), TEXT("PRAISE"), TEXT("PRAISE"),
				Value(ExtClass::ConversationId::PRAISE)
		},
		{
			8, NCONSTCAT_CONVERSATIONS,
				TEXT("GRUMBLE"), TEXT("GRUMBLE"), TEXT("GRUMBLE"),
				Value(ExtClass::ConversationId::GRUMBLE)
		},
		{
			9, NCONSTCAT_CONVERSATIONS,
				TEXT("APOLOGIZE"), TEXT("APOLOGIZE"), TEXT("APOLOGIZE"),
				Value(ExtClass::ConversationId::APOLOGIZE)
		},
		{
			10, NCONSTCAT_CONVERSATIONS,
				TEXT("ENCOURAGE_STUDY"), TEXT("ENCOURAGE_STUDY"), TEXT("ENCOURAGE_STUDY"),
				Value(ExtClass::ConversationId::ENCOURAGE_STUDY)
		},
		{
			11, NCONSTCAT_CONVERSATIONS,
				TEXT("ENCOURAGE_EXERCISE"), TEXT("ENCOURAGE_EXERCISE"), TEXT("ENCOURAGE_EXERCISE"),
				Value(ExtClass::ConversationId::ENCOURAGE_EXERCISE)
		},
		{
			12, NCONSTCAT_CONVERSATIONS,
				TEXT("ENCOURAGE_CLUB"), TEXT("ENCOURAGE_CLUB"), TEXT("ENCOURAGE_CLUB"),
				Value(ExtClass::ConversationId::ENCOURAGE_CLUB)
		},
		{
			13, NCONSTCAT_CONVERSATIONS,
				TEXT("ENCOURAGE_GET_ALONG"), TEXT("ENCOURAGE_GET_ALONG"), TEXT("ENCOURAGE_GET_ALONG"),
				Value(ExtClass::ConversationId::ENCOURAGE_GET_ALONG)
		},
		{
			14, NCONSTCAT_CONVERSATIONS,
				TEXT("REPRIMAND_LEWD"), TEXT("REPRIMAND_LEWD"), TEXT("REPRIMAND_LEWD"),
				Value(ExtClass::ConversationId::REPRIMAND_LEWD)
		},
		{
			15, NCONSTCAT_CONVERSATIONS,
				TEXT("GOOD_RUMOR"), TEXT("GOOD_RUMOR"), TEXT("GOOD_RUMOR"),
				Value(ExtClass::ConversationId::GOOD_RUMOR)
		},
		{
			16, NCONSTCAT_CONVERSATIONS,
				TEXT("GET_ALONG_WITH"), TEXT("GET_ALONG_WITH"), TEXT("GET_ALONG_WITH"),
				Value(ExtClass::ConversationId::GET_ALONG_WITH)
		},
		{
			17, NCONSTCAT_CONVERSATIONS,
				TEXT("I_WANNA_GET_ALONG_WITH"), TEXT("I_WANNA_GET_ALONG_WITH"), TEXT("I_WANNA_GET_ALONG_WITH"),
				Value(ExtClass::ConversationId::I_WANNA_GET_ALONG_WITH)
		},
		{
			18, NCONSTCAT_CONVERSATIONS,
				TEXT("BAD_RUMOR"), TEXT("BAD_RUMOR"), TEXT("BAD_RUMOR"),
				Value(ExtClass::ConversationId::BAD_RUMOR)
		},
		{
			19, NCONSTCAT_CONVERSATIONS,
				TEXT("DO_YOU_LIKE"), TEXT("DO_YOU_LIKE"), TEXT("DO_YOU_LIKE"),
				Value(ExtClass::ConversationId::DO_YOU_LIKE)
		},
		{
			20, NCONSTCAT_CONVERSATIONS,
				TEXT("TALK_LIFE"), TEXT("TALK_LIFE"), TEXT("TALK_LIFE"),
				Value(ExtClass::ConversationId::TALK_LIFE)
		},
		{
			21, NCONSTCAT_CONVERSATIONS,
				TEXT("TALK_HOBBIES"), TEXT("TALK_HOBBIES"), TEXT("TALK_HOBBIES"),
				Value(ExtClass::ConversationId::TALK_HOBBIES)
		},
		{
			22, NCONSTCAT_CONVERSATIONS,
				TEXT("TALK_FOOD"), TEXT("TALK_FOOD"), TEXT("TALK_FOOD"),
				Value(ExtClass::ConversationId::TALK_FOOD)
		},
		{
			23, NCONSTCAT_CONVERSATIONS,
				TEXT("TALK_LOVE"), TEXT("TALK_LOVE"), TEXT("TALK_LOVE"),
				Value(ExtClass::ConversationId::TALK_LOVE)
		},
		{
			24, NCONSTCAT_CONVERSATIONS,
				TEXT("TALK_LEWD"), TEXT("TALK_LEWD"), TEXT("TALK_LEWD"),
				Value(ExtClass::ConversationId::TALK_LEWD)
		},
		{
			25, NCONSTCAT_CONVERSATIONS,
				TEXT("STUDY_TOGETHER"), TEXT("STUDY_TOGETHER"), TEXT("STUDY_TOGETHER"),
				Value(ExtClass::ConversationId::STUDY_TOGETHER)
		},
		{
			26, NCONSTCAT_CONVERSATIONS,
				TEXT("EXERCISE_TOGETHER"), TEXT("EXERCISE_TOGETHER"), TEXT("EXERCISE_TOGETHER"),
				Value(ExtClass::ConversationId::EXERCISE_TOGETHER)
		},
		{
			27, NCONSTCAT_CONVERSATIONS,
				TEXT("CLUB_TOGETHER"), TEXT("CLUB_TOGETHER"), TEXT("CLUB_TOGETHER"),
				Value(ExtClass::ConversationId::CLUB_TOGETHER)
		},
		{
			28, NCONSTCAT_CONVERSATIONS,
				TEXT("MASSAGE"), TEXT("MASSAGE"), TEXT("MASSAGE"),
				Value(ExtClass::ConversationId::MASSAGE)
		},
		{
			29, NCONSTCAT_CONVERSATIONS,
				TEXT("GOTO_CLASS"), TEXT("GOTO_CLASS"), TEXT("GOTO_CLASS"),
				Value(ExtClass::ConversationId::GOTO_CLASS)
		},
		{
			30, NCONSTCAT_CONVERSATIONS,
				TEXT("LUNCH_TOGETHER"), TEXT("LUNCH_TOGETHER"), TEXT("LUNCH_TOGETHER"),
				Value(ExtClass::ConversationId::LUNCH_TOGETHER)
		},
		{
			31, NCONSTCAT_CONVERSATIONS,
				TEXT("TEA_TOGETHER"), TEXT("TEA_TOGETHER"), TEXT("TEA_TOGETHER"),
				Value(ExtClass::ConversationId::TEA_TOGETHER)
		},
		{
			32, NCONSTCAT_CONVERSATIONS,
				TEXT("GO_HOME_TOGETHER"), TEXT("GO_HOME_TOGETHER"), TEXT("GO_HOME_TOGETHER"),
				Value(ExtClass::ConversationId::GO_HOME_TOGETHER)
		},
		{
			33, NCONSTCAT_CONVERSATIONS,
				TEXT("GO_PLAY_TOGETHER"), TEXT("GO_PLAY_TOGETHER"), TEXT("GO_PLAY_TOGETHER"),
				Value(ExtClass::ConversationId::GO_PLAY_TOGETHER)
		},
		{
			34, NCONSTCAT_CONVERSATIONS,
				TEXT("GO_EAT_TOGETHER"), TEXT("GO_EAT_TOGETHER"), TEXT("GO_EAT_TOGETHER"),
				Value(ExtClass::ConversationId::GO_EAT_TOGETHER)
		},
		{
			35, NCONSTCAT_CONVERSATIONS,
				TEXT("GO_KARAOKE_TOGETHER"), TEXT("GO_KARAOKE_TOGETHER"), TEXT("GO_KARAOKE_TOGETHER"),
				Value(ExtClass::ConversationId::GO_KARAOKE_TOGETHER)
		},
		{
			36, NCONSTCAT_CONVERSATIONS,
				TEXT("STUDY_HOME"), TEXT("STUDY_HOME"), TEXT("STUDY_HOME"),
				Value(ExtClass::ConversationId::STUDY_HOME)
		},
		{
			37, NCONSTCAT_CONVERSATIONS,
				TEXT("STUDY_HOME_H"), TEXT("STUDY_HOME_H"), TEXT("STUDY_HOME_H"),
				Value(ExtClass::ConversationId::STUDY_HOME_H)
		},
		{
			38, NCONSTCAT_CONVERSATIONS,
				TEXT("INSULT"), TEXT("INSULT"), TEXT("INSULT"),
				Value(ExtClass::ConversationId::INSULT)
		},
		{
			39, NCONSTCAT_CONVERSATIONS,
				TEXT("FIGHT"), TEXT("FIGHT"), TEXT("FIGHT"),
				Value(ExtClass::ConversationId::FIGHT)
		},
		{
			40, NCONSTCAT_CONVERSATIONS,
				TEXT("FORCE_IGNORE"), TEXT("FORCE_IGNORE"), TEXT("FORCE_IGNORE"),
				Value(ExtClass::ConversationId::FORCE_IGNORE)
		},
		{
			41, NCONSTCAT_CONVERSATIONS,
				TEXT("FORCE_SHOW_THAT"), TEXT("FORCE_SHOW_THAT"), TEXT("FORCE_SHOW_THAT"),
				Value(ExtClass::ConversationId::FORCE_SHOW_THAT)
		},
		{
			42, NCONSTCAT_CONVERSATIONS,
				TEXT("FORCE_PUT_THIS_ON"), TEXT("FORCE_PUT_THIS_ON"), TEXT("FORCE_PUT_THIS_ON"),
				Value(ExtClass::ConversationId::FORCE_PUT_THIS_ON)
		},
		{
			43, NCONSTCAT_CONVERSATIONS,
				TEXT("FORCE_H"), TEXT("FORCE_H"), TEXT("FORCE_H"),
				Value(ExtClass::ConversationId::FORCE_H)
		},
		{
			44, NCONSTCAT_CONVERSATIONS,
				TEXT("MAKE_JOIN_CLUB"), TEXT("MAKE_JOIN_CLUB"), TEXT("MAKE_JOIN_CLUB"),
				Value(ExtClass::ConversationId::MAKE_JOIN_CLUB)
		},
		{
			45, NCONSTCAT_CONVERSATIONS,
				TEXT("ASK_DATE"), TEXT("ASK_DATE"), TEXT("ASK_DATE"),
				Value(ExtClass::ConversationId::ASK_DATE)
		},
		{
			46, NCONSTCAT_CONVERSATIONS,
				TEXT("CONFESS"), TEXT("CONFESS"), TEXT("CONFESS"),
				Value(ExtClass::ConversationId::CONFESS)
		},
		{
			47, NCONSTCAT_CONVERSATIONS,
				TEXT("ASK_COUPLE"), TEXT("ASK_COUPLE"), TEXT("ASK_COUPLE"),
				Value(ExtClass::ConversationId::ASK_COUPLE)
		},
		{
			48, NCONSTCAT_CONVERSATIONS,
				TEXT("ASK_BREAKUP"), TEXT("ASK_BREAKUP"), TEXT("ASK_BREAKUP"),
				Value(ExtClass::ConversationId::ASK_BREAKUP)
		},
		{
			49, NCONSTCAT_CONVERSATIONS,
				TEXT("HEADPAT"), TEXT("HEADPAT"), TEXT("HEADPAT"),
				Value(ExtClass::ConversationId::HEADPAT)
		},
		{
			50, NCONSTCAT_CONVERSATIONS,
				TEXT("HUG"), TEXT("HUG"), TEXT("HUG"),
				Value(ExtClass::ConversationId::HUG)
		},
		{
			51, NCONSTCAT_CONVERSATIONS,
				TEXT("KISS"), TEXT("KISS"), TEXT("KISS"),
				Value(ExtClass::ConversationId::KISS)
		},
		{
			52, NCONSTCAT_CONVERSATIONS,
				TEXT("TOUCH"), TEXT("TOUCH"), TEXT("TOUCH"),
				Value(ExtClass::ConversationId::TOUCH)
		},
		{
			53, NCONSTCAT_CONVERSATIONS,
				TEXT("NORMAL_H"), TEXT("NORMAL_H"), TEXT("NORMAL_H"),
				Value(ExtClass::ConversationId::NORMAL_H)
		},
		{
			54, NCONSTCAT_CONVERSATIONS,
				TEXT("FOLLOW_ME"), TEXT("FOLLOW_ME"), TEXT("FOLLOW_ME"),
				Value(ExtClass::ConversationId::FOLLOW_ME)
		},
		{
			55, NCONSTCAT_CONVERSATIONS,
				TEXT("GO_AWAY"), TEXT("GO_AWAY"), TEXT("GO_AWAY"),
				Value(ExtClass::ConversationId::GO_AWAY)
		},
		{
			56, NCONSTCAT_CONVERSATIONS,
				TEXT("COME_TO"), TEXT("COME_TO"), TEXT("COME_TO"),
				Value(ExtClass::ConversationId::COME_TO)
		},
		{
			57, NCONSTCAT_CONVERSATIONS,
				TEXT("NEVERMIND"), TEXT("NEVERMIND"), TEXT("NEVERMIND"),
				Value(ExtClass::ConversationId::NEVERMIND)
		},
		{
			58, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_STUDY"), TEXT("MINNA_STUDY"), TEXT("MINNA_STUDY"),
				Value(ExtClass::ConversationId::MINNA_STUDY)
		},
		{
			59, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_SPORTS"), TEXT("MINNA_SPORTS"), TEXT("MINNA_SPORTS"),
				Value(ExtClass::ConversationId::MINNA_SPORTS)
		},
		{
			60, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_CLUB"), TEXT("MINNA_CLUB"), TEXT("MINNA_CLUB"),
				Value(ExtClass::ConversationId::MINNA_CLUB)
		},
		{
			61, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_LUNCH"), TEXT("MINNA_LUNCH"), TEXT("MINNA_LUNCH"),
				Value(ExtClass::ConversationId::MINNA_LUNCH)
		},
		{
			62, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_REST"), TEXT("MINNA_REST"), TEXT("MINNA_REST"),
				Value(ExtClass::ConversationId::MINNA_REST)
		},
		{
			63, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_EAT"), TEXT("MINNA_EAT"), TEXT("MINNA_EAT"),
				Value(ExtClass::ConversationId::MINNA_EAT)
		},
		{
			64, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_KARAOKE"), TEXT("MINNA_KARAOKE"), TEXT("MINNA_KARAOKE"),
				Value(ExtClass::ConversationId::MINNA_KARAOKE)
		},
		{
			65, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_BE_FRIENDLY"), TEXT("MINNA_BE_FRIENDLY"), TEXT("MINNA_BE_FRIENDLY"),
				Value(ExtClass::ConversationId::MINNA_BE_FRIENDLY)
		},
		{
			66, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_COME"), TEXT("MINNA_COME"), TEXT("MINNA_COME"),
				Value(ExtClass::ConversationId::MINNA_COME)
		},
		{
			67, NCONSTCAT_CONVERSATIONS,
				TEXT("INTERRUPT_COMPETE"), TEXT("INTERRUPT_COMPETE"), TEXT("INTERRUPT_COMPETE"),
				Value(ExtClass::ConversationId::INTERRUPT_COMPETE)
		},
		{
			68, NCONSTCAT_CONVERSATIONS,
				TEXT("INTERRUPT_WHAT_ARE_YOU_DOING"), TEXT("INTERRUPT_WHAT_ARE_YOU_DOING"), TEXT("INTERRUPT_WHAT_ARE_YOU_DOING"),
				Value(ExtClass::ConversationId::INTERRUPT_WHAT_ARE_YOU_DOING)
		},
		{
			69, NCONSTCAT_CONVERSATIONS,
				TEXT("INTERRUPT_STOP_QUARREL"), TEXT("INTERRUPT_STOP_QUARREL"), TEXT("INTERRUPT_STOP_QUARREL"),
				Value(ExtClass::ConversationId::INTERRUPT_STOP_QUARREL)
		},
		{
			70, NCONSTCAT_CONVERSATIONS,
				TEXT("H_END"), TEXT("H_END"), TEXT("H_END"),
				Value(ExtClass::ConversationId::H_END)
		},
		{
			71, NCONSTCAT_CONVERSATIONS,
				TEXT("H_NOTE"), TEXT("H_NOTE"), TEXT("H_NOTE"),
				Value(ExtClass::ConversationId::H_NOTE)
		},
		{
			72, NCONSTCAT_CONVERSATIONS,
				TEXT("TRY_3P"), TEXT("TRY_3P"), TEXT("TRY_3P"),
				Value(ExtClass::ConversationId::TRY_3P)
		},
		{
			73, NCONSTCAT_CONVERSATIONS,
				TEXT("REQUEST_MASSAGE"), TEXT("REQUEST_MASSAGE"), TEXT("REQUEST_MASSAGE"),
				Value(ExtClass::ConversationId::REQUEST_MASSAGE)
		},
		{
			74, NCONSTCAT_CONVERSATIONS,
				TEXT("REQUEST_KISS"), TEXT("REQUEST_KISS"), TEXT("REQUEST_KISS"),
				Value(ExtClass::ConversationId::REQUEST_KISS)
		},
		{
			75, NCONSTCAT_CONVERSATIONS,
				TEXT("REQUEST_HUG"), TEXT("REQUEST_HUG"), TEXT("REQUEST_HUG"),
				Value(ExtClass::ConversationId::REQUEST_HUG)
		},
		{
			76, NCONSTCAT_CONVERSATIONS,
				TEXT("SKIP_CLASS"), TEXT("SKIP_CLASS"), TEXT("SKIP_CLASS"),
				Value(ExtClass::ConversationId::SKIP_CLASS)
		},
		{
			77, NCONSTCAT_CONVERSATIONS,
				TEXT("SKIP_CLASS_H"), TEXT("SKIP_CLASS_H"), TEXT("SKIP_CLASS_H"),
				Value(ExtClass::ConversationId::SKIP_CLASS_H)
		},
		{
			78, NCONSTCAT_CONVERSATIONS,
				TEXT("SKIP_CLASS_SURPRISE_H"), TEXT("SKIP_CLASS_SURPRISE_H"), TEXT("SKIP_CLASS_SURPRISE_H"),
				Value(ExtClass::ConversationId::SKIP_CLASS_SURPRISE_H)
		},
		{
			79, NCONSTCAT_CONVERSATIONS,
				TEXT("DID_YOU_HAVE_H"), TEXT("DID_YOU_HAVE_H"), TEXT("DID_YOU_HAVE_H"),
				Value(ExtClass::ConversationId::DID_YOU_HAVE_H)
		},
		{
			80, NCONSTCAT_CONVERSATIONS,
				TEXT("SHOW_UNDERWEAR"), TEXT("SHOW_UNDERWEAR"), TEXT("SHOW_UNDERWEAR"),
				Value(ExtClass::ConversationId::SHOW_UNDERWEAR)
		},
		{
			81, NCONSTCAT_CONVERSATIONS,
				TEXT("DID_YOU_HAVE_H_WITH"), TEXT("DID_YOU_HAVE_H_WITH"), TEXT("DID_YOU_HAVE_H_WITH"),
				Value(ExtClass::ConversationId::DID_YOU_HAVE_H_WITH)
		},
		{
			82, NCONSTCAT_CONVERSATIONS,
				TEXT("EXCHANGE_ITEMS"), TEXT("EXCHANGE_ITEMS"), TEXT("EXCHANGE_ITEMS"),
				Value(ExtClass::ConversationId::EXCHANGE_ITEMS)
		},
		{
			83, NCONSTCAT_CONVERSATIONS,
				TEXT("LEWD_PROMISE"), TEXT("LEWD_PROMISE"), TEXT("LEWD_PROMISE"),
				Value(ExtClass::ConversationId::LEWD_PROMISE)
		},
		{
			84, NCONSTCAT_CONVERSATIONS,
				TEXT("LEWD_REWARD"), TEXT("LEWD_REWARD"), TEXT("LEWD_REWARD"),
				Value(ExtClass::ConversationId::LEWD_REWARD)
		},
		{
			85, NCONSTCAT_CONVERSATIONS,
				TEXT("TOGETHER_FOREVER"), TEXT("TOGETHER_FOREVER"), TEXT("TOGETHER_FOREVER"),
				Value(ExtClass::ConversationId::TOGETHER_FOREVER)
		},
		{
			86, NCONSTCAT_CONVERSATIONS,
				TEXT("MURDER"), TEXT("MURDER"), TEXT("MURDER"),
				Value(ExtClass::ConversationId::MURDER)
		},
		{
			87, NCONSTCAT_CONVERSATIONS,
				TEXT("SLAP"), TEXT("SLAP"), TEXT("SLAP"),
				Value(ExtClass::ConversationId::SLAP)
		},
		{
			88, NCONSTCAT_CONVERSATIONS,
				TEXT("GOOD_MORNING_KISS"), TEXT("GOOD_MORNING_KISS"), TEXT("GOOD_MORNING_KISS"),
				Value(ExtClass::ConversationId::GOOD_MORNING_KISS)
		},
		{
			89, NCONSTCAT_CONVERSATIONS,
				TEXT("GOOD_BYE_KISS"), TEXT("GOOD_BYE_KISS"), TEXT("GOOD_BYE_KISS"),
				Value(ExtClass::ConversationId::GOOD_BYE_KISS)
		},
		{
			90, NCONSTCAT_CONVERSATIONS,
				TEXT("NO_PROMPT_KISS"), TEXT("NO_PROMPT_KISS"), TEXT("NO_PROMPT_KISS"),
				Value(ExtClass::ConversationId::NO_PROMPT_KISS)
		},
		{
			91, NCONSTCAT_CONVERSATIONS,
				TEXT("FORCE_BREAKUP"), TEXT("FORCE_BREAKUP"), TEXT("FORCE_BREAKUP"),
				Value(ExtClass::ConversationId::FORCE_BREAKUP)
		},
		{
			92, NCONSTCAT_CONVERSATIONS,
				TEXT("REVEAL_PREGNANCY"), TEXT("REVEAL_PREGNANCY"), TEXT("REVEAL_PREGNANCY"),
				Value(ExtClass::ConversationId::REVEAL_PREGNANCY)
		},
		{
			93, NCONSTCAT_CONVERSATIONS,
				TEXT("I_WILL_CHEAT"), TEXT("I_WILL_CHEAT"), TEXT("I_WILL_CHEAT"),
				Value(ExtClass::ConversationId::I_WILL_CHEAT)
		},
		{
			94, NCONSTCAT_CONVERSATIONS,
				TEXT("EXPLOITABLE_LINE"), TEXT("EXPLOITABLE_LINE"), TEXT("EXPLOITABLE_LINE"),
				Value(ExtClass::ConversationId::EXPLOITABLE_LINE)
		},
		{
			95, NCONSTCAT_CONVERSATIONS,
				TEXT("STOP_FOLLOWING"), TEXT("STOP_FOLLOWING"), TEXT("STOP_FOLLOWING"),
				Value(ExtClass::ConversationId::STOP_FOLLOWING)
		},
		{
			96, NCONSTCAT_CONVERSATIONS,
				TEXT("MURDER_NOTICE"), TEXT("MURDER_NOTICE"), TEXT("MURDER_NOTICE"),
				Value(ExtClass::ConversationId::MURDER_NOTICE)
		},
		{
			97, NCONSTCAT_CONVERSATIONS,
				TEXT("SOMEONE_LIKES_YOU"), TEXT("SOMEONE_LIKES_YOU"), TEXT("SOMEONE_LIKES_YOU"),
				Value(ExtClass::ConversationId::SOMEONE_LIKES_YOU)
		},
		{
			98, NCONSTCAT_CONVERSATIONS,
				TEXT("SOMEONE_GOT_CONFESSED_TO"), TEXT("SOMEONE_GOT_CONFESSED_TO"), TEXT("SOMEONE_GOT_CONFESSED_TO"),
				Value(ExtClass::ConversationId::SOMEONE_GOT_CONFESSED_TO)
		},
		{
			99, NCONSTCAT_CONVERSATIONS,
				TEXT("DID_YOU_DATE_SOMEONE"), TEXT("DID_YOU_DATE_SOMEONE"), TEXT("DID_YOU_DATE_SOMEONE"),
				Value(ExtClass::ConversationId::DID_YOU_DATE_SOMEONE)
		},
		{
			100, NCONSTCAT_CONVERSATIONS,
				TEXT("I_SAW_SOMEONE_HAVE_H"), TEXT("I_SAW_SOMEONE_HAVE_H"), TEXT("I_SAW_SOMEONE_HAVE_H"),
				Value(ExtClass::ConversationId::I_SAW_SOMEONE_HAVE_H)
		},
		{
			101, NCONSTCAT_CONVERSATIONS,
				TEXT("GUST_OF_WIND"), TEXT("GUST_OF_WIND"), TEXT("GUST_OF_WIND"),
				Value(ExtClass::ConversationId::GUST_OF_WIND)
		},
		{
			102, NCONSTCAT_CONVERSATIONS,
				TEXT("DO_NOT_GET_INVOLVED"), TEXT("DO_NOT_GET_INVOLVED"), TEXT("DO_NOT_GET_INVOLVED"),
				Value(ExtClass::ConversationId::DO_NOT_GET_INVOLVED)
		},
		{
			103, NCONSTCAT_CONVERSATIONS,
				TEXT("SHAMELESS"), TEXT("SHAMELESS"), TEXT("SHAMELESS"),
				Value(ExtClass::ConversationId::SHAMELESS)
		},
		{
			104, NCONSTCAT_CONVERSATIONS,
				TEXT("NO_PROMPT_H"), TEXT("NO_PROMPT_H"), TEXT("NO_PROMPT_H"),
				Value(ExtClass::ConversationId::NO_PROMPT_H)
		},
		{
			105, NCONSTCAT_CONVERSATIONS,
				TEXT("AFTER_DATE_H"), TEXT("AFTER_DATE_H"), TEXT("AFTER_DATE_H"),
				Value(ExtClass::ConversationId::AFTER_DATE_H)
		},
		{
			106, NCONSTCAT_CONVERSATIONS,
				TEXT("FOLLOW_ME_H"), TEXT("FOLLOW_ME_H"), TEXT("FOLLOW_ME_H"),
				Value(ExtClass::ConversationId::FOLLOW_ME_H)
		},
		{
			107, NCONSTCAT_CONVERSATIONS,
				TEXT("DATE_GREETING"), TEXT("DATE_GREETING"), TEXT("DATE_GREETING"),
				Value(ExtClass::ConversationId::DATE_GREETING)
		},
		{
			108, NCONSTCAT_CONVERSATIONS,
				TEXT("CHANGE_CLOTHES"), TEXT("CHANGE_CLOTHES"), TEXT("CHANGE_CLOTHES"),
				Value(ExtClass::ConversationId::CHANGE_CLOTHES)
		},
		{
			109, NCONSTCAT_CONVERSATIONS,
				TEXT("STALK"), TEXT("STALK"), TEXT("STALK"),
				Value(ExtClass::ConversationId::STALK)
		},
		{
			110, NCONSTCAT_CONVERSATIONS,
				TEXT("STALK_FROM_AFAR"), TEXT("STALK_FROM_AFAR"), TEXT("STALK_FROM_AFAR"),
				Value(ExtClass::ConversationId::STALK_FROM_AFAR)
		},
		{
			111, NCONSTCAT_CONVERSATIONS,
				TEXT("DO_STUDY"), TEXT("DO_STUDY"), TEXT("DO_STUDY"),
				Value(ExtClass::ConversationId::DO_STUDY)
		},
		{
			112, NCONSTCAT_CONVERSATIONS,
				TEXT("DO_EXERCISE"), TEXT("DO_EXERCISE"), TEXT("DO_EXERCISE"),
				Value(ExtClass::ConversationId::DO_EXERCISE)
		},
		{
			113, NCONSTCAT_CONVERSATIONS,
				TEXT("DO_CLUB"), TEXT("DO_CLUB"), TEXT("DO_CLUB"),
				Value(ExtClass::ConversationId::DO_CLUB)
		},
		{
			114, NCONSTCAT_CONVERSATIONS,
				TEXT("BREAK_CHAT"), TEXT("BREAK_CHAT"), TEXT("BREAK_CHAT"),
				Value(ExtClass::ConversationId::BREAK_CHAT)
		},
		{
			115, NCONSTCAT_CONVERSATIONS,
				TEXT("BREAK_H"), TEXT("BREAK_H"), TEXT("BREAK_H"),
				Value(ExtClass::ConversationId::BREAK_H)
		},
		{
			116, NCONSTCAT_CONVERSATIONS,
				TEXT("TEST_3P"), TEXT("TEST_3P"), TEXT("TEST_3P"),
				Value(ExtClass::ConversationId::TEST_3P)
		},
		{
			117, NCONSTCAT_CONVERSATIONS,
				TEXT("MINNA_H"), TEXT("MINNA_H"), TEXT("MINNA_H"),
				Value(ExtClass::ConversationId::MINNA_H)
		},
		//Trait
		{
			118, NCONSTCAT_TRAIT,
				TEXT("EASYGOING"), TEXT("EASYGOING"), TEXT("EASYGOING"),
				Value(0)
		},
		{
			119, NCONSTCAT_TRAIT,
				TEXT("AFFABLE"), TEXT("AFFABLE"), TEXT("AFFABLE"),
				Value(1)
		},
		{
			120, NCONSTCAT_TRAIT,
				TEXT("BAD_WITH_GUYS"), TEXT("BAD_WITH_GUYS"), TEXT("BAD_WITH_GUYS"),
				Value(2)
		},
		{
			121, NCONSTCAT_TRAIT,
				TEXT("BAD_WITH_GIRLS"), TEXT("BAD_WITH_GIRLS"), TEXT("BAD_WITH_GIRLS"),
				Value(3)
		},
		{
			122, NCONSTCAT_TRAIT,
				TEXT("CHARMING"), TEXT("CHARMING"), TEXT("CHARMING"),
				Value(4)
		},
		{
			123, NCONSTCAT_TRAIT,
				TEXT("TSUNDERE"), TEXT("TSUNDERE"), TEXT("TSUNDERE"),
				Value(5)
		},
		{
			124, NCONSTCAT_TRAIT,
				TEXT("CHIVALROUS"), TEXT("CHIVALROUS"), TEXT("CHIVALROUS"),
				Value(6)
		},
		{
			125, NCONSTCAT_TRAIT,
				TEXT("TRENDY"), TEXT("TRENDY"), TEXT("TRENDY"),
				Value(7)
		},
		{
			126, NCONSTCAT_TRAIT,
				TEXT("OBEDIENT"), TEXT("OBEDIENT"), TEXT("OBEDIENT"),
				Value(8)
		},
		{
			127, NCONSTCAT_TRAIT,
				TEXT("POSITIVE"), TEXT("POSITIVE"), TEXT("POSITIVE"),
				Value(9)
		},
		{
			128, NCONSTCAT_TRAIT,
				TEXT("SHY"), TEXT("SHY"), TEXT("SHY"),
				Value(10)
		},
		{
			129, NCONSTCAT_TRAIT,
				TEXT("JEALOUS"), TEXT("JEALOUS"), TEXT("JEALOUS"),
				Value(11)
		},
		{
			130, NCONSTCAT_TRAIT,
				TEXT("MELANCHOLY"), TEXT("MELANCHOLY"), TEXT("MELANCHOLY"),
				Value(12)
		},
		{
			131, NCONSTCAT_TRAIT,
				TEXT("PERVERTED"), TEXT("PERVERTED"), TEXT("PERVERTED"),
				Value(13)
		},
		{
			132, NCONSTCAT_TRAIT,
				TEXT("SERIOUS"), TEXT("SERIOUS"), TEXT("SERIOUS"),
				Value(14)
		},
		{
			133, NCONSTCAT_TRAIT,
				TEXT("CALM"), TEXT("CALM"), TEXT("CALM"),
				Value(15)
		},
		{
			134, NCONSTCAT_TRAIT,
				TEXT("IMPULSIVE"), TEXT("IMPULSIVE"), TEXT("IMPULSIVE"),
				Value(16)
		},
		{
			135, NCONSTCAT_TRAIT,
				TEXT("ABSENTMINDED"), TEXT("ABSENTMINDED"), TEXT("ABSENTMINDED"),
				Value(17)
		},
		{
			136, NCONSTCAT_TRAIT,
				TEXT("VIOLENT"), TEXT("VIOLENT"), TEXT("VIOLENT"),
				Value(18)
		},
		{
			137, NCONSTCAT_TRAIT,
				TEXT("PASSIVE"), TEXT("PASSIVE"), TEXT("PASSIVE"),
				Value(19)
		},
		{
			138, NCONSTCAT_TRAIT,
				TEXT("MEDDLESOME"), TEXT("MEDDLESOME"), TEXT("MEDDLESOME"),
				Value(20)
		},
		{
			139, NCONSTCAT_TRAIT,
				TEXT("CLASS_PREZ"), TEXT("CLASS_PREZ"), TEXT("CLASS_PREZ"),
				Value(21)
		},
		{
			140, NCONSTCAT_TRAIT,
				TEXT("CHATTY"), TEXT("CHATTY"), TEXT("CHATTY"),
				Value(22)
		},
		{
			141, NCONSTCAT_TRAIT,
				TEXT("ALWAYS_HUNGRY"), TEXT("ALWAYS_HUNGRY"), TEXT("ALWAYS_HUNGRY"),
				Value(23)
		},
		{
			142, NCONSTCAT_TRAIT,
				TEXT("ROMANTIC"), TEXT("ROMANTIC"), TEXT("ROMANTIC"),
				Value(24)
		},
		{
			143, NCONSTCAT_TRAIT,
				TEXT("SINGLEMINDED"), TEXT("SINGLEMINDED"), TEXT("SINGLEMINDED"),
				Value(25)
		},
		{
			144, NCONSTCAT_TRAIT,
				TEXT("INDECISIVE"), TEXT("INDECISIVE"), TEXT("INDECISIVE"),
				Value(26)
		},
		{
			145, NCONSTCAT_TRAIT,
				TEXT("COMPETITIVE"), TEXT("COMPETITIVE"), TEXT("COMPETITIVE"),
				Value(27)
		},
		{
			146, NCONSTCAT_TRAIT,
				TEXT("SCHEMING"), TEXT("SCHEMING"), TEXT("SCHEMING"),
				Value(28)
		},
		{
			147, NCONSTCAT_TRAIT,
				TEXT("DILIGENT"), TEXT("DILIGENT"), TEXT("DILIGENT"),
				Value(29)
		},
		{
			148, NCONSTCAT_TRAIT,
				TEXT("WILD"), TEXT("WILD"), TEXT("WILD"),
				Value(30)
		},
		{
			149, NCONSTCAT_TRAIT,
				TEXT("MASOCHIST"), TEXT("MASOCHIST"), TEXT("MASOCHIST"),
				Value(31)
		},
		{
			150, NCONSTCAT_TRAIT,
				TEXT("SWEATY"), TEXT("SWEATY"), TEXT("SWEATY"),
				Value(32)
		},
		{
			151, NCONSTCAT_TRAIT,
				TEXT("EVIL"), TEXT("EVIL"), TEXT("EVIL"),
				Value(33)
		},
		{
			152, NCONSTCAT_TRAIT,
				TEXT("DEAF"), TEXT("DEAF"), TEXT("DEAF"),
				Value(34)
		},
		{
			153, NCONSTCAT_TRAIT,
				TEXT("EXPLOITABLE"), TEXT("EXPLOITABLE"), TEXT("EXPLOITABLE"),
				Value(35)
		},
		{
			154, NCONSTCAT_TRAIT,
				TEXT("ASEXUAL"), TEXT("ASEXUAL"), TEXT("ASEXUAL"),
				Value(36)
		},
		{
			155, NCONSTCAT_TRAIT,
				TEXT("LUCKY"), TEXT("LUCKY"), TEXT("LUCKY"),
				Value(37)
		},
		{
			156, NCONSTCAT_TRAIT,
				TEXT("RAINBOW"), TEXT("RAINBOW"), TEXT("RAINBOW"),
				Value(38)
		},
		//Period
		{
			157, NCONSTCAT_TIME_PERIOD,
			TEXT("MORNING_ROOM"), TEXT("MORNING_ROOM"), TEXT("MORNING_ROOM"),
			Value(ExtClass::PeriodId::MORNING_ROOM)
		},
		{
			158, NCONSTCAT_TIME_PERIOD,
			TEXT("MORNING_SCHOOL"), TEXT("MORNING_SCHOOL"), TEXT("MORNING_SCHOOL"),
			Value(ExtClass::PeriodId::MORNING_SCHOOL)
		},
		{
			159, NCONSTCAT_TIME_PERIOD,
			TEXT("FIRST_LESSON"), TEXT("FIRST_LESSON"), TEXT("FIRST_LESSON"),
			Value(ExtClass::PeriodId::FIRST_LESSON)
		},
		{
			160, NCONSTCAT_TIME_PERIOD,
			TEXT("FIRST_BREAK"), TEXT("FIRST_BREAK"), TEXT("FIRST_BREAK"),
			Value(ExtClass::PeriodId::FIRST_BREAK)
		},
		{
			161, NCONSTCAT_TIME_PERIOD,
			TEXT("SPORTS"), TEXT("SPORTS"), TEXT("SPORTS"),
			Value(ExtClass::PeriodId::SPORTS)
		},
		{
			162, NCONSTCAT_TIME_PERIOD,
			TEXT("SECOND_BREAK"), TEXT("SECOND_BREAK"), TEXT("SECOND_BREAK"),
			Value(ExtClass::PeriodId::SECOND_BREAK)
		},
		{
			163, NCONSTCAT_TIME_PERIOD,
			TEXT("CLUB"), TEXT("CLUB"), TEXT("CLUB"),
			Value(ExtClass::PeriodId::CLUB)
		},
		{
			164, NCONSTCAT_TIME_PERIOD,
			TEXT("EVENING_SCHOOL"), TEXT("EVENING_SCHOOL"), TEXT("EVENING_SCHOOL"),
			Value(ExtClass::PeriodId::EVENING_SCHOOL)
		},
		{
			165, NCONSTCAT_TIME_PERIOD,
			TEXT("EVENING_ROOM"), TEXT("EVENING_ROOM"), TEXT("EVENING_ROOM"),
			Value(ExtClass::PeriodId::EVENING_ROOM)
		},
		{
			166, NCONSTCAT_TIME_PERIOD,
			TEXT("SLEEP"), TEXT("SLEEP"), TEXT("SLEEP"),
			Value(ExtClass::PeriodId::SLEEP)
		},
		//Time of Day
		{
			167, NCONSTCAT_TIME_DAY,
			TEXT("MONDAY"), TEXT("MONDAY"), TEXT("MONDAY"),
			Value(ExtClass::DayName::MONDAY)
		},
		{
			168, NCONSTCAT_TIME_DAY,
			TEXT("TUESDAY"), TEXT("TUESDAY"), TEXT("TUESDAY"),
			Value(ExtClass::DayName::TUESDAY)
		},
		{
			169, NCONSTCAT_TIME_DAY,
			TEXT("WEDNESDAY"), TEXT("WEDNESDAY"), TEXT("WEDNESDAY"),
			Value(ExtClass::DayName::WEDNESDAY)
		},
		{
			170, NCONSTCAT_TIME_DAY,
			TEXT("THURSDAY"), TEXT("THURSDAY"), TEXT("THURSDAY"),
			Value(ExtClass::DayName::THURSDAY)
		},
		{
			171, NCONSTCAT_TIME_DAY,
			TEXT("FRIDAY"), TEXT("FRIDAY"), TEXT("FRIDAY"),
			Value(ExtClass::DayName::FRIDAY)
		},
		{
			172, NCONSTCAT_TIME_DAY,
			TEXT("SATURDAY"), TEXT("SATURDAY"), TEXT("SATURDAY"),
			Value(ExtClass::DayName::SATURDAY)
		},
		{
			173, NCONSTCAT_TIME_DAY,
			TEXT("SUNDAY"), TEXT("SUNDAY"), TEXT("SUNDAY"),
			Value(ExtClass::DayName::SUNDAY)
		},
		//Character
		{
			174, NCONSTCAT_CHAR_PREG_RISK,
			TEXT("NORMAL"), TEXT("NORMAL"), TEXT("NORMAL"),
			Value(ExtClass::PregnancyRisk::PREGRISK_NORMAL)
		},
		{
			175, NCONSTCAT_CHAR_PREG_RISK,
			TEXT("SAFE"), TEXT("SAFE"), TEXT("SAFE"),
			Value(ExtClass::PregnancyRisk::PREGRISK_SAFE)
		},
		{
			176, NCONSTCAT_CHAR_PREG_RISK,
			TEXT("DANGEROUS"), TEXT("DANGEROUS"), TEXT("DANGEROUS"),
			Value(ExtClass::PregnancyRisk::PREGRISK_DANGEROUS)
		},
		//Events
		{
			177, NCONSTCAT_EVENT_TYPE,
			TEXT("INVALID"), TEXT("INVALID"), TEXT("INVALID"),
			Value(Shared::Triggers::Events::INVALID)
		},
		{
			178, NCONSTCAT_EVENT_TYPE,
			TEXT("Clothes Changed"), TEXT("CLOTHES_CHANGED"), TEXT("Whenever a character changes clothes, either in the changing room or by entering the next period. (Not yet implemented)"),
			Value(Shared::Triggers::Events::CLOTHES_CHANGED)
		},
		{
			179, NCONSTCAT_EVENT_TYPE,
			TEXT("Card Initialized"), TEXT("CARD_INITIALIZED"), TEXT("After the AAU Card data was successfully loaded, either because a class containing this card was loaded, or because "
					 "this card was added to the class roster"),
			Value(Shared::Triggers::Events::CARD_INITIALIZED)
		},
		{
			180, NCONSTCAT_EVENT_TYPE,
			TEXT("Card Destroyed"), TEXT("CARD_DESTROYED"), TEXT("Before the AAU Card data will be unloaded"),
			Value(Shared::Triggers::Events::CARD_DESTROYED)
		},
		{
			181, NCONSTCAT_EVENT_TYPE,
			TEXT("Hi Poly Model Initialized"), TEXT("HI_POLY_INIT"), TEXT("Right after the Characters High Poly Model started loading"),
			Value(Shared::Triggers::Events::HI_POLY_INIT)
		},
		{
			182, NCONSTCAT_EVENT_TYPE,
			TEXT("Hi Poly Model Loaded"), TEXT("HI_POLY_END"), TEXT("Right after the Character High Poly Model finished loading"),
			Value(Shared::Triggers::Events::HI_POLY_END)
		},
		{
			183, NCONSTCAT_EVENT_TYPE,
			TEXT("Card Added to Class"), TEXT("CARD_ADDED"), TEXT("When a card (including this card) is added to a class, after the CARD_INTIALIZED event is executed"),
			Value(Shared::Triggers::Events::CARD_ADDED)
		},
		{
			184, NCONSTCAT_EVENT_TYPE,
			TEXT("A Period Ends"), TEXT("PERIOD_ENDS"), TEXT("After a period ends, including lessons themselves"),
			Value(Shared::Triggers::Events::PERIOD_ENDS)
		},
		{
			185, NCONSTCAT_EVENT_TYPE,
			TEXT("NPC Answers in Conversation"), TEXT("NPC_RESPONSE"), TEXT("Whenever a NPC made a yes/no decision, no matter if towards the PC or another NPC. Triggering Card is the NPC that gives the Answer"),
			Value(Shared::Triggers::Events::NPC_RESPONSE)
		},
		{
			186, NCONSTCAT_EVENT_TYPE,
			TEXT("Npc Starts Walking to a Room"), TEXT("NPC_WALK_TO_ROOM"), TEXT("Whenever a NPC decides to walk towards a room"),
			Value(Shared::Triggers::Events::NPC_WALK_TO_ROOM)
		},
		{
			187, NCONSTCAT_EVENT_TYPE,
			TEXT("Npc Wants to do something with no Target"), TEXT("NPC_WANT_ACTION_NOTARGET"), TEXT("Whenever a NPC decides to do an action that does not require another Npc"),
			Value(Shared::Triggers::Events::NPC_WANT_ACTION_NOTARGET)
		},
		{
			188, NCONSTCAT_EVENT_TYPE,
			TEXT("Npc Wants to Talk With Someone"), TEXT("NPC_WANT_TALK_WITH"), TEXT("Whenever a NPC decides to talk to someone"),
			Value(Shared::Triggers::Events::NPC_WANT_TALK_WITH)
		},
		{
			189, NCONSTCAT_EVENT_TYPE,
			TEXT("Npc Wants to Talk With Someone About Someone"), TEXT("NPC_WANT_TALK_WITH_ABOUT"), TEXT("Whenever a NPC decides to talk to someone about someone else, such as spreading rumors or asking for opinion about someone"),
			Value(Shared::Triggers::Events::NPC_WANT_TALK_WITH_ABOUT)
		},
		{
			190, NCONSTCAT_EVENT_TYPE,
			TEXT("PC conversation state updated"), TEXT("PC_CONVERSATION_STATE_UPDATED"), TEXT("PC Conversation state updated"),
			Value(Shared::Triggers::Events::PC_CONVERSATION_STATE_UPDATED)
		},
		{
			298, NCONSTCAT_EVENT_TYPE,
			TEXT("Pc Answers in a Conversation"), TEXT("PC_RESPONSE"), TEXT("Pc Answers in a Conversation"),
			Value(Shared::Triggers::Events::PC_RESPONSE)
		},
		{
			299, NCONSTCAT_EVENT_TYPE,
			TEXT("PC conversation line updated"), TEXT("PC_CONVERSATION_LINE_UPDATED"), TEXT("PC conversation line updated"),
			Value(Shared::Triggers::Events::PC_CONVERSATION_LINE_UPDATED)
		},
		{
			300, NCONSTCAT_EVENT_TYPE,
			TEXT("Card Changes Room"), TEXT("ROOM_CHANGE"), TEXT("Card Changes Room"),
			Value(Shared::Triggers::Events::ROOM_CHANGE)
		},
		{
			301, NCONSTCAT_EVENT_TYPE,
			TEXT("Key Press"), TEXT("KEY_PRESS"), TEXT("Key Press"),
			Value(Shared::Triggers::Events::KEY_PRESS)
		},
		{
			302, NCONSTCAT_EVENT_TYPE,
			TEXT("H Position Change"), TEXT("HPOSITION_CHANGE"), TEXT("H Position Change"),
			Value(Shared::Triggers::Events::HPOSITION_CHANGE)
		},
		{
			303, NCONSTCAT_EVENT_TYPE,
			TEXT("After PC Response"), TEXT("PC_AFTER_RESPONSE"), TEXT("After PC Response"),
			Value(Shared::Triggers::Events::PC_AFTER_RESPONSE)
		},
		{
			304, NCONSTCAT_EVENT_TYPE,
			TEXT("After NPC Response"), TEXT("NPC_AFTER_RESPONSE"), TEXT("After NPC Response"),
			Value(Shared::Triggers::Events::NPC_AFTER_RESPONSE)
		},
		{
			305, NCONSTCAT_EVENT_TYPE,
			TEXT("HI Poly Despawn"), TEXT("HI_POLY_DESPAWN"), TEXT("HI Poly Despawn"),
			Value(Shared::Triggers::Events::HI_POLY_DESPAWN)
		},
		{
			306, NCONSTCAT_EVENT_TYPE,
			TEXT("HI Poly Despawn"), TEXT("HI_POLY_DESPAWN"), TEXT("HI Poly Despawn"),
			Value(Shared::Triggers::Events::HI_POLY_DESPAWN)
		},
		{
			307, NCONSTCAT_EVENT_TYPE,
			TEXT("H End"), TEXT("H_END"), TEXT("H End"),
			Value(Shared::Triggers::Events::H_END)
		},
		{
			308, NCONSTCAT_EVENT_TYPE,
			TEXT("H Start"), TEXT("H_START"), TEXT("H Start"),
			Value(Shared::Triggers::Events::H_START)
		},
		//Moods
		{
			191, NCONSTCAT_MOOD,
			TEXT("ENERGETIC"), TEXT("ENERGETIC"), TEXT("ENERGETIC"),
			Value(0)
		},
		{
			192, NCONSTCAT_MOOD,
			TEXT("EMBARRASSED"), TEXT("EMBARRASSED"), TEXT("EMBARRASSED"),
			Value(1)
		},
		{
			193, NCONSTCAT_MOOD,
			TEXT("JEALOUS"), TEXT("JEALOUS"), TEXT("JEALOUS"),
			Value(2)
		},
		{
			194, NCONSTCAT_MOOD,
			TEXT("ANGRY"), TEXT("ANGRY"), TEXT("ANGRY"),
			Value(3)
		},
		{
			195, NCONSTCAT_MOOD,
			TEXT("SAD"), TEXT("SAD"), TEXT("SAD"),
			Value(4)
		},
		{
			196, NCONSTCAT_MOOD,
			TEXT("RELAXED"), TEXT("RELAXED"), TEXT("RELAXED"),
			Value(5)
		},
		{
			197, NCONSTCAT_MOOD,
			TEXT("AROUSED"), TEXT("AROUSED"), TEXT("AROUSED"),
			Value(6)
		},
		{
			198, NCONSTCAT_MOOD,
			TEXT("SERIOUS"), TEXT("SERIOUS"), TEXT("SERIOUS"),
			Value(7)
		},
		{
			199, NCONSTCAT_MOOD,
			TEXT("NORMAL"), TEXT("NORMAL"), TEXT("NORMAL"),
			Value(8)
		},
		//Preferences
		{
			200, NCONSTCAT_PREFERENCE,
			TEXT("Kissing"), TEXT("Kissing"), TEXT("Kissing"),
			Value(0)
		},
		{
			201, NCONSTCAT_PREFERENCE,
			TEXT("Breast Caress"), TEXT("Breast Caress"), TEXT("Breast Caress"),
			Value(1)
		},
		{
			202, NCONSTCAT_PREFERENCE,
			TEXT("Vagina Caress"), TEXT("Vagina Caress"), TEXT("Vagina Caress"),
			Value(2)
		},
		{
			203, NCONSTCAT_PREFERENCE,
			TEXT("Penis Caress"), TEXT("Penis Caress"), TEXT("Penis Caress"),
			Value(3)
		},
		{
			204, NCONSTCAT_PREFERENCE,
			TEXT("Cunningus"), TEXT("Cunningus"), TEXT("Cunningus"),
			Value(4)
		},
		{
			205, NCONSTCAT_PREFERENCE,
			TEXT("Fellation"), TEXT("Fellation"), TEXT("Fellation"),
			Value(5)
		},
		{
			206, NCONSTCAT_PREFERENCE,
			TEXT("Doggy Style"), TEXT("Doggy Style"), TEXT("Doggy Style"),
			Value(6)
		},
		{
			207, NCONSTCAT_PREFERENCE,
			TEXT("Femdom"), TEXT("Femdom"), TEXT("Femdom"),
			Value(7)
		},
		{
			208, NCONSTCAT_PREFERENCE,
			TEXT("Anal"), TEXT("Anal"), TEXT("Anal"),
			Value(8)
		},
		{
			209, NCONSTCAT_PREFERENCE,
			TEXT("No Condom"), TEXT("No Condom"), TEXT("No Condom"),
			Value(9)
		},
		{
			210, NCONSTCAT_PREFERENCE,
			TEXT("Swallow"), TEXT("Swallow"), TEXT("Swallow"),
			Value(10)
		},
		{
			211, NCONSTCAT_PREFERENCE,
			TEXT("Creampies"), TEXT("Creampies"), TEXT("Creampies"),
			Value(11)
		},
		{
			212, NCONSTCAT_PREFERENCE,
			TEXT("Bukkake"), TEXT("Bukkake"), TEXT("Bukkake"),
			Value(12)
		},
		//Opinions
		{
			213, NCONSTCAT_OPINIONS,
			TEXT("Together Forever"), TEXT("Together Forever"), TEXT("Together Forever"),
			Value(4)
		},
		{
			214, NCONSTCAT_OPINIONS,
			TEXT("I'll get you"), TEXT("I'll get you"), TEXT("I'll get you"),
			Value(5)
		},
		{
			215, NCONSTCAT_OPINIONS,
			TEXT("Unforgivable"), TEXT("Unforgivable"), TEXT("Unforgivable"),
			Value(6)
		},
		{
			216, NCONSTCAT_OPINIONS,
			TEXT("Cheater"), TEXT("Cheater"), TEXT("Cheater"),
			Value(7)
		},
		{
			217, NCONSTCAT_OPINIONS,
			TEXT("Opinion5"), TEXT("Opinion5"), TEXT("Opinion5"),
			Value(8)
		},
		{
			218, NCONSTCAT_OPINIONS,
			TEXT("Opinion6"), TEXT("Opinion6"), TEXT("Opinion6"),
			Value(9)
		},
		{
			219, NCONSTCAT_OPINIONS,
			TEXT("Opinion7"), TEXT("Opinion7"), TEXT("Opinion7"),
			Value(10)
		},
		{
			220, NCONSTCAT_OPINIONS,
			TEXT("Opinion8"), TEXT("Opinion8"), TEXT("Opinion8"),
			Value(11)
		},
		{
			221, NCONSTCAT_OPINIONS,
			TEXT("Opinion9"), TEXT("Opinion9"), TEXT("Opinion9"),
			Value(12)
		},
		{
			222, NCONSTCAT_OPINIONS,
			TEXT("Opinion10"), TEXT("Opinion10"), TEXT("Opinion10"),
			Value(13)
		},
		{
			223, NCONSTCAT_OPINIONS,
			TEXT("Opinion11"), TEXT("Opinion11"), TEXT("Opinion11"),
			Value(14)
		},
		{
			224, NCONSTCAT_OPINIONS,
			TEXT("Opinion12"), TEXT("Opinion12"), TEXT("Opinion12"),
			Value(15)
		},
		{
			225, NCONSTCAT_OPINIONS,
			TEXT("Opinion13"), TEXT("Opinion13"), TEXT("Opinion13"),
			Value(16)
		},
		{
			226, NCONSTCAT_OPINIONS,
			TEXT("Opinion14"), TEXT("Opinion14"), TEXT("Opinion14"),
			Value(17)
		},
		{
			227, NCONSTCAT_OPINIONS,
			TEXT("Opinion15"), TEXT("Opinion15"), TEXT("Opinion15"),
			Value(18)
		},
		{
			228, NCONSTCAT_OPINIONS,
			TEXT("Opinion16"), TEXT("Opinion16"), TEXT("Opinion16"),
			Value(19)
		},
		{
			229, NCONSTCAT_OPINIONS,
			TEXT("Opinion17"), TEXT("Opinion17"), TEXT("Opinion17"),
			Value(20)
		},
		{
			230, NCONSTCAT_OPINIONS,
			TEXT("Opinion18"), TEXT("Opinion18"), TEXT("Opinion18"),
			Value(21)
		},
		{
			231, NCONSTCAT_OPINIONS,
			TEXT("Opinion19"), TEXT("Opinion19"), TEXT("Opinion19"),
			Value(22)
		},
		{
			232, NCONSTCAT_OPINIONS,
			TEXT("Opinion20"), TEXT("Opinion20"), TEXT("Opinion20"),
			Value(23)
		},
		{
			233, NCONSTCAT_OPINIONS,
			TEXT("Opinion21"), TEXT("Opinion21"), TEXT("Opinion21"),
			Value(24)
		},
		{
			234, NCONSTCAT_OPINIONS,
			TEXT("Opinion22"), TEXT("Opinion22"), TEXT("Opinion22"),
			Value(25)
		},
		{
			235, NCONSTCAT_OPINIONS,
			TEXT("Opinion23"), TEXT("Opinion23"), TEXT("Opinion23"),
			Value(26)
		},
		{
			236, NCONSTCAT_OPINIONS,
			TEXT("Opinion24"), TEXT("Opinion24"), TEXT("Opinion24"),
			Value(27)
		},
		{
			237, NCONSTCAT_OPINIONS,
			TEXT("Opinion25"), TEXT("Opinion25"), TEXT("Opinion25"),
			Value(28)
		},
		{
			238, NCONSTCAT_OPINIONS,
			TEXT("Opinion26"), TEXT("Opinion26"), TEXT("Opinion26"),
			Value(29)
		},
		{
			239, NCONSTCAT_OPINIONS,
			TEXT("Opinion27"), TEXT("Opinion27"), TEXT("Opinion27"),
			Value(30)
		},
		{
			240, NCONSTCAT_OPINIONS,
			TEXT("Opinion28"), TEXT("Opinion28"), TEXT("Opinion28"),
			Value(31)
		},
		{
			241, NCONSTCAT_OPINIONS,
			TEXT("Opinion29"), TEXT("Opinion29"), TEXT("Opinion29"),
			Value(32)
		},
		{
			242, NCONSTCAT_OPINIONS,
			TEXT("Opinion30"), TEXT("Opinion30"), TEXT("Opinion30"),
			Value(33)
		},
		{
			243, NCONSTCAT_OPINIONS,
			TEXT("Opinion31"), TEXT("Opinion31"), TEXT("Opinion31"),
			Value(34)
		},
		{
			244, NCONSTCAT_OPINIONS,
			TEXT("Opinion32"), TEXT("Opinion32"), TEXT("Opinion32"),
			Value(35)
		},
		{
			245, NCONSTCAT_OPINIONS,
			TEXT("Opinion33"), TEXT("Opinion33"), TEXT("Opinion33"),
			Value(36)
		},
		{
			246, NCONSTCAT_OPINIONS,
			TEXT("Opinion34"), TEXT("Opinion34"), TEXT("Opinion34"),
			Value(37)
		},
		{
			247, NCONSTCAT_OPINIONS,
			TEXT("Opinion35"), TEXT("Opinion35"), TEXT("Opinion35"),
			Value(38)
		},
		{
			248, NCONSTCAT_OPINIONS,
			TEXT("Opinion36"), TEXT("Opinion36"), TEXT("Opinion36"),
			Value(39)
		},
		{
			249, NCONSTCAT_OPINIONS,
			TEXT("Opinion37"), TEXT("Opinion37"), TEXT("Opinion37"),
			Value(40)
		},
		{
			250, NCONSTCAT_OPINIONS,
			TEXT("Opinion38"), TEXT("Opinion38"), TEXT("Opinion38"),
			Value(41)
		},
		{
			251, NCONSTCAT_OPINIONS,
			TEXT("Opinion39"), TEXT("Opinion39"), TEXT("Opinion39"),
			Value(42)
		},
		{
			252, NCONSTCAT_OPINIONS,
			TEXT("Opinion40"), TEXT("Opinion40"), TEXT("Opinion40"),
			Value(43)
		},
		{
			253, NCONSTCAT_OPINIONS,
			TEXT("Opinion41"), TEXT("Opinion41"), TEXT("Opinion41"),
			Value(44)
		},
		{
			254, NCONSTCAT_OPINIONS,
			TEXT("Opinion42"), TEXT("Opinion42"), TEXT("Opinion42"),
			Value(45)
		},
		{
			255, NCONSTCAT_OPINIONS,
			TEXT("Opinion43"), TEXT("Opinion43"), TEXT("Opinion43"),
			Value(46)
		},
		{
			256, NCONSTCAT_OPINIONS,
			TEXT("Opinion44"), TEXT("Opinion44"), TEXT("Opinion44"),
			Value(47)
		},
		{
			257, NCONSTCAT_OPINIONS,
			TEXT("Opinion45"), TEXT("Opinion45"), TEXT("Opinion45"),
			Value(48)
		},
		{
			258, NCONSTCAT_OPINIONS,
			TEXT("Opinion46"), TEXT("Opinion46"), TEXT("Opinion46"),
			Value(49)
		},
		{
			259, NCONSTCAT_OPINIONS,
			TEXT("Opinion47"), TEXT("Opinion47"), TEXT("Opinion47"),
			Value(50)
		},
		{
			260, NCONSTCAT_OPINIONS,
			TEXT("Opinion48"), TEXT("Opinion48"), TEXT("Opinion48"),
			Value(51)
		},
		{
			261, NCONSTCAT_OPINIONS,
			TEXT("Opinion49"), TEXT("Opinion49"), TEXT("Opinion49"),
			Value(52)
		},
		{
			262, NCONSTCAT_OPINIONS,
			TEXT("Opinion50"), TEXT("Opinion50"), TEXT("Opinion50"),
			Value(53)
		},
		{
			263, NCONSTCAT_OPINIONS,
			TEXT("Opinion51"), TEXT("Opinion51"), TEXT("Opinion51"),
			Value(54)
		},
		{
			264, NCONSTCAT_OPINIONS,
			TEXT("Opinion52"), TEXT("Opinion52"), TEXT("Opinion52"),
			Value(55)
		},
		{
			265, NCONSTCAT_OPINIONS,
			TEXT("Opinion53"), TEXT("Opinion53"), TEXT("Opinion53"),
			Value(56)
		},
		{
			266, NCONSTCAT_OPINIONS,
			TEXT("Opinion54"), TEXT("Opinion54"), TEXT("Opinion54"),
			Value(57)
		},
		{
			267, NCONSTCAT_OPINIONS,
			TEXT("Opinion55"), TEXT("Opinion55"), TEXT("Opinion55"),
			Value(58)
		},
		{
			268, NCONSTCAT_OPINIONS,
			TEXT("Opinion56"), TEXT("Opinion56"), TEXT("Opinion56"),
			Value(59)
		},
		{
			269, NCONSTCAT_OPINIONS,
			TEXT("Opinion57"), TEXT("Opinion57"), TEXT("Opinion57"),
			Value(60)
		},
		{
			270, NCONSTCAT_OPINIONS,
			TEXT("Opinion58"), TEXT("Opinion58"), TEXT("Opinion58"),
			Value(61)
		},
		{
			271, NCONSTCAT_OPINIONS,
			TEXT("Opinion59"), TEXT("Opinion59"), TEXT("Opinion59"),
			Value(62)
		},
		{
			272, NCONSTCAT_OPINIONS,
			TEXT("Opinion60"), TEXT("Opinion60"), TEXT("Opinion60"),
			Value(63)
		},
		{
			273, NCONSTCAT_OPINIONS,
			TEXT("Opinion61"), TEXT("Opinion61"), TEXT("Opinion61"),
			Value(64)
		},
		{
			274, NCONSTCAT_OPINIONS,
			TEXT("Opinion62"), TEXT("Opinion62"), TEXT("Opinion62"),
			Value(65)
		},
		{
			275, NCONSTCAT_OPINIONS,
			TEXT("Opinion63"), TEXT("Opinion63"), TEXT("Opinion63"),
			Value(66)
		},
		{
			276, NCONSTCAT_OPINIONS,
			TEXT("Opinion64"), TEXT("Opinion64"), TEXT("Opinion64"),
			Value(67)
		},
		{
			277, NCONSTCAT_OPINIONS,
			TEXT("Opinion65"), TEXT("Opinion65"), TEXT("Opinion65"),
			Value(68)
		},
		{
			278, NCONSTCAT_OPINIONS,
			TEXT("Opinion66"), TEXT("Opinion66"), TEXT("Opinion66"),
			Value(69)
		},
		{
			279, NCONSTCAT_OPINIONS,
			TEXT("Opinion67"), TEXT("Opinion67"), TEXT("Opinion67"),
			Value(70)
		},
		{
			280, NCONSTCAT_OPINIONS,
			TEXT("Opinion68"), TEXT("Opinion68"), TEXT("Opinion68"),
			Value(71)
		},
		{
			281, NCONSTCAT_OPINIONS,
			TEXT("Opinion69"), TEXT("Opinion69"), TEXT("Opinion69"),
			Value(72)
		},
		{
			282, NCONSTCAT_OPINIONS,
			TEXT("Opinion70"), TEXT("Opinion70"), TEXT("Opinion70"),
			Value(73)
		},
		{
			282, NCONSTCAT_OPINIONS,
			TEXT("Opinion70"), TEXT("Opinion70"), TEXT("Opinion70"),
			Value(73)
		},
		{
			283, NCONSTCAT_OPINIONS,
			TEXT("Opinion71"), TEXT("Opinion71"), TEXT("Opinion71"),
			Value(74)
		},
		{
			284, NCONSTCAT_OPINIONS,
			TEXT("Opinion72"), TEXT("Opinion72"), TEXT("Opinion72"),
			Value(75)
		},
		{
			285, NCONSTCAT_OPINIONS,
			TEXT("Opinion73"), TEXT("Opinion73"), TEXT("Opinion73"),
			Value(76)
		},
		{
			286, NCONSTCAT_OPINIONS,
			TEXT("Opinion74"), TEXT("Opinion74"), TEXT("Opinion74"),
			Value(77)
		},
		{
			287, NCONSTCAT_OPINIONS,
			TEXT("Opinion75"), TEXT("Opinion75"), TEXT("Opinion75"),
			Value(78)
		},
		{
			288, NCONSTCAT_OPINIONS,
			TEXT("Opinion76"), TEXT("Opinion76"), TEXT("Opinion76"),
			Value(79)
		},
		{
			289, NCONSTCAT_OPINIONS,
			TEXT("Opinion77"), TEXT("Opinion77"), TEXT("Opinion77"),
			Value(80)
		},
		{
			290, NCONSTCAT_OPINIONS,
			TEXT("Opinion78"), TEXT("Opinion78"), TEXT("Opinion78"),
			Value(81)
		},
		{
			291, NCONSTCAT_OPINIONS,
			TEXT("Opinion79"), TEXT("Opinion79"), TEXT("Opinion79"),
			Value(82)
		},
		{
			292, NCONSTCAT_OPINIONS,
			TEXT("Opinion80"), TEXT("Opinion80"), TEXT("Opinion80"),
			Value(83)
		},
		{
			293, NCONSTCAT_OPINIONS,
			TEXT("Opinion81"), TEXT("Opinion81"), TEXT("Opinion81"),
			Value(84)
		},
		{
			294, NCONSTCAT_OPINIONS,
			TEXT("Opinion82"), TEXT("Opinion82"), TEXT("Opinion82"),
			Value(85)
		},
		{
			295, NCONSTCAT_OPINIONS,
			TEXT("Opinion83"), TEXT("Opinion83"), TEXT("Opinion83"),
			Value(86)
		},
		{
			296, NCONSTCAT_OPINIONS,
			TEXT("Opinion84"), TEXT("Opinion84"), TEXT("Opinion84"),
			Value(87)
		},
		{
			297, NCONSTCAT_OPINIONS,
			TEXT("Opinion85"), TEXT("Opinion85"), TEXT("Opinion85"),
			Value(88)
		},
	},
	{ //BOOL
		
	},
	{ //FLOAT
		
	},
	{ //STRING
		
	}

};






}
}
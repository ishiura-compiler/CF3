#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x25 = INT8_MIN;
uint16_t x27 = 1U;
uint64_t x28 = UINT64_MAX;
int32_t x45 = INT32_MIN;
int64_t x46 = 549000539471LL;
int16_t x48 = INT16_MIN;
uint64_t x106 = 116753120273729379LLU;
int8_t x107 = 14;
static int16_t x194 = INT16_MAX;
volatile uint16_t x196 = UINT16_MAX;
uint8_t x389 = UINT8_MAX;
int32_t x390 = 1945332;
static uint8_t x433 = 4U;
int8_t x478 = INT8_MAX;
volatile uint16_t x480 = 5U;
int32_t x513 = INT32_MAX;
int64_t x1041 = 123694LL;
static int16_t x1072 = INT16_MAX;
volatile int64_t t16 = -101253658LL;
static uint32_t t18 = 227642U;
static volatile uint16_t x1259 = 1U;
uint8_t x1563 = 9U;
int32_t x1564 = -1;
uint8_t x1585 = UINT8_MAX;
static int16_t x1970 = INT16_MAX;
int32_t x2059 = 0;
uint64_t t30 = 8LLU;
static uint64_t x2154 = 704296436800LLU;
uint8_t x2155 = 11U;
uint64_t x2300 = 62014053864840LLU;
uint64_t t33 = 3731691330785LLU;
int32_t x2585 = -1;
uint8_t x2587 = 4U;
static int8_t x2602 = 0;
static int64_t x2905 = -637977238LL;
volatile int32_t t39 = 769;
static uint8_t x3135 = 9U;
static volatile uint32_t x3136 = UINT32_MAX;
int16_t x3229 = -1;
volatile int64_t x3453 = -1LL;
uint16_t x3535 = 5U;
uint32_t x3733 = 57111986U;
uint16_t x3735 = 36U;
uint16_t x3822 = UINT16_MAX;
static int64_t x4009 = INT64_MIN;
volatile int32_t x4010 = INT32_MAX;
int8_t x4012 = -1;
int64_t t53 = 166690086011618646LL;
int8_t x4049 = 4;
static uint8_t x4050 = 1U;
int16_t x4183 = 0;
static uint16_t x4237 = 4U;
uint16_t x4239 = 3U;
uint64_t x4242 = 566466LLU;
volatile int32_t x4396 = INT32_MIN;
static int32_t x4416 = 5587983;
uint8_t x4454 = 1U;
int8_t x4557 = 16;
int16_t x4560 = -1;
uint64_t t65 = 744281154LLU;
uint8_t x4601 = UINT8_MAX;
static volatile uint8_t x4627 = 1U;
volatile uint32_t x4656 = 0U;
static int64_t x4693 = -99688906843056LL;
int32_t x4783 = 49;
int64_t x4784 = -1LL;
int16_t x4908 = -1;
uint64_t x4910 = 3291389549LLU;
volatile uint64_t t78 = 1346LLU;
int32_t x5417 = INT32_MIN;
volatile uint8_t x5483 = 14U;
volatile uint32_t t84 = 49794765U;
uint16_t x5723 = 7U;
static int64_t x5724 = INT64_MIN;
uint8_t x5823 = 1U;
volatile int16_t x5893 = INT16_MAX;
uint8_t x5895 = 13U;
volatile int32_t x5945 = -125654;
int64_t x6061 = -3628LL;
int8_t x6062 = 1;
volatile uint8_t x6103 = 0U;
uint32_t x6114 = UINT32_MAX;
uint32_t x6282 = 3U;
int32_t x6284 = -1;
uint16_t x6290 = UINT16_MAX;
volatile int8_t x6335 = 27;
int16_t x6417 = INT16_MAX;


void f0(void) {
	static int16_t x26 = INT16_MAX;
	uint64_t t0 = 1848681321LLU;

	t0 = (x25-((x26>>x27)|x28));

	if (t0 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x47 = 62;
	static volatile int64_t t1 = -13LL;

	t1 = (x45-((x46>>x47)|x48));

	if (t1 != -2147450880LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x105 = 0;
	int32_t x108 = 2;
	volatile uint64_t t2 = 43LLU;

	t2 = (x105-((x106>>x107)|x108));

	if (t2 != 18446736947664613034LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x113 = -32191532;
	uint32_t x114 = 341U;
	uint16_t x115 = 1U;
	int32_t x116 = -159109;
	volatile uint32_t t3 = 93969U;

	t3 = (x113-((x114>>x115)|x116));

	if (t3 != 4262934745U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x193 = 14988135;
	int32_t x195 = 3;
	int32_t t4 = 25;

	t4 = (x193-((x194>>x195)|x196));

	if (t4 != 14922600) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x237 = INT16_MAX;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = 1U;
	int64_t x240 = -1LL;
	int64_t t5 = 4895461LL;

	t5 = (x237-((x238>>x239)|x240));

	if (t5 != 32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x391 = 4U;
	static int8_t x392 = INT8_MIN;
	int32_t t6 = 2763;

	t6 = (x389-((x390>>x391)|x392));

	if (t6 != 272) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x434 = INT64_MAX;
	volatile uint8_t x435 = 4U;
	int32_t x436 = 190620491;
	int64_t t7 = 947582419529879LL;

	t7 = (x433-((x434>>x435)|x436));

	if (t7 != -576460752303423483LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x477 = 5U;
	static uint8_t x479 = 3U;
	volatile int32_t t8 = -83;

	t8 = (x477-((x478>>x479)|x480));

	if (t8 != -10) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x514 = 3LLU;
	uint8_t x515 = 32U;
	static uint32_t x516 = 0U;
	volatile uint64_t t9 = 2693LLU;

	t9 = (x513-((x514>>x515)|x516));

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x521 = INT8_MAX;
	int8_t x522 = 51;
	int8_t x523 = 1;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t10 = 458707;

	t10 = (x521-((x522>>x523)|x524));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x745 = -2018;
	uint32_t x746 = UINT32_MAX;
	uint8_t x747 = 0U;
	int64_t x748 = INT64_MIN;
	int64_t t11 = -1854988345168LL;

	t11 = (x745-((x746>>x747)|x748));

	if (t11 != 9223372032559806495LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x861 = INT32_MIN;
	uint64_t x862 = 104953172655LLU;
	volatile uint8_t x863 = 0U;
	int32_t x864 = -1;
	uint64_t t12 = 13LLU;

	t12 = (x861-((x862>>x863)|x864));

	if (t12 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x881 = -1;
	uint16_t x882 = UINT16_MAX;
	static uint16_t x883 = 10U;
	int16_t x884 = INT16_MIN;
	int32_t t13 = 1;

	t13 = (x881-((x882>>x883)|x884));

	if (t13 != 32704) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1042 = 1U;
	uint8_t x1043 = 24U;
	int16_t x1044 = 1;
	static volatile int64_t t14 = 2373939094LL;

	t14 = (x1041-((x1042>>x1043)|x1044));

	if (t14 != 123693LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1069 = -1;
	volatile int8_t x1070 = 2;
	uint8_t x1071 = 1U;
	int32_t t15 = -19087072;

	t15 = (x1069-((x1070>>x1071)|x1072));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1085 = UINT16_MAX;
	uint8_t x1086 = UINT8_MAX;
	uint8_t x1087 = 0U;
	int64_t x1088 = 1LL;

	t16 = (x1085-((x1086>>x1087)|x1088));

	if (t16 != 65280LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1197 = UINT8_MAX;
	uint16_t x1198 = 16295U;
	int8_t x1199 = 1;
	int32_t x1200 = INT32_MAX;
	volatile int32_t t17 = -3303499;

	t17 = (x1197-((x1198>>x1199)|x1200));

	if (t17 != -2147483392) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1217 = 13060346U;
	int16_t x1218 = 5524;
	static int16_t x1219 = 0;
	volatile int8_t x1220 = -1;

	t18 = (x1217-((x1218>>x1219)|x1220));

	if (t18 != 13060347U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1257 = INT64_MIN;
	int32_t x1258 = INT32_MAX;
	int64_t x1260 = -1LL;
	int64_t t19 = -2316822625244951LL;

	t19 = (x1257-((x1258>>x1259)|x1260));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1345 = 29U;
	static int32_t x1346 = INT32_MAX;
	uint16_t x1347 = 1U;
	volatile int32_t x1348 = INT32_MIN;
	volatile int32_t t20 = 538115;

	t20 = (x1345-((x1346>>x1347)|x1348));

	if (t20 != 1073741854) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1377 = 0U;
	uint64_t x1378 = 192442586136LLU;
	volatile int64_t x1379 = 2LL;
	int32_t x1380 = -1;
	volatile uint64_t t21 = 20LLU;

	t21 = (x1377-((x1378>>x1379)|x1380));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1541 = 15269064907260LLU;
	static int32_t x1542 = INT32_MAX;
	static volatile uint64_t x1543 = 0LLU;
	uint8_t x1544 = 2U;
	uint64_t t22 = 167LLU;

	t22 = (x1541-((x1542>>x1543)|x1544));

	if (t22 != 15266917423613LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1561 = INT16_MIN;
	volatile uint8_t x1562 = 42U;
	int32_t t23 = -383;

	t23 = (x1561-((x1562>>x1563)|x1564));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1577 = 3;
	uint8_t x1578 = 1U;
	static volatile uint16_t x1579 = 1U;
	volatile uint8_t x1580 = 0U;
	volatile int32_t t24 = -5961;

	t24 = (x1577-((x1578>>x1579)|x1580));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1586 = 1;
	static uint16_t x1587 = 10U;
	static uint64_t x1588 = 24007531LLU;
	static volatile uint64_t t25 = 567544194602621LLU;

	t25 = (x1585-((x1586>>x1587)|x1588));

	if (t25 != 18446744073685544340LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1873 = INT8_MIN;
	int32_t x1874 = INT32_MAX;
	uint16_t x1875 = 3U;
	int16_t x1876 = INT16_MIN;
	volatile int32_t t26 = -1;

	t26 = (x1873-((x1874>>x1875)|x1876));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1969 = UINT16_MAX;
	uint16_t x1971 = 2U;
	static int64_t x1972 = -1LL;
	int64_t t27 = -674374LL;

	t27 = (x1969-((x1970>>x1971)|x1972));

	if (t27 != 65536LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2041 = -82LL;
	int64_t x2042 = 2366218835603LL;
	uint8_t x2043 = 0U;
	int16_t x2044 = INT16_MIN;
	volatile int64_t t28 = 50260604206502190LL;

	t28 = (x2041-((x2042>>x2043)|x2044));

	if (t28 != 26907LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2057 = INT8_MIN;
	uint32_t x2058 = 21764U;
	uint8_t x2060 = 30U;
	volatile uint32_t t29 = 429880056U;

	t29 = (x2057-((x2058>>x2059)|x2060));

	if (t29 != 4294945378U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2129 = UINT64_MAX;
	uint8_t x2130 = UINT8_MAX;
	static volatile int8_t x2131 = 0;
	int32_t x2132 = -1;

	t30 = (x2129-((x2130>>x2131)|x2132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2153 = -1;
	uint8_t x2156 = 0U;
	volatile uint64_t t31 = 53723197241746LLU;

	t31 = (x2153-((x2154>>x2155)|x2156));

	if (t31 != 18446744073365656871LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2217 = 64U;
	int8_t x2218 = 0;
	volatile int16_t x2219 = 5;
	int32_t x2220 = 3;
	volatile int32_t t32 = -24;

	t32 = (x2217-((x2218>>x2219)|x2220));

	if (t32 != 61) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2297 = UINT64_MAX;
	uint64_t x2298 = 7LLU;
	uint8_t x2299 = 3U;

	t33 = (x2297-((x2298>>x2299)|x2300));

	if (t33 != 18446682059655686775LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2557 = UINT16_MAX;
	volatile int16_t x2558 = INT16_MAX;
	volatile int8_t x2559 = 1;
	int64_t x2560 = 1538142LL;
	volatile int64_t t34 = -7030686836165314LL;

	t34 = (x2557-((x2558>>x2559)|x2560));

	if (t34 != -1474560LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2586 = INT16_MAX;
	int16_t x2588 = INT16_MIN;
	static volatile int32_t t35 = -19;

	t35 = (x2585-((x2586>>x2587)|x2588));

	if (t35 != 30720) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2601 = 342453984LL;
	static volatile uint32_t x2603 = 0U;
	static volatile int8_t x2604 = 41;
	volatile int64_t t36 = -2722823073LL;

	t36 = (x2601-((x2602>>x2603)|x2604));

	if (t36 != 342453943LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2605 = INT64_MAX;
	volatile uint64_t x2606 = 5525LLU;
	int32_t x2607 = 1;
	static volatile int16_t x2608 = INT16_MAX;
	volatile uint64_t t37 = 54362LLU;

	t37 = (x2605-((x2606>>x2607)|x2608));

	if (t37 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2906 = INT8_MAX;
	int64_t x2907 = 1LL;
	uint32_t x2908 = UINT32_MAX;
	volatile int64_t t38 = -2016LL;

	t38 = (x2905-((x2906>>x2907)|x2908));

	if (t38 != -4932944533LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x3061 = INT8_MIN;
	static int16_t x3062 = INT16_MAX;
	int32_t x3063 = 1;
	uint8_t x3064 = 87U;

	t39 = (x3061-((x3062>>x3063)|x3064));

	if (t39 != -16511) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x3065 = INT64_MIN;
	int64_t x3066 = INT64_MAX;
	volatile uint8_t x3067 = 7U;
	volatile int64_t x3068 = INT64_MIN;
	static volatile int64_t t40 = 139LL;

	t40 = (x3065-((x3066>>x3067)|x3068));

	if (t40 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x3133 = 0U;
	uint64_t x3134 = 1044056LLU;
	volatile uint64_t t41 = 8228541195619LLU;

	t41 = (x3133-((x3134>>x3135)|x3136));

	if (t41 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3230 = 106;
	static int16_t x3231 = 12;
	int32_t x3232 = -25495000;
	int32_t t42 = -1878;

	t42 = (x3229-((x3230>>x3231)|x3232));

	if (t42 != 25494999) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x3281 = -8;
	int16_t x3282 = 0;
	volatile uint8_t x3283 = 6U;
	int64_t x3284 = INT64_MIN;
	volatile int64_t t43 = 8411301851976LL;

	t43 = (x3281-((x3282>>x3283)|x3284));

	if (t43 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3369 = INT32_MIN;
	int32_t x3370 = INT32_MAX;
	int8_t x3371 = 1;
	uint64_t x3372 = 1832LLU;
	uint64_t t44 = 49LLU;

	t44 = (x3369-((x3370>>x3371)|x3372));

	if (t44 != 18446744070488326145LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3454 = INT64_MAX;
	uint32_t x3455 = 0U;
	int16_t x3456 = -1;
	int64_t t45 = 3709LL;

	t45 = (x3453-((x3454>>x3455)|x3456));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3533 = 820516587;
	int8_t x3534 = INT8_MAX;
	int32_t x3536 = INT32_MAX;
	int32_t t46 = -4227;

	t46 = (x3533-((x3534>>x3535)|x3536));

	if (t46 != -1326967060) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3689 = 18672463580159LLU;
	uint8_t x3690 = UINT8_MAX;
	uint64_t x3691 = 7LLU;
	volatile int8_t x3692 = INT8_MIN;
	uint64_t t47 = 38540222646582LLU;

	t47 = (x3689-((x3690>>x3691)|x3692));

	if (t47 != 18672463580286LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3734 = 1432480LL;
	volatile int8_t x3736 = INT8_MAX;
	int64_t t48 = -452507LL;

	t48 = (x3733-((x3734>>x3735)|x3736));

	if (t48 != 57111859LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3821 = -11994;
	uint32_t x3823 = 15U;
	int64_t x3824 = -5573252709304934LL;
	int64_t t49 = 2252726LL;

	t49 = (x3821-((x3822>>x3823)|x3824));

	if (t49 != 5573252709292939LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3881 = INT16_MIN;
	volatile int32_t x3882 = 978776324;
	static uint8_t x3883 = 28U;
	uint8_t x3884 = 1U;
	volatile int32_t t50 = 3642301;

	t50 = (x3881-((x3882>>x3883)|x3884));

	if (t50 != -32771) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3961 = INT8_MIN;
	uint64_t x3962 = UINT64_MAX;
	volatile uint16_t x3963 = 13U;
	int32_t x3964 = INT32_MAX;
	uint64_t t51 = 4101162855732146LLU;

	t51 = (x3961-((x3962>>x3963)|x3964));

	if (t51 != 18444492273895866241LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3969 = 1415U;
	uint8_t x3970 = 94U;
	uint32_t x3971 = 0U;
	static volatile int64_t x3972 = -476790173936682LL;
	int64_t t52 = 530383224798698LL;

	t52 = (x3969-((x3970>>x3971)|x3972));

	if (t52 != 476790173938089LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x4011 = 0;

	t53 = (x4009-((x4010>>x4011)|x4012));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x4051 = 0U;
	int32_t x4052 = -254027792;
	volatile int32_t t54 = 948041;

	t54 = (x4049-((x4050>>x4051)|x4052));

	if (t54 != 254027795) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4177 = UINT8_MAX;
	int16_t x4178 = INT16_MAX;
	static uint8_t x4179 = 16U;
	static volatile int64_t x4180 = 185287LL;
	static volatile int64_t t55 = 32175746120107699LL;

	t55 = (x4177-((x4178>>x4179)|x4180));

	if (t55 != -185032LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x4181 = 235603923U;
	int16_t x4182 = INT16_MAX;
	uint16_t x4184 = 19U;
	uint32_t t56 = 26U;

	t56 = (x4181-((x4182>>x4183)|x4184));

	if (t56 != 235571156U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4217 = INT16_MIN;
	uint64_t x4218 = UINT64_MAX;
	volatile uint64_t x4219 = 2LLU;
	int32_t x4220 = -1;
	uint64_t t57 = 665LLU;

	t57 = (x4217-((x4218>>x4219)|x4220));

	if (t57 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x4238 = 93U;
	uint8_t x4240 = 46U;
	int32_t t58 = -1864;

	t58 = (x4237-((x4238>>x4239)|x4240));

	if (t58 != -43) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4241 = UINT64_MAX;
	static uint16_t x4243 = 1U;
	static int32_t x4244 = INT32_MIN;
	uint64_t t59 = 309LLU;

	t59 = (x4241-((x4242>>x4243)|x4244));

	if (t59 != 2147200414LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x4393 = 1U;
	volatile uint64_t x4394 = 61889780538776299LLU;
	int32_t x4395 = 4;
	static volatile uint64_t t60 = 3801LLU;

	t60 = (x4393-((x4394>>x4395)|x4396));

	if (t60 != 687613523LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4413 = -1;
	static uint8_t x4414 = 5U;
	volatile uint8_t x4415 = 1U;
	static volatile int32_t t61 = -8800866;

	t61 = (x4413-((x4414>>x4415)|x4416));

	if (t61 != -5587984) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x4453 = 15U;
	uint32_t x4455 = 0U;
	static int16_t x4456 = 14;
	volatile int32_t t62 = -6763537;

	t62 = (x4453-((x4454>>x4455)|x4456));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x4489 = -4;
	volatile int8_t x4490 = INT8_MAX;
	uint8_t x4491 = 11U;
	int64_t x4492 = -607175LL;
	static int64_t t63 = -21704611080311211LL;

	t63 = (x4489-((x4490>>x4491)|x4492));

	if (t63 != 607171LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x4513 = 327U;
	static uint64_t x4514 = 167626402LLU;
	uint64_t x4515 = 2LLU;
	volatile uint32_t x4516 = 85941502U;
	volatile uint64_t t64 = 1182LLU;

	t64 = (x4513-((x4514>>x4515)|x4516));

	if (t64 != 18446744073583756105LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4558 = UINT64_MAX;
	int64_t x4559 = 48LL;

	t65 = (x4557-((x4558>>x4559)|x4560));

	if (t65 != 17LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4602 = 1U;
	volatile uint16_t x4603 = 0U;
	uint64_t x4604 = 158930797025772035LLU;
	volatile uint64_t t66 = 17LLU;

	t66 = (x4601-((x4602>>x4603)|x4604));

	if (t66 != 18287813276683779836LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4625 = 0;
	uint64_t x4626 = UINT64_MAX;
	static uint8_t x4628 = UINT8_MAX;
	static volatile uint64_t t67 = 145376437717735117LLU;

	t67 = (x4625-((x4626>>x4627)|x4628));

	if (t67 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4653 = -6;
	uint8_t x4654 = UINT8_MAX;
	int8_t x4655 = 0;
	uint32_t t68 = 8160U;

	t68 = (x4653-((x4654>>x4655)|x4656));

	if (t68 != 4294967035U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4694 = INT8_MAX;
	int32_t x4695 = 6;
	volatile int8_t x4696 = -49;
	int64_t t69 = 237190837633LL;

	t69 = (x4693-((x4694>>x4695)|x4696));

	if (t69 != -99688906843007LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4781 = 20;
	int64_t x4782 = 1024LL;
	volatile int64_t t70 = -996LL;

	t70 = (x4781-((x4782>>x4783)|x4784));

	if (t70 != 21LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4905 = 3289820997290717905LLU;
	uint64_t x4906 = 113907259LLU;
	static int32_t x4907 = 1;
	volatile uint64_t t71 = 71LLU;

	t71 = (x4905-((x4906>>x4907)|x4908));

	if (t71 != 3289820997290717906LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x4909 = INT16_MAX;
	static volatile int8_t x4911 = 16;
	static int32_t x4912 = INT32_MIN;
	volatile uint64_t t72 = 6931743720LLU;

	t72 = (x4909-((x4910>>x4911)|x4912));

	if (t72 != 2147466193LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x5117 = -1;
	uint64_t x5118 = 63068LLU;
	uint32_t x5119 = 1U;
	int16_t x5120 = -2;
	volatile uint64_t t73 = 462LLU;

	t73 = (x5117-((x5118>>x5119)|x5120));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x5125 = 53U;
	int8_t x5126 = INT8_MAX;
	int32_t x5127 = 1;
	volatile int8_t x5128 = INT8_MIN;
	int32_t t74 = -24199267;

	t74 = (x5125-((x5126>>x5127)|x5128));

	if (t74 != 118) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5153 = 23;
	int16_t x5154 = 547;
	volatile uint16_t x5155 = 12U;
	volatile uint64_t x5156 = UINT64_MAX;
	volatile uint64_t t75 = 5440151LLU;

	t75 = (x5153-((x5154>>x5155)|x5156));

	if (t75 != 24LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5241 = INT16_MIN;
	static volatile int64_t x5242 = INT64_MAX;
	uint16_t x5243 = 2U;
	int64_t x5244 = 739239962636520LL;
	volatile int64_t t76 = 1444511982075010120LL;

	t76 = (x5241-((x5242>>x5243)|x5244));

	if (t76 != -2305843009213726719LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x5333 = -3006459757LL;
	uint16_t x5334 = 18U;
	int16_t x5335 = 0;
	static volatile int16_t x5336 = 47;
	volatile int64_t t77 = -400150418269LL;

	t77 = (x5333-((x5334>>x5335)|x5336));

	if (t77 != -3006459820LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x5409 = INT64_MIN;
	uint64_t x5410 = 74577LLU;
	uint8_t x5411 = 13U;
	int32_t x5412 = -293645;

	t78 = (x5409-((x5410>>x5411)|x5412));

	if (t78 != 9223372036855069445LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5418 = 1331091141719320350LL;
	uint8_t x5419 = 2U;
	static volatile int16_t x5420 = INT16_MIN;
	int64_t t79 = -20LL;

	t79 = (x5417-((x5418>>x5419)|x5420));

	if (t79 != -2147473863LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5421 = INT64_MIN;
	uint64_t x5422 = 61LLU;
	uint16_t x5423 = 6U;
	int64_t x5424 = -23544509192267434LL;
	uint64_t t80 = 474818LLU;

	t80 = (x5421-((x5422>>x5423)|x5424));

	if (t80 != 9246916546047043242LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x5481 = 6542909771LLU;
	uint32_t x5482 = 138819U;
	static volatile int16_t x5484 = -1;
	static volatile uint64_t t81 = 23380227329LLU;

	t81 = (x5481-((x5482>>x5483)|x5484));

	if (t81 != 2247942476LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5501 = -10;
	uint8_t x5502 = 5U;
	uint8_t x5503 = 2U;
	uint16_t x5504 = UINT16_MAX;
	volatile int32_t t82 = -23638571;

	t82 = (x5501-((x5502>>x5503)|x5504));

	if (t82 != -65545) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5533 = INT8_MIN;
	int32_t x5534 = INT32_MAX;
	uint16_t x5535 = 2U;
	int32_t x5536 = -8;
	int32_t t83 = -77;

	t83 = (x5533-((x5534>>x5535)|x5536));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5625 = UINT32_MAX;
	uint32_t x5626 = 33U;
	static int8_t x5627 = 3;
	int8_t x5628 = INT8_MAX;

	t84 = (x5625-((x5626>>x5627)|x5628));

	if (t84 != 4294967168U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5697 = 24192;
	static int64_t x5698 = 4305LL;
	uint32_t x5699 = 15U;
	int16_t x5700 = 1;
	static volatile int64_t t85 = -659822869302LL;

	t85 = (x5697-((x5698>>x5699)|x5700));

	if (t85 != 24191LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5721 = -61586LL;
	uint16_t x5722 = 423U;
	int64_t t86 = 116136LL;

	t86 = (x5721-((x5722>>x5723)|x5724));

	if (t86 != 9223372036854714219LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x5797 = -1LL;
	static int16_t x5798 = INT16_MAX;
	uint32_t x5799 = 2U;
	uint16_t x5800 = UINT16_MAX;
	volatile int64_t t87 = 5344528553714412LL;

	t87 = (x5797-((x5798>>x5799)|x5800));

	if (t87 != -65536LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x5821 = INT32_MIN;
	int16_t x5822 = 41;
	int32_t x5824 = INT32_MIN;
	volatile int32_t t88 = 5569;

	t88 = (x5821-((x5822>>x5823)|x5824));

	if (t88 != -20) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5849 = INT32_MIN;
	static uint16_t x5850 = 26U;
	int8_t x5851 = 1;
	volatile int64_t x5852 = -1LL;
	static volatile int64_t t89 = -1LL;

	t89 = (x5849-((x5850>>x5851)|x5852));

	if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5894 = INT64_MAX;
	uint64_t x5896 = 1726LLU;
	uint64_t t90 = 490000106719LLU;

	t90 = (x5893-((x5894>>x5895)|x5896));

	if (t90 != 18445618173802741760LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x5946 = 264017634U;
	int8_t x5947 = 1;
	int64_t x5948 = INT64_MIN;
	static volatile int64_t t91 = 2694624LL;

	t91 = (x5945-((x5946>>x5947)|x5948));

	if (t91 != 9223372036722641337LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6063 = 7;
	int8_t x6064 = 3;
	volatile int64_t t92 = 1800LL;

	t92 = (x6061-((x6062>>x6063)|x6064));

	if (t92 != -3631LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6101 = -24;
	int64_t x6102 = INT64_MAX;
	static int64_t x6104 = -5LL;
	int64_t t93 = -3787363LL;

	t93 = (x6101-((x6102>>x6103)|x6104));

	if (t93 != -23LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x6113 = 7178LLU;
	int16_t x6115 = 0;
	volatile int16_t x6116 = INT16_MIN;
	uint64_t t94 = 712LLU;

	t94 = (x6113-((x6114>>x6115)|x6116));

	if (t94 != 18446744069414591499LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x6281 = -679241653;
	static int8_t x6283 = 1;
	static uint32_t t95 = 2332U;

	t95 = (x6281-((x6282>>x6283)|x6284));

	if (t95 != 3615725644U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6289 = 13918U;
	uint32_t x6291 = 0U;
	int8_t x6292 = 0;
	volatile int32_t t96 = 2620462;

	t96 = (x6289-((x6290>>x6291)|x6292));

	if (t96 != -51617) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6333 = INT8_MIN;
	static uint8_t x6334 = 62U;
	uint8_t x6336 = 27U;
	volatile int32_t t97 = 1;

	t97 = (x6333-((x6334>>x6335)|x6336));

	if (t97 != -155) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6418 = INT8_MAX;
	static uint8_t x6419 = 7U;
	int16_t x6420 = INT16_MIN;
	int32_t t98 = 408933510;

	t98 = (x6417-((x6418>>x6419)|x6420));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x6489 = 6517U;
	int64_t x6490 = 25239849557970085LL;
	volatile uint64_t x6491 = 14LLU;
	static int16_t x6492 = INT16_MIN;
	int64_t t99 = -86555302754LL;

	t99 = (x6489-((x6490>>x6491)|x6492));

	if (t99 != 27932LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}


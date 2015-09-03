#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x22 = INT8_MAX;
uint32_t x26 = 518294090U;
int32_t x54 = INT32_MAX;
int8_t x73 = -5;
int16_t x75 = -1;
uint16_t x87 = UINT16_MAX;
uint16_t x90 = 585U;
static int64_t t7 = INT64_MAX;
volatile uint64_t t8 = 326929365096LLU;
uint16_t x151 = 23U;
uint16_t x171 = 1U;
uint64_t x198 = 124654744LLU;
uint32_t x199 = 25357U;
static int16_t x209 = INT16_MIN;
static volatile uint32_t x212 = 65780U;
uint64_t t16 = 6077942LLU;
static volatile int32_t t17 = -7670;
uint8_t x330 = UINT8_MAX;
int16_t x332 = -1;
uint32_t x418 = 5U;
int64_t x441 = -1LL;
int32_t x572 = INT32_MIN;
volatile int32_t x645 = INT32_MIN;
uint16_t x664 = 3U;
static int32_t t28 = 791457;
static uint64_t t29 = 3437703107358391860LLU;
int16_t x674 = INT16_MAX;
int32_t x675 = -11042;
int64_t t30 = -3294060374314LL;
int32_t x681 = 1;
int16_t x705 = -59;
uint16_t x706 = UINT16_MAX;
int16_t x708 = -1;
static int32_t t34 = -1;
int32_t x781 = INT32_MIN;
int8_t x782 = 0;
volatile int32_t t37 = INT32_MIN;
uint64_t x806 = UINT64_MAX;
static uint16_t x807 = 1U;
uint8_t x808 = 1U;
volatile uint8_t x859 = 12U;
int8_t x860 = -3;
int16_t x862 = INT16_MAX;
int32_t x932 = 298;
uint64_t x941 = UINT64_MAX;
uint64_t x942 = UINT64_MAX;
static int32_t x945 = INT32_MIN;
uint8_t x947 = 30U;
static int8_t x951 = INT8_MIN;
volatile uint8_t x1004 = 5U;
volatile uint8_t x1034 = 10U;
int32_t x1035 = INT32_MAX;
int16_t x1068 = 0;
int64_t t60 = 16094LL;
int64_t x1087 = 28770186LL;
int8_t x1105 = INT8_MAX;
static int32_t x1123 = INT32_MIN;
int32_t x1137 = INT32_MAX;
static uint16_t x1181 = 26U;
uint64_t x1189 = 2247542188136LLU;
int8_t x1192 = INT8_MAX;
static int16_t x1200 = INT16_MAX;
static uint8_t x1212 = 0U;
static int16_t x1251 = INT16_MIN;
volatile uint32_t x1252 = 26025U;
static int8_t x1259 = INT8_MIN;
volatile uint32_t t74 = 6167U;
int32_t x1265 = INT32_MAX;
uint16_t x1266 = UINT16_MAX;
volatile int32_t x1267 = -32437;
uint8_t x1268 = 3U;
static int16_t x1289 = -1;
static volatile int32_t t77 = 239334101;
uint32_t x1344 = 14951902U;
volatile int32_t t79 = -593029;
int8_t x1367 = INT8_MAX;
int16_t x1388 = 4;
static volatile uint16_t x1438 = 0U;
uint16_t x1440 = 0U;
int32_t t83 = -151929;
static int8_t x1456 = 0;
volatile uint32_t x1470 = UINT32_MAX;
uint8_t x1472 = 52U;
uint16_t x1526 = 7517U;
int16_t x1544 = INT16_MIN;
int8_t x1568 = INT8_MIN;
volatile int32_t x1621 = 24;
int64_t x1623 = INT64_MIN;
static volatile int64_t x1648 = INT64_MIN;
uint32_t x1686 = 10912U;
int16_t x1713 = INT16_MAX;
static uint16_t x1738 = 0U;
int32_t x1739 = 4;
volatile int64_t t97 = INT64_MIN;
volatile int64_t t99 = 33422569LL;


void f0(void) {
	uint8_t x21 = 54U;
	int16_t x23 = -1;
	volatile uint64_t x24 = 0LLU;
	int32_t t0 = -3865;

	t0 = (x21|(x22>>(x23&x24)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x25 = UINT8_MAX;
	uint8_t x27 = 34U;
	int8_t x28 = 0;
	static volatile uint32_t t1 = 49321794U;

	t1 = (x25|(x26>>(x27&x28)));

	if (t1 != 518294271U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = 0LL;
	uint32_t x51 = 31U;
	uint8_t x52 = UINT8_MAX;
	static int64_t t2 = INT64_MIN;

	t2 = (x49|(x50>>(x51&x52)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x53 = 1;
	uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 0U;
	int32_t t3 = INT32_MAX;

	t3 = (x53|(x54>>(x55&x56)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x74 = INT8_MAX;
	uint64_t x76 = 12LLU;
	static int32_t t4 = 85789;

	t4 = (x73|(x74>>(x75&x76)));

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x81 = -1;
	int32_t x82 = 5619;
	int8_t x83 = 0;
	int16_t x84 = INT16_MIN;
	static int32_t t5 = 11310;

	t5 = (x81|(x82>>(x83&x84)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x86 = 7703724012441LL;
	static int64_t x88 = INT64_MIN;
	int64_t t6 = -3LL;

	t6 = (x85|(x86>>(x87&x88)));

	if (t6 != -9223364333130763367LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x89 = INT64_MAX;
	uint16_t x91 = 9954U;
	int8_t x92 = 22;

	t7 = (x89|(x90>>(x91&x92)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x113 = 93U;
	uint64_t x114 = UINT64_MAX;
	uint32_t x115 = 25U;
	int16_t x116 = -248;

	t8 = (x113|(x114>>(x115&x116)));

	if (t8 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x129 = 106189549681424LLU;
	static int32_t x130 = INT32_MAX;
	volatile uint8_t x131 = 1U;
	volatile int8_t x132 = 2;
	static uint64_t t9 = 48LLU;

	t9 = (x129|(x130>>(x131&x132)));

	if (t9 != 106190918909951LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x149 = -218286;
	int32_t x150 = INT32_MAX;
	int64_t x152 = 5827128456139LL;
	static int32_t t10 = 239;

	t10 = (x149|(x150>>(x151&x152)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile int8_t x159 = 19;
	uint8_t x160 = UINT8_MAX;
	static uint64_t t11 = UINT64_MAX;

	t11 = (x157|(x158>>(x159&x160)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int32_t x170 = INT32_MAX;
	uint16_t x172 = UINT16_MAX;
	int32_t t12 = 456;

	t12 = (x169|(x170>>(x171&x172)));

	if (t12 != 1073741823) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x181 = 3583U;
	static int32_t x182 = 1;
	uint8_t x183 = 8U;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t13 = 32006464;

	t13 = (x181|(x182>>(x183&x184)));

	if (t13 != 3583) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x193 = 80U;
	int32_t x194 = 152;
	static int8_t x195 = 2;
	int64_t x196 = INT64_MIN;
	static int32_t t14 = -56598699;

	t14 = (x193|(x194>>(x195&x196)));

	if (t14 != 216) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x197 = 3611U;
	int64_t x200 = INT64_MIN;
	uint64_t t15 = 67559664155280733LLU;

	t15 = (x197|(x198>>(x199&x200)));

	if (t15 != 124657307LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x210 = 1526322LLU;
	volatile uint8_t x211 = 27U;

	t16 = (x209|(x210>>(x211&x212)));

	if (t16 != 18446744073709518871LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x297 = -1;
	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = 10LLU;

	t17 = (x297|(x298>>(x299&x300)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x329 = 154962U;
	uint8_t x331 = 1U;
	uint32_t t18 = 2609U;

	t18 = (x329|(x330>>(x331&x332)));

	if (t18 != 155007U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x333 = INT8_MIN;
	volatile int32_t x334 = 106760;
	static uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 1U;
	volatile int32_t t19 = -61935689;

	t19 = (x333|(x334>>(x335&x336)));

	if (t19 != -124) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MAX;
	uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = 1;
	int64_t t20 = 2375458291396351031LL;

	t20 = (x401|(x402>>(x403&x404)));

	if (t20 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x417 = 20;
	int32_t x419 = INT32_MIN;
	int8_t x420 = 0;
	uint32_t t21 = 432106960U;

	t21 = (x417|(x418>>(x419&x420)));

	if (t21 != 21U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x442 = UINT8_MAX;
	uint64_t x443 = 1LLU;
	volatile int16_t x444 = 0;
	int64_t t22 = 1LL;

	t22 = (x441|(x442>>(x443&x444)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x497 = UINT64_MAX;
	int8_t x498 = 29;
	static uint16_t x499 = UINT16_MAX;
	static int8_t x500 = 0;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x497|(x498>>(x499&x500)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x509 = 14835U;
	static int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = 1U;
	volatile int32_t t24 = 40409853;

	t24 = (x509|(x510>>(x511&x512)));

	if (t24 != 14847) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x537 = UINT16_MAX;
	volatile uint16_t x538 = 24292U;
	volatile int32_t x539 = INT32_MIN;
	uint8_t x540 = 0U;
	int32_t t25 = 1;

	t25 = (x537|(x538>>(x539&x540)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x569 = INT8_MIN;
	int8_t x570 = INT8_MAX;
	int32_t x571 = 447;
	int32_t t26 = 6399;

	t26 = (x569|(x570>>(x571&x572)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x646 = INT16_MAX;
	static volatile uint16_t x647 = 11U;
	static int16_t x648 = INT16_MIN;
	volatile int32_t t27 = 8557060;

	t27 = (x645|(x646>>(x647&x648)));

	if (t27 != -2147450881) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x661 = UINT16_MAX;
	static uint16_t x662 = UINT16_MAX;
	static volatile uint16_t x663 = UINT16_MAX;

	t28 = (x661|(x662>>(x663&x664)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x665 = 5U;
	uint64_t x666 = 48618170123LLU;
	static int8_t x667 = -1;
	int16_t x668 = 4;

	t29 = (x665|(x666>>(x667&x668)));

	if (t29 != 3038635637LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x673 = INT64_MIN;
	uint8_t x676 = 5U;

	t30 = (x673|(x674>>(x675&x676)));

	if (t30 != -9223372036854773761LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x682 = 20U;
	uint16_t x683 = 18U;
	int64_t x684 = INT64_MAX;
	static volatile int32_t t31 = 2346955;

	t31 = (x681|(x682>>(x683&x684)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x685 = INT16_MIN;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = 3;
	static volatile int8_t x688 = INT8_MIN;
	uint64_t t32 = UINT64_MAX;

	t32 = (x685|(x686>>(x687&x688)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x693 = -1;
	int32_t x694 = 26679535;
	int32_t x695 = -1;
	static uint8_t x696 = 0U;
	static int32_t t33 = 33;

	t33 = (x693|(x694>>(x695&x696)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x707 = 5U;

	t34 = (x705|(x706>>(x707&x708)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x729 = -1;
	uint64_t x730 = UINT64_MAX;
	int16_t x731 = INT16_MIN;
	uint8_t x732 = 20U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x729|(x730>>(x731&x732)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x733 = INT32_MIN;
	uint64_t x734 = UINT64_MAX;
	int16_t x735 = INT16_MAX;
	volatile int16_t x736 = INT16_MIN;
	uint64_t t36 = UINT64_MAX;

	t36 = (x733|(x734>>(x735&x736)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x783 = UINT16_MAX;
	volatile int32_t x784 = INT32_MIN;

	t37 = (x781|(x782>>(x783&x784)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x789 = 93145LLU;
	static uint16_t x790 = UINT16_MAX;
	volatile int32_t x791 = 24406;
	int16_t x792 = 1;
	volatile uint64_t t38 = 123LLU;

	t38 = (x789|(x790>>(x791&x792)));

	if (t38 != 131071LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x801 = UINT16_MAX;
	volatile int64_t x802 = INT64_MAX;
	int32_t x803 = -1930;
	uint8_t x804 = 60U;
	volatile int64_t t39 = -61776752119368LL;

	t39 = (x801|(x802>>(x803&x804)));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x805 = 493LLU;
	volatile uint64_t t40 = 2LLU;

	t40 = (x805|(x806>>(x807&x808)));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x833 = INT32_MIN;
	int8_t x834 = 1;
	uint8_t x835 = UINT8_MAX;
	volatile uint8_t x836 = 0U;
	int32_t t41 = 7;

	t41 = (x833|(x834>>(x835&x836)));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x853 = -7112;
	uint64_t x854 = UINT64_MAX;
	int8_t x855 = INT8_MAX;
	uint32_t x856 = 519640607U;
	uint64_t t42 = UINT64_MAX;

	t42 = (x853|(x854>>(x855&x856)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x857 = 2030U;
	volatile int8_t x858 = 1;
	static volatile int32_t t43 = 949883881;

	t43 = (x857|(x858>>(x859&x860)));

	if (t43 != 2030) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x861 = INT16_MIN;
	static uint8_t x863 = 1U;
	volatile uint8_t x864 = 1U;
	int32_t t44 = 478;

	t44 = (x861|(x862>>(x863&x864)));

	if (t44 != -16385) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x869 = -1;
	uint64_t x870 = UINT64_MAX;
	static int64_t x871 = -3079747684360397LL;
	int8_t x872 = INT8_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (x869|(x870>>(x871&x872)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x905 = 7U;
	int32_t x906 = INT32_MAX;
	volatile uint64_t x907 = 3LLU;
	static uint32_t x908 = 44714U;
	int32_t t46 = -57277404;

	t46 = (x905|(x906>>(x907&x908)));

	if (t46 != 536870911) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x917 = INT16_MAX;
	uint16_t x918 = 29541U;
	int16_t x919 = INT16_MIN;
	volatile uint16_t x920 = 0U;
	static volatile int32_t t47 = -235;

	t47 = (x917|(x918>>(x919&x920)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x929 = 857085U;
	int64_t x930 = INT64_MAX;
	int16_t x931 = INT16_MIN;
	int64_t t48 = INT64_MAX;

	t48 = (x929|(x930>>(x931&x932)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x933 = INT16_MAX;
	uint32_t x934 = 129796985U;
	int32_t x935 = INT32_MIN;
	uint8_t x936 = 3U;
	volatile uint32_t t49 = 1154U;

	t49 = (x933|(x934>>(x935&x936)));

	if (t49 != 129826815U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x937 = UINT16_MAX;
	uint64_t x938 = 55578800LLU;
	int16_t x939 = INT16_MAX;
	int8_t x940 = 0;
	volatile uint64_t t50 = 281268143109620LLU;

	t50 = (x937|(x938>>(x939&x940)));

	if (t50 != 55640063LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x943 = INT16_MAX;
	static int32_t x944 = INT32_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x941|(x942>>(x943&x944)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x946 = UINT32_MAX;
	int32_t x948 = INT32_MIN;
	static volatile uint32_t t52 = UINT32_MAX;

	t52 = (x945|(x946>>(x947&x948)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x949 = -1LL;
	int32_t x950 = 145028793;
	uint32_t x952 = 1U;
	volatile int64_t t53 = 47936660590LL;

	t53 = (x949|(x950>>(x951&x952)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x953 = -1LL;
	int16_t x954 = INT16_MAX;
	uint16_t x955 = 4635U;
	static volatile uint64_t x956 = 18208140379LLU;
	volatile int64_t t54 = 4343966096333563LL;

	t54 = (x953|(x954>>(x955&x956)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x985 = INT64_MIN;
	int16_t x986 = 1;
	uint8_t x987 = 11U;
	uint32_t x988 = 103U;
	static volatile int64_t t55 = INT64_MIN;

	t55 = (x985|(x986>>(x987&x988)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x989 = INT16_MAX;
	uint16_t x990 = 1U;
	static int64_t x991 = -4666823923176LL;
	uint8_t x992 = 39U;
	volatile int32_t t56 = 76;

	t56 = (x989|(x990>>(x991&x992)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1001 = -895;
	volatile int64_t x1002 = INT64_MAX;
	static int32_t x1003 = -94548623;
	int64_t t57 = 40186577LL;

	t57 = (x1001|(x1002>>(x1003&x1004)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1029 = -23;
	static volatile uint16_t x1030 = 12U;
	uint32_t x1031 = 5U;
	int16_t x1032 = INT16_MIN;
	int32_t t58 = -43;

	t58 = (x1029|(x1030>>(x1031&x1032)));

	if (t58 != -19) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1033 = -1;
	volatile uint8_t x1036 = 7U;
	int32_t t59 = 1;

	t59 = (x1033|(x1034>>(x1035&x1036)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1065 = 345639424495820LL;
	uint16_t x1066 = 10063U;
	uint16_t x1067 = 46U;

	t60 = (x1065|(x1066>>(x1067&x1068)));

	if (t60 != 345639424505807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1085 = INT64_MIN;
	int64_t x1086 = INT64_MAX;
	static int16_t x1088 = 2;
	static volatile int64_t t61 = 48LL;

	t61 = (x1085|(x1086>>(x1087&x1088)));

	if (t61 != -6917529027641081857LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1106 = 1LLU;
	int64_t x1107 = INT64_MIN;
	uint8_t x1108 = 78U;
	volatile uint64_t t62 = 164030945884LLU;

	t62 = (x1105|(x1106>>(x1107&x1108)));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1121 = INT64_MAX;
	volatile int32_t x1122 = INT32_MAX;
	uint8_t x1124 = 54U;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x1121|(x1122>>(x1123&x1124)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1138 = INT16_MAX;
	uint16_t x1139 = 2U;
	uint64_t x1140 = 1261LLU;
	int32_t t64 = INT32_MAX;

	t64 = (x1137|(x1138>>(x1139&x1140)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1145 = INT8_MIN;
	int16_t x1146 = 24;
	uint8_t x1147 = 0U;
	static int16_t x1148 = INT16_MAX;
	int32_t t65 = -7;

	t65 = (x1145|(x1146>>(x1147&x1148)));

	if (t65 != -104) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1169 = 3LLU;
	volatile uint32_t x1170 = UINT32_MAX;
	volatile int16_t x1171 = INT16_MIN;
	volatile int16_t x1172 = 0;
	static uint64_t t66 = 11936209574136883LLU;

	t66 = (x1169|(x1170>>(x1171&x1172)));

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1182 = 24U;
	volatile uint32_t x1183 = UINT32_MAX;
	uint16_t x1184 = 3U;
	volatile uint32_t t67 = 18253U;

	t67 = (x1181|(x1182>>(x1183&x1184)));

	if (t67 != 27U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1190 = 1901780186835952LLU;
	static volatile uint8_t x1191 = 10U;
	uint64_t t68 = 32LLU;

	t68 = (x1189|(x1190>>(x1191&x1192)));

	if (t68 != 4103505526506LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1197 = INT8_MAX;
	uint8_t x1198 = UINT8_MAX;
	uint8_t x1199 = 0U;
	int32_t t69 = 7804;

	t69 = (x1197|(x1198>>(x1199&x1200)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x1209 = 1;
	int32_t x1210 = 1388902;
	int32_t x1211 = -1;
	static volatile int32_t t70 = 1;

	t70 = (x1209|(x1210>>(x1211&x1212)));

	if (t70 != 1388903) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1225 = -136;
	int64_t x1226 = 678093823799352LL;
	uint64_t x1227 = 6337788826460720LLU;
	uint8_t x1228 = UINT8_MAX;
	int64_t t71 = -7LL;

	t71 = (x1225|(x1226>>(x1227&x1228)));

	if (t71 != -134LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1249 = INT8_MIN;
	uint32_t x1250 = 13173781U;
	static uint32_t t72 = 1U;

	t72 = (x1249|(x1250>>(x1251&x1252)));

	if (t72 != 4294967189U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1253 = 3;
	uint16_t x1254 = 13401U;
	int32_t x1255 = INT32_MIN;
	uint8_t x1256 = 0U;
	volatile int32_t t73 = 759894028;

	t73 = (x1253|(x1254>>(x1255&x1256)));

	if (t73 != 13403) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x1257 = INT16_MIN;
	volatile uint32_t x1258 = 1253501676U;
	volatile uint8_t x1260 = 5U;

	t74 = (x1257|(x1258>>(x1259&x1260)));

	if (t74 != 4294961900U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t t75 = INT32_MAX;

	t75 = (x1265|(x1266>>(x1267&x1268)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1290 = UINT32_MAX;
	static uint8_t x1291 = 13U;
	int64_t x1292 = INT64_MIN;
	uint32_t t76 = UINT32_MAX;

	t76 = (x1289|(x1290>>(x1291&x1292)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x1309 = -3;
	volatile uint16_t x1310 = UINT16_MAX;
	volatile uint32_t x1311 = 75U;
	static uint16_t x1312 = 4U;

	t77 = (x1309|(x1310>>(x1311&x1312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1341 = INT16_MAX;
	static int32_t x1342 = 309731;
	volatile int32_t x1343 = 6;
	volatile int32_t t78 = -4997025;

	t78 = (x1341|(x1342>>(x1343&x1344)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x1349 = INT8_MIN;
	static int8_t x1350 = 14;
	static uint32_t x1351 = 13643U;
	static uint8_t x1352 = 23U;

	t79 = (x1349|(x1350>>(x1351&x1352)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1365 = -1;
	uint64_t x1366 = UINT64_MAX;
	static int64_t x1368 = -2953754554139081336LL;
	uint64_t t80 = UINT64_MAX;

	t80 = (x1365|(x1366>>(x1367&x1368)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1385 = INT8_MAX;
	int8_t x1386 = INT8_MAX;
	uint32_t x1387 = UINT32_MAX;
	int32_t t81 = -27728923;

	t81 = (x1385|(x1386>>(x1387&x1388)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1409 = -3;
	int32_t x1410 = 268305868;
	uint8_t x1411 = 3U;
	int8_t x1412 = -1;
	volatile int32_t t82 = -239;

	t82 = (x1409|(x1410>>(x1411&x1412)));

	if (t82 != -3) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1437 = -32915697;
	volatile int32_t x1439 = -1;

	t83 = (x1437|(x1438>>(x1439&x1440)));

	if (t83 != -32915697) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1453 = 2;
	uint16_t x1454 = 339U;
	static int8_t x1455 = INT8_MIN;
	volatile int32_t t84 = -706555431;

	t84 = (x1453|(x1454>>(x1455&x1456)));

	if (t84 != 339) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1469 = 13397LL;
	int16_t x1471 = INT16_MIN;
	volatile int64_t t85 = -9482LL;

	t85 = (x1469|(x1470>>(x1471&x1472)));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x1525 = 424146LLU;
	uint8_t x1527 = UINT8_MAX;
	volatile uint32_t x1528 = 30U;
	static volatile uint64_t t86 = 93651LLU;

	t86 = (x1525|(x1526>>(x1527&x1528)));

	if (t86 != 424146LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x1537 = INT8_MIN;
	int8_t x1538 = 4;
	uint32_t x1539 = 950234114U;
	int64_t x1540 = INT64_MIN;
	volatile int32_t t87 = 5;

	t87 = (x1537|(x1538>>(x1539&x1540)));

	if (t87 != -124) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1541 = INT32_MIN;
	uint16_t x1542 = 233U;
	int16_t x1543 = 26;
	volatile int32_t t88 = -1372153;

	t88 = (x1541|(x1542>>(x1543&x1544)));

	if (t88 != -2147483415) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1565 = UINT64_MAX;
	volatile int32_t x1566 = INT32_MAX;
	static volatile uint8_t x1567 = 0U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x1565|(x1566>>(x1567&x1568)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x1585 = UINT16_MAX;
	uint8_t x1586 = UINT8_MAX;
	uint8_t x1587 = 1U;
	int32_t x1588 = -50;
	volatile int32_t t90 = 12440;

	t90 = (x1585|(x1586>>(x1587&x1588)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x1622 = 104U;
	volatile int16_t x1624 = INT16_MAX;
	static volatile int32_t t91 = 111427;

	t91 = (x1621|(x1622>>(x1623&x1624)));

	if (t91 != 120) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1645 = 7495;
	volatile uint64_t x1646 = 140LLU;
	volatile uint8_t x1647 = UINT8_MAX;
	static volatile uint64_t t92 = 80LLU;

	t92 = (x1645|(x1646>>(x1647&x1648)));

	if (t92 != 7631LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1653 = INT16_MIN;
	int64_t x1654 = 283394818306701LL;
	uint16_t x1655 = 115U;
	volatile uint16_t x1656 = 3U;
	int64_t t93 = -75043069115LL;

	t93 = (x1653|(x1654>>(x1655&x1656)));

	if (t93 != -16815LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1657 = 1629330843U;
	uint16_t x1658 = UINT16_MAX;
	static uint32_t x1659 = 1571176222U;
	static uint8_t x1660 = UINT8_MAX;
	uint32_t t94 = 44U;

	t94 = (x1657|(x1658>>(x1659&x1660)));

	if (t94 != 1629330843U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x1685 = -1;
	static int64_t x1687 = INT64_MAX;
	volatile uint16_t x1688 = 1U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x1685|(x1686>>(x1687&x1688)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1714 = 12U;
	int64_t x1715 = 3139LL;
	int32_t x1716 = INT32_MIN;
	static volatile int32_t t96 = 987;

	t96 = (x1713|(x1714>>(x1715&x1716)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1737 = INT64_MIN;
	uint8_t x1740 = 58U;

	t97 = (x1737|(x1738>>(x1739&x1740)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1745 = INT16_MAX;
	volatile uint64_t x1746 = 866140LLU;
	volatile int64_t x1747 = INT64_MIN;
	int8_t x1748 = INT8_MAX;
	volatile uint64_t t98 = 41127LLU;

	t98 = (x1745|(x1746>>(x1747&x1748)));

	if (t98 != 884735LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x1773 = 7959927LL;
	uint32_t x1774 = UINT32_MAX;
	volatile int64_t x1775 = INT64_MIN;
	uint8_t x1776 = UINT8_MAX;

	t99 = (x1773|(x1774>>(x1775&x1776)));

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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


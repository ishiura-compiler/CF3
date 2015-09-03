#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x16 = INT16_MIN;
volatile int64_t x19 = INT64_MAX;
volatile uint8_t x24 = UINT8_MAX;
uint16_t x25 = 3082U;
int32_t x26 = INT32_MIN;
int16_t x33 = INT16_MAX;
static uint16_t x34 = 43U;
int8_t x36 = 12;
int64_t x38 = 640731737044209LL;
static int64_t t5 = -220150840545727LL;
volatile int64_t x46 = -1LL;
int16_t x48 = 4;
uint8_t x51 = 1U;
volatile uint64_t t7 = 2277093375811447810LLU;
int32_t x53 = INT32_MIN;
volatile uint64_t x54 = 787972LLU;
int16_t x55 = INT16_MIN;
uint16_t x62 = 245U;
volatile uint16_t x91 = 81U;
int16_t x93 = INT16_MIN;
int32_t x94 = INT32_MIN;
int16_t x103 = -2716;
uint32_t x110 = UINT32_MAX;
uint16_t x117 = 1U;
volatile uint32_t x120 = 1485572172U;
int8_t x165 = 31;
uint8_t x189 = 29U;
volatile int8_t x191 = INT8_MIN;
int64_t t23 = 9575508LL;
volatile int32_t x202 = -1;
uint64_t x203 = 40708005LLU;
volatile uint32_t x247 = 1886U;
uint8_t x274 = 46U;
uint16_t x291 = 22099U;
uint8_t x293 = 30U;
uint64_t t33 = 60551851459240LLU;
int8_t x313 = -1;
int32_t x317 = -108031;
int8_t x318 = -1;
int16_t x327 = INT16_MAX;
volatile int8_t x341 = 14;
int32_t x346 = INT32_MAX;
int8_t x380 = INT8_MIN;
static uint64_t x409 = 384LLU;
uint8_t x431 = 91U;
static int8_t x450 = -14;
uint8_t x451 = 0U;
static int32_t x465 = 68795108;
int32_t x469 = INT32_MIN;
static uint64_t x481 = UINT64_MAX;
uint64_t x482 = 672042863837074616LLU;
uint8_t x483 = UINT8_MAX;
uint16_t x484 = UINT16_MAX;
int64_t t48 = 1455310285996LL;
volatile int16_t x545 = INT16_MIN;
static int32_t x561 = -1;
volatile int16_t x563 = INT16_MIN;
int64_t x597 = INT64_MIN;
int32_t x618 = INT32_MIN;
static int64_t x622 = INT64_MIN;
uint32_t x630 = UINT32_MAX;
uint8_t x632 = UINT8_MAX;
int32_t x633 = -3660;
volatile uint16_t x641 = 6594U;
volatile int64_t x644 = -1LL;
int64_t x647 = -1LL;
uint16_t x648 = UINT16_MAX;
int64_t x662 = INT64_MAX;
int16_t x666 = INT16_MIN;
volatile int8_t x667 = INT8_MIN;
uint16_t x668 = 0U;
uint64_t t62 = 443317821LLU;
static int64_t x695 = 197LL;
volatile uint8_t x721 = 3U;
volatile int32_t t65 = 39;
int32_t x741 = INT32_MIN;
volatile uint64_t x742 = 119941405499235377LLU;
int8_t x744 = 0;
volatile uint64_t t66 = 39859LLU;
static uint32_t x749 = 11821665U;
int32_t x780 = 3480;
volatile uint64_t t71 = 3LLU;
volatile uint64_t x809 = 28610798LLU;
int32_t x813 = -1;
uint32_t x823 = 4U;
volatile uint32_t t74 = 126U;
int8_t x831 = -1;
static int32_t t75 = -901753;
static int32_t x849 = 4182;
volatile int32_t x852 = INT32_MAX;
int64_t x862 = 1879136984718520085LL;
int8_t x864 = INT8_MIN;
volatile int16_t x878 = INT16_MIN;
int8_t x880 = 0;
volatile uint64_t t79 = 796703833LLU;
volatile uint16_t x884 = 15U;
int64_t x909 = 12861310LL;
volatile int64_t x912 = -492087LL;
static int64_t t82 = -4215492067150LL;
int64_t x932 = -66382605053LL;
uint32_t x936 = UINT32_MAX;
static volatile uint32_t t84 = 1263U;
uint64_t x937 = 260117393607LLU;
int64_t t86 = -3407346199579660LL;
int8_t x979 = INT8_MIN;
uint32_t x997 = 9399U;
int64_t t91 = 3LL;
int32_t x1026 = INT32_MIN;
int8_t x1027 = INT8_MIN;
static int32_t x1067 = 5203;
volatile int64_t t96 = 309857LL;
int64_t x1075 = INT64_MIN;
int64_t x1076 = -1LL;
int64_t x1089 = 20LL;
int8_t x1099 = -1;


void f0(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MAX;
	int64_t x15 = -1LL;
	volatile int64_t t0 = 502133LL;

	t0 = (x13/(x14/(x15^x16)));

	if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = INT32_MIN;
	static int32_t x18 = INT32_MIN;
	volatile int64_t x20 = INT64_MIN;
	static volatile int64_t t1 = -192875LL;

	t1 = (x17/(x18/(x19^x20)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x21 = 15U;
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	volatile int32_t t2 = 27;

	t2 = (x21/(x22/(x23^x24)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x27 = 3255U;
	static int8_t x28 = -1;
	static int32_t t3 = 1;

	t3 = (x25/(x26/(x27^x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x35 = 29U;
	int32_t t4 = -97;

	t4 = (x33/(x34/(x35^x36)));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x39 = 435LL;
	uint16_t x40 = UINT16_MAX;

	t5 = (x37/(x38/(x39^x40)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x47 = 156LLU;
	volatile uint64_t t6 = 73117024948LLU;

	t6 = (x45/(x46/(x47^x48)));

	if (t6 != 151LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MIN;
	int16_t x52 = 21;

	t7 = (x49/(x50/(x51^x52)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x56 = -1;
	uint64_t t8 = 58845070910LLU;

	t8 = (x53/(x54/(x55^x56)));

	if (t8 != 768614336315086165LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x61 = -1LL;
	int64_t x63 = -38LL;
	uint16_t x64 = 13U;
	volatile int64_t t9 = 10981820932LL;

	t9 = (x61/(x62/(x63^x64)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x85 = -1;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	static int16_t x88 = -55;
	static volatile int64_t t10 = -36904926017744334LL;

	t10 = (x85/(x86/(x87^x88)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -238987205425LL;
	volatile int8_t x92 = INT8_MIN;
	int64_t t11 = 1731217677944082438LL;

	t11 = (x89/(x90/(x91^x92)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x95 = -15;
	static int16_t x96 = 21;
	static volatile int32_t t12 = 27098076;

	t12 = (x93/(x94/(x95^x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x101 = 506802338131674LLU;
	int16_t x102 = INT16_MAX;
	uint16_t x104 = 5U;
	volatile uint64_t t13 = 46LLU;

	t13 = (x101/(x102/(x103^x104)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x109 = -1;
	int16_t x111 = 3;
	int64_t x112 = -1LL;
	int64_t t14 = 282227LL;

	t14 = (x109/(x110/(x111^x112)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x113 = INT8_MAX;
	int32_t x114 = 150;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 38U;
	static int32_t t15 = -62354946;

	t15 = (x113/(x114/(x115^x116)));

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x118 = INT8_MIN;
	static uint8_t x119 = UINT8_MAX;
	volatile uint32_t t16 = 4U;

	t16 = (x117/(x118/(x119^x120)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = UINT16_MAX;
	volatile uint8_t x123 = 9U;
	uint16_t x124 = 156U;
	int32_t t17 = -37;

	t17 = (x121/(x122/(x123^x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x149 = 214LLU;
	int64_t x150 = INT64_MIN;
	int16_t x151 = -1;
	volatile int8_t x152 = -6;
	static volatile uint64_t t18 = 7054683208693486457LLU;

	t18 = (x149/(x150/(x151^x152)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	volatile uint32_t x168 = 445341U;
	volatile uint32_t t19 = 0U;

	t19 = (x165/(x166/(x167^x168)));

	if (t19 != 31U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x173 = -37LL;
	int8_t x174 = INT8_MIN;
	static int32_t x175 = -22;
	int8_t x176 = -1;
	static volatile int64_t t20 = -2111542052931LL;

	t20 = (x173/(x174/(x175^x176)));

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x185 = UINT64_MAX;
	static int8_t x186 = INT8_MIN;
	uint16_t x187 = 1455U;
	volatile uint64_t x188 = 402441908497834104LLU;
	static volatile uint64_t t21 = 3369227845976LLU;

	t21 = (x185/(x186/(x187^x188)));

	if (t21 != 409927646082434480LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x190 = INT32_MAX;
	int32_t x192 = 9;
	volatile int32_t t22 = 22932895;

	t22 = (x189/(x190/(x191^x192)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x193 = INT64_MIN;
	static int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MAX;
	int64_t x196 = -6574327LL;

	t23 = (x193/(x194/(x195^x196)));

	if (t23 != 28292552260290723LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x197 = 99U;
	uint8_t x198 = 17U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t24 = -111507383;

	t24 = (x197/(x198/(x199^x200)));

	if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x201 = INT64_MIN;
	int16_t x204 = 10253;
	volatile uint64_t t25 = 4944030052677342548LLU;

	t25 = (x201/(x202/(x203^x204)));

	if (t25 != 20350932LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x229 = INT64_MIN;
	uint32_t x230 = 270543U;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	volatile int64_t t26 = 0LL;

	t26 = (x229/(x230/(x231^x232)));

	if (t26 != -1152921504606846976LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x245 = -1;
	int64_t x246 = INT64_MAX;
	static int32_t x248 = INT32_MIN;
	volatile int64_t t27 = 905LL;

	t27 = (x245/(x246/(x247^x248)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -3;
	int16_t x252 = -1;
	int32_t t28 = -409;

	t28 = (x249/(x250/(x251^x252)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x253 = -1546LL;
	int16_t x254 = INT16_MAX;
	static uint16_t x255 = 0U;
	int32_t x256 = -13;
	static volatile int64_t t29 = 166753LL;

	t29 = (x253/(x254/(x255^x256)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x261 = 1LLU;
	volatile int8_t x262 = INT8_MIN;
	volatile int16_t x263 = -1;
	uint8_t x264 = 3U;
	uint64_t t30 = 7999611212748LLU;

	t30 = (x261/(x262/(x263^x264)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x273 = 1378571899U;
	int32_t x275 = -1;
	static volatile int8_t x276 = 0;
	uint32_t t31 = 5U;

	t31 = (x273/(x274/(x275^x276)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x289 = -1;
	uint64_t x290 = UINT64_MAX;
	uint16_t x292 = UINT16_MAX;
	uint64_t t32 = 9126836764346787193LLU;

	t32 = (x289/(x290/(x291^x292)));

	if (t32 != 43436LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x294 = INT8_MIN;
	int64_t x295 = -682738842153670007LL;
	volatile uint64_t x296 = UINT64_MAX;

	t33 = (x293/(x294/(x295^x296)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x314 = INT32_MAX;
	int16_t x315 = -1;
	int32_t x316 = 1495;
	volatile int32_t t34 = -1;

	t34 = (x313/(x314/(x315^x316)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 6198208U;
	static uint32_t t35 = 2U;

	t35 = (x317/(x318/(x319^x320)));

	if (t35 != 4294859265U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x325 = 702;
	volatile int16_t x326 = -4;
	volatile uint64_t x328 = 21766438LLU;
	volatile uint64_t t36 = 632581861428178LLU;

	t36 = (x325/(x326/(x327^x328)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x329 = -15;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t37 = 201;

	t37 = (x329/(x330/(x331^x332)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x342 = INT8_MIN;
	int32_t x343 = 0;
	volatile uint64_t x344 = 1542773886LLU;
	uint64_t t38 = 1672LLU;

	t38 = (x341/(x342/(x343^x344)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x345 = -1;
	volatile int8_t x347 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;
	int32_t t39 = 1;

	t39 = (x345/(x346/(x347^x348)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x377 = 797LLU;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = UINT32_MAX;
	static uint64_t t40 = 1LLU;

	t40 = (x377/(x378/(x379^x380)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x410 = INT32_MIN;
	uint64_t x411 = 5922245872281246134LLU;
	static int8_t x412 = INT8_MIN;
	volatile uint64_t t41 = 676729074LLU;

	t41 = (x409/(x410/(x411^x412)));

	if (t41 != 384LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x429 = -108;
	uint32_t x430 = UINT32_MAX;
	uint16_t x432 = 7374U;
	uint32_t t42 = 7978U;

	t42 = (x429/(x430/(x431^x432)));

	if (t42 != 7317U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = -36;
	volatile uint32_t x443 = 159096547U;
	int16_t x444 = INT16_MIN;
	uint32_t t43 = 4585U;

	t43 = (x441/(x442/(x443^x444)));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x449 = 10459956765101LL;
	uint64_t x452 = 124080453LLU;
	volatile uint64_t t44 = 67952903LLU;

	t44 = (x449/(x450/(x451^x452)));

	if (t44 != 70LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x466 = -1244780424454LL;
	int64_t x467 = -48875LL;
	int32_t x468 = INT32_MIN;
	volatile int64_t t45 = -199240633724484246LL;

	t45 = (x465/(x466/(x467^x468)));

	if (t45 != -118817LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x470 = 28U;
	int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t46 = -131;

	t46 = (x469/(x470/(x471^x472)));

	if (t46 != 76695844) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t t47 = 11330071296509LLU;

	t47 = (x481/(x482/(x483^x484)));

	if (t47 != 1791855LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x509 = INT16_MIN;
	int64_t x510 = INT64_MIN;
	uint16_t x511 = 1U;
	int32_t x512 = -1;

	t48 = (x509/(x510/(x511^x512)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x529 = 5763729301554LL;
	volatile int16_t x530 = INT16_MIN;
	volatile uint8_t x531 = 68U;
	uint64_t x532 = 126811LLU;
	uint64_t t49 = 12190031819LLU;

	t49 = (x529/(x530/(x531^x532)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x546 = -3568304532160575436LL;
	int64_t x547 = -1LL;
	static int64_t x548 = -2737LL;
	volatile int64_t t50 = -75LL;

	t50 = (x545/(x546/(x547^x548)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x562 = -435839828366818017LL;
	int32_t x564 = INT32_MIN;
	volatile int64_t t51 = 52493159LL;

	t51 = (x561/(x562/(x563^x564)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x565 = 23243LL;
	volatile uint64_t x566 = 4698805447178566201LLU;
	int8_t x567 = INT8_MIN;
	uint64_t x568 = UINT64_MAX;
	static volatile uint64_t t52 = 336855LLU;

	t52 = (x565/(x566/(x567^x568)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x598 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	static volatile int64_t x600 = INT64_MIN;
	uint64_t t53 = 210900301204LLU;

	t53 = (x597/(x598/(x599^x600)));

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x617 = INT16_MIN;
	uint8_t x619 = 11U;
	int64_t x620 = 191355LL;
	int64_t t54 = 23LL;

	t54 = (x617/(x618/(x619^x620)));

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x621 = UINT32_MAX;
	static int16_t x623 = INT16_MIN;
	int32_t x624 = 22671190;
	static int64_t t55 = 3LL;

	t55 = (x621/(x622/(x623^x624)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x629 = INT64_MIN;
	volatile uint8_t x631 = 0U;
	int64_t t56 = -34491410621737438LL;

	t56 = (x629/(x630/(x631^x632)));

	if (t56 != -547608330367LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x634 = 1U;
	int32_t x635 = INT32_MIN;
	int32_t x636 = INT32_MAX;
	static int32_t t57 = -175591;

	t57 = (x633/(x634/(x635^x636)));

	if (t57 != 3660) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x642 = INT16_MIN;
	static int8_t x643 = INT8_MIN;
	int64_t t58 = 259187102LL;

	t58 = (x641/(x642/(x643^x644)));

	if (t58 != -25LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x645 = -1LL;
	uint32_t x646 = 257711551U;
	int64_t t59 = 5723479216LL;

	t59 = (x645/(x646/(x647^x648)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x661 = 4U;
	uint32_t x663 = 24U;
	uint16_t x664 = UINT16_MAX;
	static volatile int64_t t60 = 109554718LL;

	t60 = (x661/(x662/(x663^x664)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x665 = -1;
	int32_t t61 = 4999716;

	t61 = (x665/(x666/(x667^x668)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x677 = 367763LLU;
	int64_t x678 = INT64_MIN;
	volatile int32_t x679 = INT32_MAX;
	volatile int16_t x680 = INT16_MIN;

	t62 = (x677/(x678/(x679^x680)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x689 = 164873061LLU;
	int32_t x690 = INT32_MAX;
	uint8_t x691 = 103U;
	static uint32_t x692 = 262672834U;
	uint64_t t63 = 13823194801102665LLU;

	t63 = (x689/(x690/(x691^x692)));

	if (t63 != 20609132LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x693 = 14523514LL;
	int64_t x694 = INT64_MIN;
	int64_t x696 = -1LL;
	static int64_t t64 = 48353821LL;

	t64 = (x693/(x694/(x695^x696)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x722 = INT8_MIN;
	int32_t x723 = -1;
	int8_t x724 = INT8_MIN;

	t65 = (x721/(x722/(x723^x724)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x743 = INT8_MAX;

	t66 = (x741/(x742/(x743^x744)));

	if (t66 != 19532LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x750 = INT16_MIN;
	static uint32_t x751 = 29328437U;
	static int32_t x752 = -1;
	volatile uint32_t t67 = 1U;

	t67 = (x749/(x750/(x751^x752)));

	if (t67 != 11821665U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x753 = INT16_MIN;
	int64_t x754 = -121989256932259LL;
	static volatile uint16_t x755 = UINT16_MAX;
	static uint16_t x756 = 4U;
	static int64_t t68 = -2LL;

	t68 = (x753/(x754/(x755^x756)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x769 = 8;
	uint64_t x770 = UINT64_MAX;
	uint8_t x771 = UINT8_MAX;
	volatile int32_t x772 = INT32_MIN;
	uint64_t t69 = 17944825745165LLU;

	t69 = (x769/(x770/(x771^x772)));

	if (t69 != 8LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x777 = UINT32_MAX;
	uint64_t x778 = UINT64_MAX;
	int32_t x779 = -1;
	uint64_t t70 = 817070238075320866LLU;

	t70 = (x777/(x778/(x779^x780)));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x789 = -1;
	uint64_t x790 = UINT64_MAX;
	volatile int16_t x791 = 69;
	volatile uint32_t x792 = 1213U;

	t71 = (x789/(x790/(x791^x792)));

	if (t71 != 1272LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x810 = -1LL;
	volatile int8_t x811 = INT8_MAX;
	uint64_t x812 = UINT64_MAX;
	static uint64_t t72 = 35LLU;

	t72 = (x809/(x810/(x811^x812)));

	if (t72 != 28610798LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x814 = INT64_MAX;
	int32_t x815 = INT32_MIN;
	int8_t x816 = INT8_MIN;
	int64_t t73 = 1089830643515LL;

	t73 = (x813/(x814/(x815^x816)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x821 = UINT8_MAX;
	static uint32_t x822 = UINT32_MAX;
	int32_t x824 = INT32_MIN;

	t74 = (x821/(x822/(x823^x824)));

	if (t74 != 255U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x829 = -1;
	uint16_t x830 = UINT16_MAX;
	static uint8_t x832 = 110U;

	t75 = (x829/(x830/(x831^x832)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x850 = INT64_MAX;
	volatile uint32_t x851 = 51184237U;
	int64_t t76 = -1971276150236LL;

	t76 = (x849/(x850/(x851^x852)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x861 = 0;
	uint8_t x863 = 9U;
	volatile int64_t t77 = 10622592107925361LL;

	t77 = (x861/(x862/(x863^x864)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x869 = 345U;
	uint32_t x870 = UINT32_MAX;
	int8_t x871 = INT8_MIN;
	static volatile int32_t x872 = INT32_MAX;
	uint32_t t78 = 96U;

	t78 = (x869/(x870/(x871^x872)));

	if (t78 != 345U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x877 = 72736295757823LL;
	volatile uint64_t x879 = 1094929351808LLU;

	t79 = (x877/(x878/(x879^x880)));

	if (t79 != 4317353LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x881 = INT8_MAX;
	int64_t x882 = INT64_MIN;
	static volatile int64_t x883 = 1124143612189828313LL;
	volatile int64_t t80 = 914482770LL;

	t80 = (x881/(x882/(x883^x884)));

	if (t80 != -15LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x893 = INT8_MIN;
	int64_t x894 = INT64_MIN;
	static int64_t x895 = INT64_MIN;
	int64_t x896 = -9875324707969LL;
	volatile int64_t t81 = 12440LL;

	t81 = (x893/(x894/(x895^x896)));

	if (t81 != 128LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x910 = INT32_MAX;
	int8_t x911 = -7;

	t82 = (x909/(x910/(x911^x912)));

	if (t82 != 2947LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x929 = 5807989434LL;
	volatile int16_t x930 = -2;
	static uint64_t x931 = 132LLU;
	volatile uint64_t t83 = 19914LLU;

	t83 = (x929/(x930/(x931^x932)));

	if (t83 != 5807989434LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x933 = UINT8_MAX;
	static int8_t x934 = INT8_MIN;
	volatile int16_t x935 = INT16_MAX;

	t84 = (x933/(x934/(x935^x936)));

	if (t84 != 255U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x938 = INT16_MIN;
	int8_t x939 = 6;
	uint16_t x940 = 12542U;
	uint64_t t85 = 4245451676LLU;

	t85 = (x937/(x938/(x939^x940)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x953 = INT64_MAX;
	int64_t x954 = INT64_MIN;
	uint32_t x955 = 48513484U;
	int32_t x956 = -1;

	t86 = (x953/(x954/(x955^x956)));

	if (t86 != -4246453812LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x965 = -1;
	int64_t x966 = INT64_MAX;
	volatile uint16_t x967 = 1162U;
	int16_t x968 = INT16_MIN;
	int64_t t87 = -25607084813042LL;

	t87 = (x965/(x966/(x967^x968)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x977 = INT32_MAX;
	int64_t x978 = INT64_MAX;
	volatile int8_t x980 = 1;
	volatile int64_t t88 = 275137547006LL;

	t88 = (x977/(x978/(x979^x980)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x985 = 62;
	int64_t x986 = INT64_MAX;
	uint8_t x987 = 8U;
	int64_t x988 = -1LL;
	int64_t t89 = -12757598609LL;

	t89 = (x985/(x986/(x987^x988)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x989 = 1U;
	int32_t x990 = -1;
	static volatile int8_t x991 = 1;
	volatile uint32_t x992 = UINT32_MAX;
	uint32_t t90 = 32010U;

	t90 = (x989/(x990/(x991^x992)));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x998 = 85254303U;
	int64_t x999 = -1LL;
	int32_t x1000 = -8568;

	t91 = (x997/(x998/(x999^x1000)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x1017 = -1;
	int64_t x1018 = -1LL;
	static uint64_t x1019 = 26770399509LLU;
	uint32_t x1020 = UINT32_MAX;
	uint64_t t92 = 8458298763LLU;

	t92 = (x1017/(x1018/(x1019^x1020)));

	if (t92 != 29064175357LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1025 = 31U;
	int8_t x1028 = -1;
	volatile int32_t t93 = 13521;

	t93 = (x1025/(x1026/(x1027^x1028)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1037 = -1;
	int64_t x1038 = -239942247994865LL;
	volatile int16_t x1039 = INT16_MAX;
	volatile uint64_t x1040 = 346235019854LLU;
	volatile uint64_t t94 = 255781822901680904LLU;

	t94 = (x1037/(x1038/(x1039^x1040)));

	if (t94 != 346239544136LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x1041 = 534344804621477114LL;
	int64_t x1042 = INT64_MIN;
	int8_t x1043 = INT8_MAX;
	volatile int64_t x1044 = INT64_MAX;
	int64_t t95 = -402264951771573621LL;

	t95 = (x1041/(x1042/(x1043^x1044)));

	if (t95 != -534344804621477114LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1065 = 6574856LL;
	int16_t x1066 = INT16_MIN;
	static int64_t x1068 = -1LL;

	t96 = (x1065/(x1066/(x1067^x1068)));

	if (t96 != 1095809LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1073 = UINT16_MAX;
	int64_t x1074 = INT64_MAX;
	volatile int64_t t97 = -33707790511LL;

	t97 = (x1073/(x1074/(x1075^x1076)));

	if (t97 != 65535LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1090 = UINT32_MAX;
	int32_t x1091 = -1;
	int8_t x1092 = INT8_MIN;
	int64_t t98 = -1981880828213418LL;

	t98 = (x1089/(x1090/(x1091^x1092)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1097 = 50302LLU;
	uint16_t x1098 = 499U;
	static uint8_t x1100 = UINT8_MAX;
	volatile uint64_t t99 = 2832LLU;

	t99 = (x1097/(x1098/(x1099^x1100)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


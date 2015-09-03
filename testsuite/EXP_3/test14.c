#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile int64_t t1 = -3593773LL;
volatile int16_t x10 = -1;
int8_t x18 = INT8_MIN;
volatile int64_t t6 = -7615004897LL;
volatile int32_t x44 = -1;
int64_t t7 = -80127474LL;
volatile int32_t t8 = 87733;
volatile uint64_t x51 = 206058LLU;
int64_t x54 = -116721854607149465LL;
int64_t x55 = 170739493180092LL;
int8_t x76 = -6;
volatile int8_t x80 = 0;
volatile int32_t t12 = -6032400;
int64_t x82 = INT64_MIN;
static int16_t x85 = -1;
int32_t x95 = 16733065;
uint16_t x98 = 19366U;
int8_t x108 = 1;
static volatile uint64_t t19 = 9991013667071LLU;
uint32_t x115 = 673657661U;
uint32_t t20 = 71989976U;
int8_t x123 = INT8_MIN;
uint32_t t21 = 30003U;
int64_t x127 = 11LL;
int64_t x129 = 46467545046LL;
int32_t x132 = INT32_MIN;
int64_t t23 = 14LL;
static int32_t x144 = -1;
volatile uint64_t t26 = 48220051200217163LLU;
int8_t x161 = 8;
static volatile int64_t x172 = -864LL;
static volatile int8_t x173 = -1;
uint16_t x187 = 62U;
volatile uint32_t x195 = 0U;
int64_t x197 = -2LL;
uint8_t x203 = 1U;
volatile uint64_t x204 = 804598480LLU;
volatile uint64_t t36 = 4834229558388236105LLU;
int16_t x218 = -1;
int8_t x223 = -47;
uint32_t x226 = 807U;
uint64_t x229 = 57471922993332LLU;
static uint64_t t41 = 138583285517474LLU;
uint8_t x239 = 25U;
int64_t x247 = -1LL;
uint32_t x276 = 859369U;
static volatile int64_t t47 = -5LL;
uint16_t x286 = UINT16_MAX;
volatile int64_t t49 = -390206797LL;
int16_t x293 = INT16_MAX;
int32_t x295 = -653898656;
static volatile uint32_t t50 = 910U;
int16_t x309 = 29;
int8_t x312 = INT8_MAX;
int64_t t53 = 2844LL;
static uint32_t x326 = UINT32_MAX;
int64_t x329 = -1LL;
int32_t t57 = -29;
static int32_t x342 = 745;
static volatile int64_t x347 = -1LL;
volatile int64_t t60 = -179453776179794LL;
int8_t x350 = INT8_MIN;
volatile uint32_t x356 = UINT32_MAX;
uint32_t t62 = 80U;
static int16_t x359 = INT16_MIN;
volatile int8_t x360 = INT8_MAX;
int64_t x362 = -1LL;
static uint16_t x364 = UINT16_MAX;
int32_t x380 = -255770;
volatile uint64_t t67 = 14466075671LLU;
int8_t x394 = INT8_MAX;
int8_t x396 = -24;
static int8_t x398 = INT8_MIN;
static int16_t x404 = 6;
volatile int64_t t71 = 1LL;
static int32_t x409 = -293;
uint32_t x411 = 152061U;
static uint16_t x414 = 481U;
uint8_t x424 = 18U;
int8_t x425 = -1;
int8_t x426 = -1;
int8_t x428 = INT8_MAX;
uint64_t t75 = 3366100480815LLU;
int8_t x429 = -31;
volatile int16_t x432 = -1;
static volatile int16_t x433 = INT16_MAX;
int64_t x435 = -1LL;
int16_t x438 = 3882;
uint8_t x441 = UINT8_MAX;
uint8_t x446 = 26U;
uint32_t x447 = UINT32_MAX;
volatile int16_t x449 = INT16_MIN;
int8_t x450 = -1;
int8_t x453 = INT8_MIN;
int16_t x459 = INT16_MIN;
int32_t t83 = 5328825;
int8_t x466 = 6;
static uint16_t x470 = 3768U;
uint32_t x479 = 58U;
volatile uint64_t t88 = 29902469022816LLU;
uint64_t x486 = UINT64_MAX;
int32_t x490 = INT32_MIN;
static volatile uint32_t t90 = 8157U;
uint16_t x498 = UINT16_MAX;
static volatile int64_t t92 = -93147992628819474LL;
int64_t x506 = -1248522384597878130LL;
static int64_t x509 = -1LL;
int8_t x510 = 0;
volatile uint32_t x514 = 815608475U;
volatile int64_t t96 = -244870987903986LL;
static int8_t x521 = -1;
uint64_t x522 = UINT64_MAX;
uint32_t x525 = 1445030U;
static volatile int32_t x526 = INT32_MIN;
static volatile uint64_t t99 = 2538448837669LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1;

	t0 = ((x1-x2)+(x3+x4));

	if (t0 != -2147417986) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -770;
	volatile int32_t x6 = -1;
	int32_t x7 = 225;
	int64_t x8 = 10LL;

	t1 = ((x5-x6)+(x7+x8));

	if (t1 != -534LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 12308LLU;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 174648582543832LLU;

	t2 = ((x9-x10)+(x11+x12));

	if (t2 != 45076LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 1284U;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	volatile int32_t t3 = -1;

	t3 = ((x17-x18)+(x19+x20));

	if (t3 != 34178) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	uint32_t x26 = 1951U;
	int64_t x27 = INT64_MIN;
	static uint64_t x28 = 9666557739LLU;
	uint64_t t4 = 2LLU;

	t4 = ((x25-x26)+(x27+x28));

	if (t4 != 9223372050816298891LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = -6;
	int32_t x30 = 1262;
	uint16_t x31 = 52U;
	volatile uint32_t x32 = 33190268U;
	uint32_t t5 = 34229U;

	t5 = ((x29-x30)+(x31+x32));

	if (t5 != 33189052U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = INT8_MIN;
	int64_t x38 = -1LL;
	int32_t x39 = INT32_MIN;
	static int32_t x40 = INT32_MAX;

	t6 = ((x37-x38)+(x39+x40));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	static volatile int16_t x42 = INT16_MIN;
	uint8_t x43 = 100U;

	t7 = ((x41-x42)+(x43+x44));

	if (t7 != 32866LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -15;
	volatile uint8_t x46 = 6U;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;

	t8 = ((x45-x46)+(x47+x48));

	if (t8 != -32534) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	int32_t x52 = 3;
	uint64_t t9 = 0LLU;

	t9 = ((x49-x50)+(x51+x52));

	if (t9 != 271597LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	static int32_t x56 = -4315;
	volatile uint64_t t10 = 858012528288536267LLU;

	t10 = ((x53-x54)+(x55+x56));

	if (t10 != 116892594100325241LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x73 = -1LL;
	static int16_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	static int64_t t11 = 1779376216399551476LL;

	t11 = ((x73-x74)+(x75+x76));

	if (t11 != 249LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = 0;
	int8_t x78 = 0;
	int8_t x79 = 2;

	t12 = ((x77-x78)+(x79+x80));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x81 = 1681962LLU;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;
	static uint64_t t13 = 3458001641577533952LLU;

	t13 = ((x81-x82)+(x83+x84));

	if (t13 != 1714729LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x86 = INT64_MIN;
	static int32_t x87 = INT32_MIN;
	uint16_t x88 = 0U;
	int64_t t14 = -6LL;

	t14 = ((x85-x86)+(x87+x88));

	if (t14 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 7LLU;
	int64_t x90 = INT64_MAX;
	volatile int8_t x91 = -12;
	int8_t x92 = INT8_MIN;
	static uint64_t t15 = 13447552498503988LLU;

	t15 = ((x89-x90)+(x91+x92));

	if (t15 != 9223372036854775676LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = 3U;
	static uint32_t x94 = 1U;
	int8_t x96 = 0;
	uint32_t t16 = 36U;

	t16 = ((x93-x94)+(x95+x96));

	if (t16 != 16733067U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MAX;
	int8_t x99 = -1;
	uint16_t x100 = 2560U;
	static volatile int32_t t17 = 325;

	t17 = ((x97-x98)+(x99+x100));

	if (t17 != 15960) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 100028U;
	static int16_t x104 = INT16_MAX;
	volatile uint32_t t18 = 393925343U;

	t18 = ((x101-x102)+(x103+x104));

	if (t18 != 165562U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = INT64_MIN;
	int16_t x107 = 0;

	t19 = ((x105-x106)+(x107+x108));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MIN;
	volatile int8_t x114 = INT8_MIN;
	int32_t x116 = 6665;

	t20 = ((x113-x114)+(x115+x116));

	if (t20 != 673631686U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = 11U;
	int16_t x122 = INT16_MAX;
	uint32_t x124 = UINT32_MAX;

	t21 = ((x121-x122)+(x123+x124));

	if (t21 != 4294934411U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -6;
	int32_t x128 = INT32_MIN;
	volatile int64_t t22 = -6846892803032LL;

	t22 = ((x125-x126)+(x127+x128));

	if (t22 != -4294967279LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x130 = 8U;
	int8_t x131 = INT8_MAX;

	t23 = ((x129-x130)+(x131+x132));

	if (t23 != 44320061517LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x133 = UINT64_MAX;
	volatile uint64_t x134 = UINT64_MAX;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t x136 = -1;
	static volatile uint64_t t24 = 24758902LLU;

	t24 = ((x133-x134)+(x135+x136));

	if (t24 != 65534LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = 0;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	int32_t t25 = -6244787;

	t25 = ((x141-x142)+(x143+x144));

	if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x149 = INT16_MIN;
	uint16_t x150 = UINT16_MAX;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MAX;

	t26 = ((x149-x150)+(x151+x152));

	if (t26 != 2147385343LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = 0U;
	int64_t x158 = -1LL;
	uint64_t x159 = 520869406103492294LLU;
	volatile uint32_t x160 = 10697316U;
	static volatile uint64_t t27 = 8490723416LLU;

	t27 = ((x157-x158)+(x159+x160));

	if (t27 != 520869406114189611LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x162 = INT64_MAX;
	uint64_t x163 = 9859349627LLU;
	volatile uint32_t x164 = 3U;
	static uint64_t t28 = 95525821268LLU;

	t28 = ((x161-x162)+(x163+x164));

	if (t28 != 9223372046714125447LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = 225LLU;
	static uint32_t x166 = UINT32_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = 3915;
	uint64_t t29 = 489828685606739LLU;

	t29 = ((x165-x166)+(x167+x168));

	if (t29 != 18446744069414588460LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x169 = INT8_MAX;
	static volatile uint32_t x170 = 1U;
	uint32_t x171 = UINT32_MAX;
	int64_t t30 = -345975357465830861LL;

	t30 = ((x169-x170)+(x171+x172));

	if (t30 != 4294966557LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x174 = -13681889329090LL;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = -1LL;
	static int64_t t31 = 642762320197640713LL;

	t31 = ((x173-x174)+(x175+x176));

	if (t31 != 13681889394623LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x177 = 5U;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	uint64_t t32 = 869LLU;

	t32 = ((x177-x178)+(x179+x180));

	if (t32 != 2147483652LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = -1LL;
	static int16_t x186 = -1;
	static int64_t x188 = INT64_MIN;
	static int64_t t33 = -173880730LL;

	t33 = ((x185-x186)+(x187+x188));

	if (t33 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = -25;
	int16_t x194 = 1;
	int8_t x196 = INT8_MIN;
	volatile uint32_t t34 = 2267U;

	t34 = ((x193-x194)+(x195+x196));

	if (t34 != 4294967142U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x198 = UINT32_MAX;
	int64_t x199 = 336577208LL;
	static uint16_t x200 = 0U;
	volatile int64_t t35 = 1LL;

	t35 = ((x197-x198)+(x199+x200));

	if (t35 != -3958390089LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = -1;
	uint32_t x202 = UINT32_MAX;

	t36 = ((x201-x202)+(x203+x204));

	if (t36 != 804598481LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x213 = -1;
	int64_t x214 = -12671778171944LL;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 246852LLU;
	volatile uint64_t t37 = 683LLU;

	t37 = ((x213-x214)+(x215+x216));

	if (t37 != 12671778386027LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x217 = INT8_MAX;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 130975163U;
	volatile uint32_t t38 = 143302U;

	t38 = ((x217-x218)+(x219+x220));

	if (t38 != 130975418U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x221 = 11U;
	uint16_t x222 = UINT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t39 = 853;

	t39 = ((x221-x222)+(x223+x224));

	if (t39 != -65699) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x225 = INT16_MIN;
	static int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MIN;
	uint32_t t40 = 2829932U;

	t40 = ((x225-x226)+(x227+x228));

	if (t40 != 4294933720U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x230 = 72LLU;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 231478U;

	t41 = ((x229-x230)+(x231+x232));

	if (t41 != 57471923224993LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x238 = 1419478401543LLU;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t42 = 5LLU;

	t42 = ((x237-x238)+(x239+x240));

	if (t42 != 9223370617376374288LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x245 = 1;
	volatile int16_t x246 = -11;
	static int16_t x248 = INT16_MIN;
	volatile int64_t t43 = 809642574615929749LL;

	t43 = ((x245-x246)+(x247+x248));

	if (t43 != -32757LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x261 = 1LL;
	int32_t x262 = -970;
	static uint8_t x263 = 1U;
	uint32_t x264 = 60198912U;
	volatile int64_t t44 = -125LL;

	t44 = ((x261-x262)+(x263+x264));

	if (t44 != 60199884LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x265 = 11579337989094033LL;
	int16_t x266 = -1;
	int8_t x267 = 5;
	uint64_t x268 = 0LLU;
	uint64_t t45 = 232017879416674LLU;

	t45 = ((x265-x266)+(x267+x268));

	if (t45 != 11579337989094039LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x269 = 1719555832830LL;
	uint8_t x270 = 5U;
	volatile uint8_t x271 = 96U;
	static uint32_t x272 = UINT32_MAX;
	int64_t t46 = 14483510883LL;

	t46 = ((x269-x270)+(x271+x272));

	if (t46 != 1719555832920LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int64_t x274 = INT64_MAX;
	int16_t x275 = 1;

	t47 = ((x273-x274)+(x275+x276));

	if (t47 != -9223372036853850902LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x285 = 393U;
	uint32_t x287 = 86175U;
	volatile uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t48 = 64635LLU;

	t48 = ((x285-x286)+(x287+x288));

	if (t48 != 21032LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x289 = UINT16_MAX;
	static uint8_t x290 = UINT8_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = 59528LL;

	t49 = ((x289-x290)+(x291+x292));

	if (t49 != -2147358840LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x294 = 1136467U;
	int8_t x296 = INT8_MIN;

	t50 = ((x293-x294)+(x295+x296));

	if (t50 != 3639964812U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x301 = -2376667598339355LL;
	int8_t x302 = 28;
	uint16_t x303 = 6U;
	uint8_t x304 = 5U;
	int64_t t51 = -93LL;

	t51 = ((x301-x302)+(x303+x304));

	if (t51 != -2376667598339372LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int64_t x306 = INT64_MAX;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MIN;
	volatile int64_t t52 = 10852407675106284LL;

	t52 = ((x305-x306)+(x307+x308));

	if (t52 != -9223372032559841025LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x310 = 1;
	volatile int64_t x311 = INT64_MIN;

	t53 = ((x309-x310)+(x311+x312));

	if (t53 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x317 = 1;
	uint8_t x318 = 0U;
	volatile int64_t x319 = -219411043368LL;
	uint32_t x320 = 253327U;
	int64_t t54 = 48LL;

	t54 = ((x317-x318)+(x319+x320));

	if (t54 != -219410790040LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x325 = 10U;
	static uint8_t x327 = UINT8_MAX;
	int32_t x328 = INT32_MIN;
	uint32_t t55 = 735825860U;

	t55 = ((x325-x326)+(x327+x328));

	if (t55 != 2147483914U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x330 = INT32_MIN;
	int64_t x331 = -1LL;
	static uint64_t x332 = UINT64_MAX;
	volatile uint64_t t56 = 66523170497LLU;

	t56 = ((x329-x330)+(x331+x332));

	if (t56 != 2147483645LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x333 = INT8_MIN;
	volatile int8_t x334 = -1;
	uint8_t x335 = 3U;
	int16_t x336 = -1;

	t57 = ((x333-x334)+(x335+x336));

	if (t57 != -125) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	int16_t x339 = -1;
	uint16_t x340 = 28U;
	static volatile int32_t t58 = -8834;

	t58 = ((x337-x338)+(x339+x340));

	if (t58 != -100) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x341 = 0;
	int64_t x343 = -1LL;
	volatile int8_t x344 = -58;
	int64_t t59 = -1025197572227349LL;

	t59 = ((x341-x342)+(x343+x344));

	if (t59 != -804LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x345 = UINT32_MAX;
	uint8_t x346 = UINT8_MAX;
	int32_t x348 = INT32_MAX;

	t60 = ((x345-x346)+(x347+x348));

	if (t60 != 6442450686LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x349 = -1LL;
	volatile uint8_t x351 = UINT8_MAX;
	static uint8_t x352 = UINT8_MAX;
	static int64_t t61 = 18725LL;

	t61 = ((x349-x350)+(x351+x352));

	if (t61 != 637LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x353 = -7781;
	uint16_t x354 = 14090U;
	int8_t x355 = INT8_MIN;

	t62 = ((x353-x354)+(x355+x356));

	if (t62 != 4294945296U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x357 = -159039538366139018LL;
	volatile uint16_t x358 = 99U;
	int64_t t63 = -4337480742420486LL;

	t63 = ((x357-x358)+(x359+x360));

	if (t63 != -159039538366171758LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x361 = 7U;
	int32_t x363 = 24;
	int64_t t64 = -29569859LL;

	t64 = ((x361-x362)+(x363+x364));

	if (t64 != 65567LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x369 = -1;
	static int16_t x370 = -1;
	static volatile int32_t x371 = 1;
	uint32_t x372 = 100U;
	uint32_t t65 = 0U;

	t65 = ((x369-x370)+(x371+x372));

	if (t65 != 101U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x377 = 439LLU;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -54766916875504267LL;
	uint64_t t66 = 8081546LLU;

	t66 = ((x377-x378)+(x379+x380));

	if (t66 != 9168605119979016211LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x385 = UINT64_MAX;
	static int16_t x386 = INT16_MIN;
	int16_t x387 = -109;
	int16_t x388 = INT16_MIN;

	t67 = ((x385-x386)+(x387+x388));

	if (t67 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x393 = 1U;
	volatile uint64_t x395 = 282867280596134517LLU;
	uint64_t t68 = 1625690410962121424LLU;

	t68 = ((x393-x394)+(x395+x396));

	if (t68 != 282867280596134367LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = -1;
	int8_t x399 = -1;
	int8_t x400 = INT8_MAX;
	volatile int32_t t69 = 74107;

	t69 = ((x397-x398)+(x399+x400));

	if (t69 != 253) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x401 = -6237;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	volatile int64_t t70 = 384027058934LL;

	t70 = ((x401-x402)+(x403+x404));

	if (t70 != -9223372034707298391LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x405 = INT8_MIN;
	static int32_t x406 = 58561;
	int64_t x407 = -1085486287680344898LL;
	uint16_t x408 = 2165U;

	t71 = ((x405-x406)+(x407+x408));

	if (t71 != -1085486287680401422LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x410 = UINT8_MAX;
	int32_t x412 = 1;
	static uint32_t t72 = 3661969U;

	t72 = ((x409-x410)+(x411+x412));

	if (t72 != 151514U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x413 = UINT64_MAX;
	uint32_t x415 = 257U;
	int64_t x416 = -51628242LL;
	static uint64_t t73 = 41560405LLU;

	t73 = ((x413-x414)+(x415+x416));

	if (t73 != 18446744073657923149LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x421 = UINT32_MAX;
	int64_t x422 = 149284045008602LL;
	int8_t x423 = -7;
	int64_t t74 = 7590084290153LL;

	t74 = ((x421-x422)+(x423+x424));

	if (t74 != -149279750041296LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x427 = UINT64_MAX;

	t75 = ((x425-x426)+(x427+x428));

	if (t75 != 126LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x430 = 224LLU;
	uint64_t x431 = 1352711048LLU;
	volatile uint64_t t76 = 46747098396LLU;

	t76 = ((x429-x430)+(x431+x432));

	if (t76 != 1352710792LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x434 = INT8_MAX;
	volatile uint8_t x436 = 22U;
	int64_t t77 = 3101357276LL;

	t77 = ((x433-x434)+(x435+x436));

	if (t77 != 32661LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x437 = -1;
	int16_t x439 = 3207;
	static int16_t x440 = INT16_MAX;
	volatile int32_t t78 = -489;

	t78 = ((x437-x438)+(x439+x440));

	if (t78 != 32091) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x442 = -1;
	volatile int16_t x443 = INT16_MIN;
	static volatile int16_t x444 = INT16_MIN;
	int32_t t79 = 9;

	t79 = ((x441-x442)+(x443+x444));

	if (t79 != -65280) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t80 = 200878093LLU;

	t80 = ((x445-x446)+(x447+x448));

	if (t80 != 4294934500LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x451 = 6U;
	uint8_t x452 = 0U;
	volatile int32_t t81 = -3286;

	t81 = ((x449-x450)+(x451+x452));

	if (t81 != -32761) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x454 = INT16_MIN;
	int8_t x455 = 0;
	int8_t x456 = INT8_MIN;
	int32_t t82 = -779;

	t82 = ((x453-x454)+(x455+x456));

	if (t82 != 32512) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = INT8_MIN;
	volatile uint8_t x458 = 4U;
	int8_t x460 = -2;

	t83 = ((x457-x458)+(x459+x460));

	if (t83 != -32902) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x465 = -1LL;
	int8_t x467 = INT8_MIN;
	int16_t x468 = 17;
	int64_t t84 = -560131668509316579LL;

	t84 = ((x465-x466)+(x467+x468));

	if (t84 != -118LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x469 = 8103U;
	uint32_t x471 = 546U;
	static int64_t x472 = 699347337946147LL;
	int64_t t85 = 353805666805934LL;

	t85 = ((x469-x470)+(x471+x472));

	if (t85 != 699347337951028LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x473 = -16740512821331LL;
	static int64_t x474 = INT64_MIN;
	int32_t x475 = 4106688;
	static int64_t x476 = 188630LL;
	static volatile int64_t t86 = -669LL;

	t86 = ((x473-x474)+(x475+x476));

	if (t86 != 9223355296346249795LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 0;
	int32_t x478 = 97601946;
	uint32_t x480 = 288U;
	volatile uint32_t t87 = 6495U;

	t87 = ((x477-x478)+(x479+x480));

	if (t87 != 4197365696U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x481 = UINT16_MAX;
	int8_t x482 = INT8_MIN;
	static int32_t x483 = INT32_MAX;
	uint64_t x484 = UINT64_MAX;

	t88 = ((x481-x482)+(x483+x484));

	if (t88 != 2147549309LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x485 = INT16_MAX;
	int16_t x487 = -1;
	int32_t x488 = INT32_MAX;
	volatile uint64_t t89 = 292095356309540LLU;

	t89 = ((x485-x486)+(x487+x488));

	if (t89 != 2147516414LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x489 = -1;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 202695U;

	t90 = ((x489-x490)+(x491+x492));

	if (t90 != 202694U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x497 = -1;
	int64_t x499 = -822683310170600LL;
	static volatile uint32_t x500 = UINT32_MAX;
	int64_t t91 = -31797782560458224LL;

	t91 = ((x497-x498)+(x499+x500));

	if (t91 != -822679015268841LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x501 = 26068334282LL;
	int8_t x502 = 12;
	int16_t x503 = -1;
	int32_t x504 = 248;

	t92 = ((x501-x502)+(x503+x504));

	if (t92 != 26068334517LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = -1LL;
	uint32_t x507 = UINT32_MAX;
	static int16_t x508 = INT16_MIN;
	int64_t t93 = 3321006208441LL;

	t93 = ((x505-x506)+(x507+x508));

	if (t93 != 1248522388892812656LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x511 = 522144441U;
	static int64_t x512 = 1LL;
	int64_t t94 = 16288533684LL;

	t94 = ((x509-x510)+(x511+x512));

	if (t94 != 522144441LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x513 = -291;
	uint64_t x515 = 1283LLU;
	int8_t x516 = INT8_MAX;
	static uint64_t t95 = 49919513014494150LLU;

	t95 = ((x513-x514)+(x515+x516));

	if (t95 != 3479359940LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x517 = -1;
	volatile int32_t x518 = 863;
	uint32_t x519 = 28743U;
	int64_t x520 = INT64_MIN;

	t96 = ((x517-x518)+(x519+x520));

	if (t96 != -9223372036854747929LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x523 = -1;
	int16_t x524 = INT16_MIN;
	static uint64_t t97 = 1852885514606728LLU;

	t97 = ((x521-x522)+(x523+x524));

	if (t97 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x527 = INT32_MIN;
	int8_t x528 = INT8_MAX;
	volatile uint32_t t98 = 2U;

	t98 = ((x525-x526)+(x527+x528));

	if (t98 != 1445157U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x529 = 567U;
	static uint64_t x530 = 11387LLU;
	int8_t x531 = 7;
	int32_t x532 = INT32_MIN;

	t99 = ((x529-x530)+(x531+x532));

	if (t99 != 18446744071562057155LLU) { NG(); } else { ; }
	
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


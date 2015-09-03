#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x20 = -30148390;
static int32_t x31 = -4158895;
int32_t t4 = -3;
static int8_t x44 = INT8_MIN;
uint64_t t7 = 4071370LLU;
int64_t x54 = INT64_MAX;
int8_t x61 = INT8_MAX;
static int16_t x76 = INT16_MIN;
int32_t t11 = 439728;
static int64_t x90 = INT64_MAX;
int16_t x93 = INT16_MAX;
uint32_t x95 = UINT32_MAX;
volatile uint16_t x96 = UINT16_MAX;
int16_t x127 = -2425;
static int16_t x128 = -3443;
uint64_t x135 = 1162LLU;
static volatile int64_t x136 = INT64_MIN;
volatile int16_t x137 = INT16_MIN;
volatile int64_t t20 = 107999225359LL;
volatile int8_t x148 = INT8_MIN;
static volatile int32_t t22 = 12364160;
static volatile int64_t x155 = -1LL;
uint32_t t25 = 32501U;
uint32_t x165 = 119U;
uint64_t x177 = 5569894851133207LLU;
static volatile uint64_t x179 = UINT64_MAX;
static volatile int8_t x180 = INT8_MIN;
int32_t x191 = -1;
int64_t x193 = INT64_MIN;
uint16_t x204 = UINT16_MAX;
volatile int16_t x209 = INT16_MAX;
int64_t x216 = -1LL;
uint32_t t38 = 19U;
volatile uint8_t x225 = 3U;
uint8_t x228 = UINT8_MAX;
static volatile int32_t t39 = -56166;
static uint64_t x229 = UINT64_MAX;
static volatile uint16_t x230 = 0U;
int64_t x233 = INT64_MAX;
uint64_t x234 = UINT64_MAX;
int32_t x241 = -1;
int32_t t43 = -21382735;
int32_t x247 = -1;
volatile int64_t t44 = 2453535843LL;
int8_t x256 = INT8_MIN;
uint8_t x259 = 3U;
static volatile uint64_t t47 = 62785LLU;
int32_t x263 = -7492;
static uint32_t x266 = UINT32_MAX;
int64_t x268 = -1LL;
volatile int64_t x270 = -1LL;
volatile int32_t x271 = -1;
uint8_t x273 = UINT8_MAX;
static uint64_t x276 = 676643457595304LLU;
volatile int8_t x280 = -1;
static volatile int32_t t52 = 333975;
static uint64_t x281 = 30914LLU;
uint32_t x284 = UINT32_MAX;
volatile int64_t x285 = -1LL;
static int8_t x305 = -29;
volatile int32_t t59 = INT32_MIN;
int32_t x313 = INT32_MAX;
volatile int64_t x314 = INT64_MIN;
static int16_t x318 = -1;
int64_t x322 = INT64_MAX;
int64_t x323 = INT64_MAX;
uint8_t x330 = UINT8_MAX;
uint16_t x331 = UINT16_MAX;
int32_t x333 = 31;
int8_t x341 = -1;
uint16_t x345 = 1044U;
int16_t x352 = 281;
volatile int8_t x354 = -1;
int16_t x355 = -29;
uint32_t t69 = 57526U;
int16_t x358 = INT16_MIN;
uint8_t x359 = UINT8_MAX;
uint64_t x374 = 87LLU;
uint16_t x376 = 1U;
uint64_t t73 = 54916727478962315LLU;
volatile int32_t x384 = INT32_MIN;
int16_t x385 = INT16_MIN;
uint16_t x386 = 0U;
uint32_t x390 = 23682U;
uint16_t x398 = 115U;
int64_t x401 = INT64_MIN;
int64_t t80 = 382160607575880213LL;
uint64_t x408 = UINT64_MAX;
int64_t x412 = INT64_MIN;
int64_t x417 = INT64_MIN;
volatile int32_t x428 = INT32_MIN;
int16_t x433 = INT16_MIN;
volatile uint8_t x450 = 65U;
static int64_t x452 = -1LL;
volatile int64_t t90 = -430775177LL;
static volatile int16_t x456 = INT16_MIN;
int16_t x457 = -25;
volatile int32_t x460 = -201515;
uint64_t x470 = UINT64_MAX;
int32_t x473 = -1;
uint8_t x474 = 0U;
int16_t x488 = -17;
uint8_t x495 = 15U;


void f0(void) {
	static uint8_t x13 = UINT8_MAX;
	volatile int64_t x14 = INT64_MIN;
	uint64_t x15 = 82LLU;
	static int64_t x16 = INT64_MIN;
	volatile uint64_t t0 = 35950LLU;

	t0 = (((x13+x14)/x15)+x16);

	if (t0 != 9335852183645687711LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	volatile uint64_t x19 = 14985586LLU;
	static uint64_t t1 = 24LLU;

	t1 = (((x17+x18)/x19)+x20);

	if (t1 != 1230935665940LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x21 = INT64_MIN;
	int64_t x22 = 4956LL;
	uint32_t x23 = 7356U;
	volatile int64_t x24 = -1LL;
	static volatile int64_t t2 = 10786694036699330LL;

	t2 = (((x21+x22)/x23)+x24);

	if (t2 != -1253856992503368LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 597U;
	static int16_t x30 = INT16_MAX;
	int16_t x32 = -48;
	uint32_t t3 = 794U;

	t3 = (((x29+x30)/x31)+x32);

	if (t3 != 4294967248U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x37 = UINT16_MAX;
	static int32_t x38 = 86;
	uint16_t x39 = 14U;
	static volatile uint8_t x40 = UINT8_MAX;

	t4 = (((x37+x38)/x39)+x40);

	if (t4 != 4942) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 996299U;
	static int16_t x42 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	uint64_t t5 = 3919858094636LLU;

	t5 = (((x41+x42)/x43)+x44);

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = -2;
	volatile int16_t x46 = INT16_MAX;
	static int16_t x47 = 12919;
	uint8_t x48 = 29U;
	int32_t t6 = 13843374;

	t6 = (((x45+x46)/x47)+x48);

	if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x49 = 1541LLU;
	static uint16_t x50 = UINT16_MAX;
	int8_t x51 = -3;
	uint16_t x52 = UINT16_MAX;

	t7 = (((x49+x50)/x51)+x52);

	if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x53 = -5;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 213834987U;
	volatile int64_t t8 = 472LL;

	t8 = (((x53+x54)/x55)+x56);

	if (t8 != -281474762875668LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MAX;
	uint8_t x59 = 7U;
	int16_t x60 = -575;
	int32_t t9 = 1;

	t9 = (((x57+x58)/x59)+x60);

	if (t9 != 8805) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t10 = 3606390591LLU;

	t10 = (((x61+x62)/x63)+x64);

	if (t10 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x73 = 70U;
	volatile uint16_t x74 = UINT16_MAX;
	int16_t x75 = 1;

	t11 = (((x73+x74)/x75)+x76);

	if (t11 != 32837) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 34709367U;
	volatile uint32_t t12 = 1624U;

	t12 = (((x77+x78)/x79)+x80);

	if (t12 != 34709367U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 0U;
	uint32_t x82 = 52163U;
	uint16_t x83 = 57U;
	int16_t x84 = INT16_MIN;
	static volatile uint32_t t13 = 13369581U;

	t13 = (((x81+x82)/x83)+x84);

	if (t13 != 4294935443U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x89 = 8838814644100522072LLU;
	volatile int32_t x91 = INT32_MIN;
	static uint8_t x92 = 0U;
	volatile uint64_t t14 = 1LLU;

	t14 = (((x89+x90)/x91)+x92);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x94 = INT8_MIN;
	volatile uint32_t t15 = 62546U;

	t15 = (((x93+x94)/x95)+x96);

	if (t15 != 65535U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x109 = 7U;
	int32_t x110 = -1;
	uint64_t x111 = 304LLU;
	static int32_t x112 = INT32_MAX;
	uint64_t t16 = 131246579LLU;

	t16 = (((x109+x110)/x111)+x112);

	if (t16 != 2147483647LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x125 = 31U;
	int32_t x126 = INT32_MIN;
	int32_t t17 = -1;

	t17 = (((x125+x126)/x127)+x128);

	if (t17 != 882117) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x129 = INT32_MAX;
	static int8_t x130 = -1;
	volatile uint32_t x131 = UINT32_MAX;
	static int16_t x132 = INT16_MIN;
	volatile uint32_t t18 = 84U;

	t18 = (((x129+x130)/x131)+x132);

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MIN;
	uint64_t t19 = 36597206777555LLU;

	t19 = (((x133+x134)/x135)+x136);

	if (t19 != 9223372036858471993LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x138 = INT16_MAX;
	volatile int32_t x139 = INT32_MAX;
	int64_t x140 = -1LL;

	t20 = (((x137+x138)/x139)+x140);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x141 = -1578;
	static uint8_t x142 = 1U;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 53U;
	uint64_t t21 = 133639738667723LLU;

	t21 = (((x141+x142)/x143)+x144);

	if (t21 != 53LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x145 = 15U;
	volatile int8_t x146 = INT8_MIN;
	volatile int32_t x147 = 479;

	t22 = (((x145+x146)/x147)+x148);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = 419;
	volatile int32_t x151 = -9317;
	int64_t x152 = 1550926486733779LL;
	static volatile uint64_t t23 = 12LLU;

	t23 = (((x149+x150)/x151)+x152);

	if (t23 != 1550926486733779LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x153 = 393U;
	static volatile int32_t x154 = -1;
	static int8_t x156 = INT8_MIN;
	int64_t t24 = 726913511183888162LL;

	t24 = (((x153+x154)/x155)+x156);

	if (t24 != -520LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = 50118680;
	static int8_t x162 = INT8_MAX;
	int32_t x163 = -35806;
	uint32_t x164 = UINT32_MAX;

	t25 = (((x161+x162)/x163)+x164);

	if (t25 != 4294965896U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x166 = 1U;
	uint16_t x167 = 1U;
	uint16_t x168 = 24186U;
	volatile uint32_t t26 = 98360U;

	t26 = (((x165+x166)/x167)+x168);

	if (t26 != 24306U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x169 = 8U;
	uint32_t x170 = 1U;
	static int8_t x171 = INT8_MAX;
	int16_t x172 = -7507;
	volatile uint32_t t27 = 13U;

	t27 = (((x169+x170)/x171)+x172);

	if (t27 != 4294959789U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x173 = 37U;
	volatile int8_t x174 = INT8_MIN;
	volatile int64_t x175 = -1LL;
	static int16_t x176 = -1;
	volatile int64_t t28 = -52489LL;

	t28 = (((x173+x174)/x175)+x176);

	if (t28 != 90LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x178 = INT64_MAX;
	uint64_t t29 = 8683910325319556647LLU;

	t29 = (((x177+x178)/x179)+x180);

	if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = 10;
	uint32_t x186 = 971772600U;
	static uint8_t x187 = 2U;
	int16_t x188 = INT16_MIN;
	volatile uint32_t t30 = 50366U;

	t30 = (((x185+x186)/x187)+x188);

	if (t30 != 485853537U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x189 = 1U;
	int32_t x190 = 362;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t31 = 102666684954263032LLU;

	t31 = (((x189+x190)/x191)+x192);

	if (t31 != 18446744073709551252LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x194 = 2;
	static uint32_t x195 = 30474U;
	uint64_t x196 = 1523414983728LLU;
	uint64_t t32 = 21837681LLU;

	t32 = (((x193+x194)/x195)+x196);

	if (t32 != 18446442933475626282LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = 7;
	static int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	int64_t t33 = -731642473552LL;

	t33 = (((x197+x198)/x199)+x200);

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x201 = UINT32_MAX;
	static uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 2957U;
	volatile uint32_t t34 = 1959U;

	t34 = (((x201+x202)/x203)+x204);

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	volatile int64_t t35 = 1LL;

	t35 = (((x209+x210)/x211)+x212);

	if (t35 != 4294934527LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = 0;
	uint8_t x214 = 26U;
	int64_t x215 = 1072675386462809248LL;
	volatile int64_t t36 = 1019LL;

	t36 = (((x213+x214)/x215)+x216);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x217 = INT32_MIN;
	uint64_t x218 = 3413687021984602LLU;
	static volatile int8_t x219 = INT8_MIN;
	uint16_t x220 = 92U;
	uint64_t t37 = 45958LLU;

	t37 = (((x217+x218)/x219)+x220);

	if (t37 != 92LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 37U;
	int32_t x223 = 116289;
	static int16_t x224 = -2021;

	t38 = (((x221+x222)/x223)+x224);

	if (t38 != 4294965275U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x226 = 7446867;
	static int32_t x227 = -1;

	t39 = (((x225+x226)/x227)+x228);

	if (t39 != -7446615) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x231 = INT8_MAX;
	volatile int64_t x232 = INT64_MAX;
	volatile uint64_t t40 = 7499148103286LLU;

	t40 = (((x229+x230)/x231)+x232);

	if (t40 != 9368621990191071489LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x235 = INT16_MAX;
	volatile uint32_t x236 = UINT32_MAX;
	volatile uint64_t t41 = 135488005343601LLU;

	t41 = (((x233+x234)/x235)+x236);

	if (t41 != 281487861874695LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x237 = INT32_MIN;
	static uint64_t x238 = 84041321162LLU;
	uint16_t x239 = 3U;
	volatile int8_t x240 = -1;
	volatile uint64_t t42 = 465328818683366LLU;

	t42 = (((x237+x238)/x239)+x240);

	if (t42 != 27297945837LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	static uint8_t x244 = UINT8_MAX;

	t43 = (((x241+x242)/x243)+x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = -1LL;
	int32_t x246 = 9015919;
	int32_t x248 = INT32_MIN;

	t44 = (((x245+x246)/x247)+x248);

	if (t44 != -2156499566LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x249 = -42594;
	static uint64_t x250 = 12242510757LLU;
	int16_t x251 = -30;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t45 = 3288378LLU;

	t45 = (((x249+x250)/x251)+x252);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = INT16_MAX;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = INT8_MIN;
	static volatile uint64_t t46 = 121396772698085456LLU;

	t46 = (((x253+x254)/x255)+x256);

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x257 = 327938058LLU;
	static volatile int16_t x258 = 862;
	static int32_t x260 = -22236663;

	t47 = (((x257+x258)/x259)+x260);

	if (t47 != 87076310LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x261 = 16350997LLU;
	int16_t x262 = -1;
	int16_t x264 = -55;
	volatile uint64_t t48 = 6LLU;

	t48 = (((x261+x262)/x263)+x264);

	if (t48 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = INT32_MIN;
	volatile int32_t x267 = INT32_MIN;
	int64_t t49 = -49041837095230LL;

	t49 = (((x265+x266)/x267)+x268);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = 929364442;
	uint8_t x272 = 9U;
	int64_t t50 = 46013334032457413LL;

	t50 = (((x269+x270)/x271)+x272);

	if (t50 != -929364432LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x274 = 52521115U;
	int16_t x275 = INT16_MIN;
	volatile uint64_t t51 = 141221436214LLU;

	t51 = (((x273+x274)/x275)+x276);

	if (t51 != 676643457595304LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x277 = UINT16_MAX;
	static int8_t x278 = 55;
	volatile int16_t x279 = INT16_MAX;

	t52 = (((x277+x278)/x279)+x280);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	uint64_t t53 = 28LLU;

	t53 = (((x281+x282)/x283)+x284);

	if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x286 = 1621;
	uint32_t x287 = 874U;
	uint16_t x288 = 962U;
	int64_t t54 = 67491598952904LL;

	t54 = (((x285+x286)/x287)+x288);

	if (t54 != 963LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = 54U;
	volatile int16_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	int64_t t55 = -14696631998156LL;

	t55 = (((x289+x290)/x291)+x292);

	if (t55 != 202LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x293 = 208586LL;
	int16_t x294 = 1;
	uint32_t x295 = 225U;
	int16_t x296 = INT16_MIN;
	int64_t t56 = 8728LL;

	t56 = (((x293+x294)/x295)+x296);

	if (t56 != -31841LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = -1LL;
	int64_t x298 = 739949988353550804LL;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	int64_t t57 = 286962LL;

	t57 = (((x297+x298)/x299)+x300);

	if (t57 != -739949990501034451LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x301 = 244451U;
	volatile uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	volatile uint32_t t58 = 86260074U;

	t58 = (((x301+x302)/x303)+x304);

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x306 = 19271U;
	volatile int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;

	t59 = (((x305+x306)/x307)+x308);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = INT16_MAX;
	static volatile int64_t t60 = 21LL;

	t60 = (((x313+x314)/x315)+x316);

	if (t60 != -36170086410584065LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x317 = UINT8_MAX;
	static uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	static int32_t t61 = -65218025;

	t61 = (((x317+x318)/x319)+x320);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x324 = 27053U;
	static volatile int64_t t62 = 24LL;

	t62 = (((x321+x322)/x323)+x324);

	if (t62 != 27053LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;
	uint64_t t63 = 1719707350580170754LLU;

	t63 = (((x329+x330)/x331)+x332);

	if (t63 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x334 = -1675081;
	static int32_t x335 = INT32_MAX;
	volatile int64_t x336 = INT64_MAX;
	static volatile int64_t t64 = INT64_MAX;

	t64 = (((x333+x334)/x335)+x336);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = -1LL;
	volatile int8_t x338 = 3;
	volatile uint8_t x339 = 2U;
	int32_t x340 = INT32_MAX;
	volatile int64_t t65 = -297751LL;

	t65 = (((x337+x338)/x339)+x340);

	if (t65 != 2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x342 = INT16_MIN;
	static int64_t x343 = INT64_MIN;
	static int16_t x344 = -11204;
	volatile int64_t t66 = -68680LL;

	t66 = (((x341+x342)/x343)+x344);

	if (t66 != -11204LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x346 = INT16_MIN;
	static int64_t x347 = -1LL;
	uint16_t x348 = 1U;
	static volatile int64_t t67 = -81848LL;

	t67 = (((x345+x346)/x347)+x348);

	if (t67 != 31725LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x349 = INT8_MIN;
	volatile uint16_t x350 = 269U;
	int8_t x351 = -1;
	volatile int32_t t68 = -1524474;

	t68 = (((x349+x350)/x351)+x352);

	if (t68 != 140) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = 32U;
	uint32_t x356 = 9653U;

	t69 = (((x353+x354)/x355)+x356);

	if (t69 != 9652U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = 1;
	uint32_t x360 = 90615416U;
	volatile uint32_t t70 = 78367U;

	t70 = (((x357+x358)/x359)+x360);

	if (t70 != 90615288U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x361 = INT8_MIN;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	static int32_t t71 = -721119665;

	t71 = (((x361+x362)/x363)+x364);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = -1;
	uint16_t x366 = 8848U;
	volatile int8_t x367 = INT8_MIN;
	static uint32_t x368 = 123294U;
	uint32_t t72 = 11010U;

	t72 = (((x365+x366)/x367)+x368);

	if (t72 != 123225U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x373 = UINT16_MAX;
	volatile int16_t x375 = INT16_MIN;

	t73 = (((x373+x374)/x375)+x376);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x377 = INT16_MIN;
	static volatile uint8_t x378 = UINT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	uint32_t x380 = 35283839U;
	static volatile uint32_t t74 = 53U;

	t74 = (((x377+x378)/x379)+x380);

	if (t74 != 35284093U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x381 = 31013318U;
	volatile uint16_t x382 = 29U;
	int64_t x383 = INT64_MIN;
	volatile int64_t t75 = -6LL;

	t75 = (((x381+x382)/x383)+x384);

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x387 = -883340012835676949LL;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int64_t t76 = -29217331069579333LL;

	t76 = (((x385+x386)/x387)+x388);

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = UINT64_MAX;
	static int8_t x391 = INT8_MAX;
	volatile int64_t x392 = INT64_MIN;
	uint64_t t77 = 986558496947953020LLU;

	t77 = (((x389+x390)/x391)+x392);

	if (t77 != 9223372036854775994LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = UINT32_MAX;
	uint16_t x395 = 71U;
	int8_t x396 = -1;
	volatile uint32_t t78 = 96U;

	t78 = (((x393+x394)/x395)+x396);

	if (t78 != 922U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x397 = INT8_MIN;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = 7100511542040417LLU;
	static uint64_t t79 = 7233299273529111375LLU;

	t79 = (((x397+x398)/x399)+x400);

	if (t79 != 7100511542040417LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = 0U;

	t80 = (((x401+x402)/x403)+x404);

	if (t80 != 72057594037927424LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x405 = 721LLU;
	static int32_t x406 = INT32_MAX;
	volatile int32_t x407 = -1;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x405+x406)/x407)+x408);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x409 = 4U;
	int8_t x410 = 11;
	int8_t x411 = INT8_MIN;
	int64_t t82 = INT64_MIN;

	t82 = (((x409+x410)/x411)+x412);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x413 = 14U;
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 2U;
	int16_t x416 = -1;
	volatile int32_t t83 = -2047;

	t83 = (((x413+x414)/x415)+x416);

	if (t83 != 32773) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x418 = 31;
	static volatile int32_t x419 = INT32_MIN;
	uint16_t x420 = 491U;
	static int64_t t84 = 34051LL;

	t84 = (((x417+x418)/x419)+x420);

	if (t84 != 4294967786LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = 160736493;
	uint32_t x423 = UINT32_MAX;
	static int64_t x424 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (((x421+x422)/x423)+x424);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = 77747702U;
	volatile int8_t x427 = INT8_MIN;
	volatile uint64_t t86 = 25957994986430LLU;

	t86 = (((x425+x426)/x427)+x428);

	if (t86 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x434 = 11U;
	int8_t x435 = -1;
	int16_t x436 = INT16_MAX;
	volatile int32_t t87 = -125502437;

	t87 = (((x433+x434)/x435)+x436);

	if (t87 != 65524) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x441 = INT32_MIN;
	static volatile uint64_t x442 = 18188111LLU;
	volatile int64_t x443 = INT64_MIN;
	static uint64_t x444 = UINT64_MAX;
	uint64_t t88 = 35962LLU;

	t88 = (((x441+x442)/x443)+x444);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x445 = UINT32_MAX;
	uint8_t x446 = 68U;
	int64_t x447 = INT64_MIN;
	volatile int32_t x448 = 172635214;
	static volatile int64_t t89 = 551452940947111LL;

	t89 = (((x445+x446)/x447)+x448);

	if (t89 != 172635214LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x449 = INT16_MIN;
	int64_t x451 = -1LL;

	t90 = (((x449+x450)/x451)+x452);

	if (t90 != 32702LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x453 = 28U;
	uint16_t x454 = 41U;
	int64_t x455 = -1LL;
	volatile int64_t t91 = 6237187674239LL;

	t91 = (((x453+x454)/x455)+x456);

	if (t91 != -32837LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x458 = 36;
	int8_t x459 = INT8_MIN;
	volatile int32_t t92 = 57441;

	t92 = (((x457+x458)/x459)+x460);

	if (t92 != -201515) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x465 = 20473U;
	static int16_t x466 = -1;
	int16_t x467 = INT16_MAX;
	uint16_t x468 = 8120U;
	int32_t t93 = 111;

	t93 = (((x465+x466)/x467)+x468);

	if (t93 != 8120) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x469 = -1LL;
	uint32_t x471 = 48U;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t94 = 203946048580LLU;

	t94 = (((x469+x470)/x471)+x472);

	if (t94 != 384307168202249557LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x475 = INT8_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t95 = 1425;

	t95 = (((x473+x474)/x475)+x476);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x477 = INT8_MIN;
	static volatile uint64_t x478 = 606905LLU;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = UINT8_MAX;
	uint64_t t96 = 23212LLU;

	t96 = (((x477+x478)/x479)+x480);

	if (t96 != 255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x481 = 1388U;
	uint16_t x482 = 66U;
	static int16_t x483 = -1;
	int8_t x484 = -1;
	static volatile int32_t t97 = -2;

	t97 = (((x481+x482)/x483)+x484);

	if (t97 != -1455) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MIN;
	int8_t x487 = -15;
	static volatile int32_t t98 = 29174;

	t98 = (((x485+x486)/x487)+x488);

	if (t98 != 143165542) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x493 = 7U;
	int8_t x494 = 0;
	uint8_t x496 = 16U;
	volatile int32_t t99 = -45957;

	t99 = (((x493+x494)/x495)+x496);

	if (t99 != 16) { NG(); } else { ; }
	
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


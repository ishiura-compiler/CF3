#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
volatile int32_t t2 = 3946847;
int32_t t3 = -56334;
int8_t x18 = INT8_MIN;
int64_t x20 = 518810202399657257LL;
int64_t x24 = 441451056513052LL;
int64_t x25 = 237864459909LL;
static volatile int32_t x32 = INT32_MAX;
volatile int32_t t7 = 25033;
static int32_t x33 = -1;
volatile int32_t t8 = -176466;
uint16_t x40 = 445U;
volatile int32_t t9 = 14645235;
uint8_t x44 = 1U;
int64_t x47 = 1238751532LL;
int32_t x53 = -1;
int8_t x65 = -1;
int32_t t16 = -335845439;
volatile int32_t t17 = 0;
static uint8_t x73 = 5U;
uint16_t x86 = 1U;
int32_t t20 = -3;
static volatile int16_t x90 = -1;
static uint16_t x91 = 147U;
uint8_t x92 = 79U;
static int8_t x94 = -1;
uint8_t x108 = UINT8_MAX;
uint64_t x119 = 40LLU;
int8_t x120 = INT8_MIN;
int32_t t26 = -123;
uint32_t x124 = 60073377U;
int32_t x130 = INT32_MIN;
int32_t x139 = -47;
static int32_t x141 = -1;
static volatile int64_t x144 = INT64_MAX;
static volatile uint8_t x146 = 103U;
volatile int16_t x153 = INT16_MIN;
int16_t x168 = 16;
int32_t t36 = -1061316;
static volatile uint16_t x177 = 114U;
volatile uint64_t x181 = UINT64_MAX;
int8_t x190 = 1;
int64_t x197 = INT64_MIN;
int16_t x202 = INT16_MIN;
volatile int32_t t42 = -247;
static volatile uint32_t x225 = UINT32_MAX;
volatile int8_t x227 = INT8_MIN;
volatile int32_t t47 = 594546;
int32_t t48 = 8366044;
int16_t x245 = INT16_MAX;
int32_t t53 = -144787025;
uint64_t x266 = UINT64_MAX;
static volatile uint16_t x268 = 221U;
int32_t t56 = 561971671;
uint8_t x275 = 26U;
static uint64_t x279 = 180944739292950780LLU;
static int32_t t59 = 38020;
int8_t x289 = -1;
uint64_t x292 = 3540024LLU;
volatile int32_t t62 = 400044;
volatile int32_t t67 = 555224448;
volatile int8_t x313 = 2;
int8_t x315 = 2;
static uint16_t x316 = UINT16_MAX;
uint32_t x320 = 107580U;
uint16_t x324 = UINT16_MAX;
int8_t x325 = 0;
static int32_t x328 = INT32_MIN;
volatile int32_t t71 = 0;
uint16_t x336 = UINT16_MAX;
volatile int8_t x340 = INT8_MIN;
int32_t t74 = 14;
static volatile int32_t t75 = 218;
int32_t x349 = INT32_MIN;
static int64_t x350 = 4363171628019LL;
uint16_t x351 = UINT16_MAX;
int8_t x358 = -1;
static volatile int32_t t78 = -16028803;
static int8_t x362 = INT8_MAX;
uint8_t x365 = UINT8_MAX;
volatile int16_t x366 = INT16_MIN;
uint64_t x369 = UINT64_MAX;
static int8_t x372 = -1;
int32_t x376 = INT32_MIN;
static int8_t x379 = -1;
volatile uint64_t x386 = UINT64_MAX;
int16_t x394 = INT16_MIN;
volatile uint16_t x410 = UINT16_MAX;
uint16_t x413 = 77U;
static int16_t x414 = -213;
static uint16_t x417 = 71U;
uint32_t x421 = 73493192U;
int8_t x425 = -1;
int32_t t94 = 12165708;
int32_t x437 = INT32_MIN;
int64_t x440 = -50910488907397906LL;
int32_t t97 = 231280175;
int16_t x443 = INT16_MAX;
int32_t t98 = 6498742;


void f0(void) {
	volatile uint32_t x1 = 4154664U;
	int8_t x2 = INT8_MIN;
	int32_t x3 = 23;
	int16_t x4 = -1;
	static volatile int32_t t0 = -399528;

	t0 = (((x1+x2)/x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	uint32_t x7 = 1438U;
	static int64_t x8 = -150671277015LL;
	int32_t t1 = 7968271;

	t1 = (((x5+x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	static volatile uint8_t x12 = 16U;

	t2 = (((x9+x10)/x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile uint8_t x14 = 16U;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;

	t3 = (((x13+x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 414495778U;
	static uint64_t x19 = 64888099398593LLU;
	volatile int32_t t4 = -19;

	t4 = (((x17+x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static uint16_t x22 = 0U;
	uint16_t x23 = UINT16_MAX;
	int32_t t5 = -119;

	t5 = (((x21+x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int16_t x27 = 934;
	int8_t x28 = -1;
	volatile int32_t t6 = 15987;

	t6 = (((x25+x26)/x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int64_t x30 = 1969336LL;
	uint8_t x31 = UINT8_MAX;

	t7 = (((x29+x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	static uint64_t x35 = 795326527754LLU;
	int64_t x36 = -1LL;

	t8 = (((x33+x34)/x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MAX;
	int64_t x38 = -1LL;
	static int64_t x39 = 80878184108LL;

	t9 = (((x37+x38)/x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = -20;
	int32_t x43 = -122;
	static int32_t t10 = -1;

	t10 = (((x41+x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 42;
	int8_t x46 = INT8_MIN;
	int64_t x48 = 26606580LL;
	volatile int32_t t11 = 689;

	t11 = (((x45+x46)/x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 25;
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 3154637176639LLU;
	static int32_t t12 = 64141;

	t12 = (((x49+x50)/x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 747365539LL;
	volatile uint64_t x55 = 9209989LLU;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 167;

	t13 = (((x53+x54)/x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 296U;
	int32_t x58 = 2628227;
	int32_t x59 = -1;
	int16_t x60 = -12001;
	volatile int32_t t14 = 0;

	t14 = (((x57+x58)/x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	static volatile uint64_t x62 = UINT64_MAX;
	static volatile uint32_t x63 = UINT32_MAX;
	static int64_t x64 = -239094LL;
	int32_t t15 = 24804866;

	t15 = (((x61+x62)/x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 1U;
	int8_t x68 = 24;

	t16 = (((x65+x66)/x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -7799781335881825LL;
	static uint32_t x70 = UINT32_MAX;
	volatile uint64_t x71 = 5336LLU;
	static uint64_t x72 = 2743166LLU;

	t17 = (((x69+x70)/x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 0U;
	volatile int64_t x75 = INT64_MIN;
	volatile int64_t x76 = INT64_MAX;
	int32_t t18 = 84104;

	t18 = (((x73+x74)/x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 504702240464997808LL;
	int8_t x82 = -1;
	int16_t x83 = 1;
	uint32_t x84 = 503U;
	volatile int32_t t19 = -2629;

	t19 = (((x81+x82)/x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 384378594867181163LLU;
	uint64_t x87 = 685390142LLU;
	int64_t x88 = INT64_MAX;

	t20 = (((x85+x86)/x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -820023559LL;
	volatile int32_t t21 = 889;

	t21 = (((x89+x90)/x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 4U;
	volatile int32_t t22 = 121086;

	t22 = (((x93+x94)/x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = 23U;
	int16_t x103 = INT16_MIN;
	int16_t x104 = 1;
	int32_t t23 = 516;

	t23 = (((x101+x102)/x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	static int64_t x106 = INT64_MAX;
	uint8_t x107 = UINT8_MAX;
	int32_t t24 = -1;

	t24 = (((x105+x106)/x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	static int16_t x114 = INT16_MIN;
	static volatile int16_t x115 = INT16_MIN;
	volatile uint32_t x116 = 1557U;
	int32_t t25 = 1408224;

	t25 = (((x113+x114)/x115)<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	uint8_t x118 = 34U;

	t26 = (((x117+x118)/x119)<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	volatile int32_t t27 = -1;

	t27 = (((x121+x122)/x123)<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	volatile int8_t x126 = INT8_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	static int16_t x128 = -1;
	volatile int32_t t28 = 50066;

	t28 = (((x125+x126)/x127)<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = UINT32_MAX;
	static int64_t x131 = -1LL;
	volatile uint16_t x132 = UINT16_MAX;
	int32_t t29 = -64846;

	t29 = (((x129+x130)/x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1LL;
	uint8_t x134 = 28U;
	static int64_t x135 = INT64_MIN;
	int8_t x136 = -1;
	int32_t t30 = -19058228;

	t30 = (((x133+x134)/x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	static int8_t x138 = INT8_MIN;
	static int16_t x140 = -1;
	volatile int32_t t31 = 13147570;

	t31 = (((x137+x138)/x139)<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = 10472079019LLU;
	int32_t x143 = -748;
	volatile int32_t t32 = 421906376;

	t32 = (((x141+x142)/x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = -1991;
	volatile int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t33 = 12370138;

	t33 = (((x145+x146)/x147)<x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MIN;
	static int32_t x156 = -1;
	int32_t t34 = -98100164;

	t34 = (((x153+x154)/x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = 7073935533989438LLU;
	static volatile int32_t t35 = 117510;

	t35 = (((x165+x166)/x167)<x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	uint64_t x170 = 1LLU;
	int32_t x171 = INT32_MAX;
	volatile int16_t x172 = INT16_MAX;

	t36 = (((x169+x170)/x171)<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MIN;
	uint32_t x174 = 3243U;
	static uint16_t x175 = 58U;
	int16_t x176 = -1;
	int32_t t37 = 51;

	t37 = (((x173+x174)/x175)<x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x178 = -1;
	uint32_t x179 = 442277U;
	int16_t x180 = -2;
	volatile int32_t t38 = -252002;

	t38 = (((x177+x178)/x179)<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x182 = 12129U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = 100349551918146LL;
	volatile int32_t t39 = 922112429;

	t39 = (((x181+x182)/x183)<x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x189 = -1;
	static int32_t x191 = -1;
	static volatile int32_t x192 = INT32_MIN;
	static int32_t t40 = -118239;

	t40 = (((x189+x190)/x191)<x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x198 = 1702;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -4;
	int32_t t41 = 21546;

	t41 = (((x197+x198)/x199)<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 395LLU;
	volatile int64_t x203 = -16LL;
	int64_t x204 = 14796545222972158LL;

	t42 = (((x201+x202)/x203)<x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = -1;
	volatile int32_t x206 = -19613955;
	uint16_t x207 = UINT16_MAX;
	uint32_t x208 = 1061U;
	int32_t t43 = -719;

	t43 = (((x205+x206)/x207)<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	static volatile uint32_t x215 = 2038U;
	int64_t x216 = -3348764938378666291LL;
	int32_t t44 = 468;

	t44 = (((x213+x214)/x215)<x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x221 = 497408117U;
	static int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;
	int32_t t45 = -2;

	t45 = (((x221+x222)/x223)<x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x226 = 83U;
	int32_t x228 = 132299;
	static volatile int32_t t46 = -32333;

	t46 = (((x225+x226)/x227)<x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = INT16_MIN;
	static uint32_t x230 = 75577U;
	uint16_t x231 = UINT16_MAX;
	static int64_t x232 = INT64_MIN;

	t47 = (((x229+x230)/x231)<x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = 2;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	static volatile int32_t x236 = -1;

	t48 = (((x233+x234)/x235)<x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = -7;
	uint32_t x238 = UINT32_MAX;
	volatile int16_t x239 = -15018;
	int8_t x240 = INT8_MIN;
	volatile int32_t t49 = -560686871;

	t49 = (((x237+x238)/x239)<x240);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x241 = 6;
	volatile int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MAX;
	int16_t x244 = 1;
	volatile int32_t t50 = 3211;

	t50 = (((x241+x242)/x243)<x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x246 = 1;
	volatile int16_t x247 = INT16_MAX;
	static int16_t x248 = INT16_MAX;
	static int32_t t51 = 826;

	t51 = (((x245+x246)/x247)<x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MIN;
	static uint64_t x250 = UINT64_MAX;
	uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 1566287U;
	int32_t t52 = -1;

	t52 = (((x249+x250)/x251)<x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	int32_t x256 = -14877959;

	t53 = (((x253+x254)/x255)<x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = 26;
	uint16_t x258 = 21U;
	uint64_t x259 = 44468248LLU;
	uint64_t x260 = UINT64_MAX;
	int32_t t54 = 66501491;

	t54 = (((x257+x258)/x259)<x260);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = 1LLU;
	uint64_t x262 = 19075LLU;
	volatile uint32_t x263 = 15949U;
	volatile int64_t x264 = INT64_MAX;
	static volatile int32_t t55 = -2960146;

	t55 = (((x261+x262)/x263)<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int32_t x267 = INT32_MAX;

	t56 = (((x265+x266)/x267)<x268);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = 178866426;
	int64_t x270 = -1LL;
	uint8_t x271 = 55U;
	volatile uint64_t x272 = 330562753466458028LLU;
	static volatile int32_t t57 = 440;

	t57 = (((x269+x270)/x271)<x272);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x273 = -1;
	uint64_t x274 = 74671700531709741LLU;
	int8_t x276 = -1;
	static int32_t t58 = 89561696;

	t58 = (((x273+x274)/x275)<x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x277 = -259408567LL;
	uint32_t x278 = UINT32_MAX;
	int8_t x280 = INT8_MIN;

	t59 = (((x277+x278)/x279)<x280);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 514915627;
	static int16_t x282 = INT16_MIN;
	int8_t x283 = -2;
	int32_t x284 = -1;
	int32_t t60 = -1;

	t60 = (((x281+x282)/x283)<x284);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x285 = 57685985LLU;
	uint32_t x286 = 115225502U;
	volatile uint32_t x287 = 6142U;
	volatile int64_t x288 = -255847719LL;
	int32_t t61 = -32097905;

	t61 = (((x285+x286)/x287)<x288);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MAX;

	t62 = (((x289+x290)/x291)<x292);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = -1;
	volatile uint8_t x295 = 2U;
	int8_t x296 = -1;
	volatile int32_t t63 = 19475;

	t63 = (((x293+x294)/x295)<x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = UINT16_MAX;
	static int64_t x298 = 6263LL;
	int8_t x299 = -5;
	static uint32_t x300 = 349935747U;
	volatile int32_t t64 = -225;

	t64 = (((x297+x298)/x299)<x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = -60;
	int8_t x302 = INT8_MAX;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MAX;
	volatile int32_t t65 = -6;

	t65 = (((x301+x302)/x303)<x304);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = 1;
	int16_t x306 = -27;
	uint16_t x307 = 106U;
	static uint8_t x308 = 29U;
	static int32_t t66 = 255428;

	t66 = (((x305+x306)/x307)<x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x309 = 423LLU;
	volatile uint32_t x310 = 3259743U;
	static volatile int64_t x311 = -1783765131801631LL;
	static int8_t x312 = 0;

	t67 = (((x309+x310)/x311)<x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x314 = UINT8_MAX;
	static volatile int32_t t68 = -655530;

	t68 = (((x313+x314)/x315)<x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 1U;
	volatile int16_t x319 = INT16_MIN;
	volatile int32_t t69 = -74419;

	t69 = (((x317+x318)/x319)<x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = 169890LLU;
	static int32_t x322 = INT32_MIN;
	static uint32_t x323 = 15385U;
	volatile int32_t t70 = -137506175;

	t70 = (((x321+x322)/x323)<x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x326 = 1U;
	int16_t x327 = INT16_MIN;

	t71 = (((x325+x326)/x327)<x328);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = INT64_MAX;
	static int8_t x330 = INT8_MIN;
	uint16_t x331 = 5U;
	static volatile int32_t x332 = -1;
	int32_t t72 = 1;

	t72 = (((x329+x330)/x331)<x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x333 = 0U;
	int16_t x334 = INT16_MAX;
	int16_t x335 = -1;
	int32_t t73 = 161471;

	t73 = (((x333+x334)/x335)<x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = -3;
	uint32_t x338 = 1U;
	volatile uint32_t x339 = 891957U;

	t74 = (((x337+x338)/x339)<x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x341 = 109U;
	volatile int16_t x342 = INT16_MAX;
	static uint8_t x343 = 79U;
	int16_t x344 = INT16_MIN;

	t75 = (((x341+x342)/x343)<x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x352 = 10;
	volatile int32_t t76 = 1217815;

	t76 = (((x349+x350)/x351)<x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = -1;
	static int16_t x354 = -1;
	int8_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t77 = 465;

	t77 = (((x353+x354)/x355)<x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x357 = 4973U;
	int8_t x359 = -18;
	int8_t x360 = -1;

	t78 = (((x357+x358)/x359)<x360);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MIN;
	volatile int64_t x363 = INT64_MAX;
	int32_t x364 = 27165;
	int32_t t79 = -181;

	t79 = (((x361+x362)/x363)<x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x367 = -1;
	volatile int64_t x368 = INT64_MIN;
	static volatile int32_t t80 = -16333157;

	t80 = (((x365+x366)/x367)<x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x370 = UINT64_MAX;
	volatile int32_t x371 = 387107144;
	int32_t t81 = -7;

	t81 = (((x369+x370)/x371)<x372);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 31LL;
	int32_t t82 = -180;

	t82 = (((x373+x374)/x375)<x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 7922695488LLU;
	int8_t x378 = -1;
	int32_t x380 = -34301604;
	static int32_t t83 = -3769;

	t83 = (((x377+x378)/x379)<x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x381 = -1;
	uint16_t x382 = 30355U;
	int32_t x383 = 94697;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t84 = -12514;

	t84 = (((x381+x382)/x383)<x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -1;
	volatile int32_t x387 = INT32_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t85 = 9445;

	t85 = (((x385+x386)/x387)<x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 1253U;
	int64_t x390 = -1206769574504545087LL;
	int16_t x391 = INT16_MAX;
	int16_t x392 = -1;
	int32_t t86 = -275425;

	t86 = (((x389+x390)/x391)<x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x393 = UINT16_MAX;
	volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = 3786405LLU;
	volatile int32_t t87 = 151;

	t87 = (((x393+x394)/x395)<x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = 12831U;
	int32_t x399 = -21;
	static int8_t x400 = INT8_MIN;
	int32_t t88 = 8885;

	t88 = (((x397+x398)/x399)<x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = -1LL;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t89 = 655825817;

	t89 = (((x401+x402)/x403)<x404);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x409 = -191177505LL;
	static int8_t x411 = -1;
	volatile uint64_t x412 = UINT64_MAX;
	static volatile int32_t t90 = 4145;

	t90 = (((x409+x410)/x411)<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x415 = INT32_MIN;
	static volatile int64_t x416 = INT64_MIN;
	int32_t t91 = -15175834;

	t91 = (((x413+x414)/x415)<x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x418 = 0;
	int16_t x419 = INT16_MIN;
	int32_t x420 = 322;
	int32_t t92 = -1;

	t92 = (((x417+x418)/x419)<x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x422 = 3U;
	int8_t x423 = -1;
	static int32_t x424 = -1;
	int32_t t93 = 2;

	t93 = (((x421+x422)/x423)<x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x426 = 7U;
	static int32_t x427 = INT32_MIN;
	uint64_t x428 = 19818176945486157LLU;

	t94 = (((x425+x426)/x427)<x428);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x429 = -1;
	int16_t x430 = INT16_MAX;
	uint16_t x431 = 97U;
	volatile uint8_t x432 = UINT8_MAX;
	volatile int32_t t95 = 11234;

	t95 = (((x429+x430)/x431)<x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x433 = 363U;
	static int8_t x434 = INT8_MIN;
	static volatile uint64_t x435 = 74803147139508LLU;
	int64_t x436 = INT64_MIN;
	int32_t t96 = 469651;

	t96 = (((x433+x434)/x435)<x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x438 = INT32_MAX;
	static int32_t x439 = -72911;

	t97 = (((x437+x438)/x439)<x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = UINT32_MAX;
	uint64_t x444 = UINT64_MAX;

	t98 = (((x441+x442)/x443)<x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MIN;
	volatile int8_t x446 = 1;
	uint8_t x447 = 2U;
	volatile int64_t x448 = -1LL;
	int32_t t99 = 160789;

	t99 = (((x445+x446)/x447)<x448);

	if (t99 != 1) { NG(); } else { ; }
	
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


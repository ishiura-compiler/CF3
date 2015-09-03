#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -3642027319111LL;
uint64_t x6 = UINT64_MAX;
volatile int64_t x12 = -252080267712452684LL;
uint64_t x15 = UINT64_MAX;
int16_t x16 = -1198;
int64_t x17 = 14094659193760419LL;
volatile int8_t x18 = -1;
int8_t x19 = 1;
int64_t x20 = INT64_MIN;
int8_t x30 = INT8_MAX;
uint8_t x35 = UINT8_MAX;
static volatile int8_t x39 = -1;
uint32_t x40 = UINT32_MAX;
int64_t x45 = 20611LL;
uint32_t x49 = UINT32_MAX;
volatile uint32_t x50 = 1111570118U;
static int8_t x59 = INT8_MIN;
uint64_t t13 = 130977LLU;
int16_t x64 = -1;
static volatile int64_t t15 = 481LL;
static int64_t x74 = 78491141LL;
static int32_t x77 = INT32_MIN;
int8_t x82 = -1;
static int16_t x84 = 1;
uint32_t t19 = 133689192U;
int16_t x85 = -607;
uint64_t t20 = 202846LLU;
int64_t x117 = INT64_MIN;
int16_t x118 = INT16_MIN;
volatile uint32_t x119 = 135U;
int32_t x120 = 1;
volatile int64_t t25 = 893788680LL;
int32_t x128 = 176008642;
static int32_t x134 = 11676406;
uint64_t t28 = 63LLU;
uint64_t t29 = 107169302951971816LLU;
uint8_t x141 = UINT8_MAX;
uint64_t x154 = 157268113459LLU;
volatile uint64_t t34 = 6697143036389186LLU;
uint32_t x179 = 98U;
static int32_t x180 = -6;
int8_t x184 = INT8_MAX;
static int32_t t39 = -1007003157;
static int8_t x194 = INT8_MIN;
int64_t x198 = INT64_MIN;
int16_t x199 = 15866;
int32_t x203 = INT32_MIN;
int8_t x205 = -53;
int32_t x206 = -21;
static volatile int32_t t43 = -26165799;
volatile uint64_t x212 = UINT64_MAX;
uint16_t x214 = 5305U;
uint64_t x220 = UINT64_MAX;
static int8_t x225 = 26;
static int8_t x240 = -1;
int32_t t50 = -31;
static int32_t x245 = INT32_MAX;
int64_t x248 = -1020975972664LL;
volatile uint32_t t52 = 15575U;
int16_t x263 = 127;
volatile uint16_t x271 = UINT16_MAX;
volatile uint64_t t56 = 4750097311120684LLU;
int64_t x274 = INT64_MIN;
static uint32_t x275 = 1U;
int32_t x278 = INT32_MAX;
static int32_t x280 = INT32_MIN;
uint32_t t58 = 64U;
int8_t x284 = INT8_MIN;
volatile int16_t x287 = 12;
int8_t x294 = INT8_MAX;
static int64_t x295 = INT64_MAX;
static int64_t x302 = INT64_MIN;
int8_t x303 = -1;
volatile int64_t x306 = INT64_MIN;
static int32_t x311 = -627;
uint64_t x317 = 40LLU;
volatile uint64_t t66 = 365LLU;
static volatile uint8_t x334 = 3U;
volatile int64_t x342 = INT64_MAX;
volatile uint64_t t71 = 5562641017779LLU;
int32_t x345 = -30068;
static uint16_t x368 = 58U;
int64_t t77 = -4619306433287226LL;
int64_t x373 = INT64_MAX;
int8_t x376 = INT8_MAX;
int32_t x377 = INT32_MIN;
int16_t x378 = INT16_MAX;
static uint16_t x380 = UINT16_MAX;
volatile int64_t x386 = -4056474LL;
static uint8_t x394 = 5U;
static volatile uint64_t t85 = 50318987LLU;
uint32_t x407 = 39233U;
int8_t x414 = -1;
static volatile int16_t x422 = -1;
volatile uint64_t t93 = 91LLU;
uint32_t x450 = UINT32_MAX;
volatile int8_t x461 = INT8_MIN;
volatile int8_t x469 = INT8_MIN;
int32_t x471 = 44;
int64_t x474 = -1LL;
int32_t x478 = -1;
static uint64_t x479 = 8319930528LLU;
int32_t x480 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = -1342678LL;
	int32_t x3 = -1;
	uint32_t x4 = 3U;

	t0 = (((x1%x2)|x3)*x4);

	if (t0 != -3LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 2162LLU;

	t1 = (((x5%x6)|x7)*x8);

	if (t1 != 1073741824LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int32_t x10 = 14820650;
	static int8_t x11 = 1;
	static int64_t t2 = -214174705788851LL;

	t2 = (((x9%x10)|x11)*x12);

	if (t2 != 252080267712452684LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 106U;
	uint32_t x14 = 3041249U;
	uint64_t t3 = 22LLU;

	t3 = (((x13%x14)|x15)*x16);

	if (t3 != 1198LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t t4 = INT64_MIN;

	t4 = (((x17%x18)|x19)*x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	static int32_t x26 = -12894748;
	int8_t x27 = -6;
	int32_t x28 = INT32_MAX;
	volatile int32_t t5 = 0;

	t5 = (((x25%x26)|x27)*x28);

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = -94433;

	t6 = (((x29%x30)|x31)*x32);

	if (t6 != -65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	static int64_t x34 = -13875154998003365LL;
	uint16_t x36 = 6961U;
	int64_t t7 = -4919872287935LL;

	t7 = (((x33%x34)|x35)*x36);

	if (t7 != 1775055LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MAX;
	static uint64_t x38 = UINT64_MAX;
	volatile uint64_t t8 = 1435711886148716545LLU;

	t8 = (((x37%x38)|x39)*x40);

	if (t8 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	static uint8_t x43 = UINT8_MAX;
	int8_t x44 = -1;
	int32_t t9 = 599;

	t9 = (((x41%x42)|x43)*x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	static volatile int16_t x47 = INT16_MIN;
	static uint64_t x48 = 4095379880344LLU;
	volatile uint64_t t10 = 13LLU;

	t10 = (((x45%x46)|x47)*x48);

	if (t10 != 18312558951930080456LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x51 = 286LLU;
	volatile int32_t x52 = INT32_MIN;
	uint64_t t11 = 1303872LLU;

	t11 = (((x49%x50)|x51)*x52);

	if (t11 != 16384607956378845184LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 0U;
	uint8_t x54 = 27U;
	int32_t x55 = -226;
	int64_t x56 = -1174300086LL;
	int64_t t12 = 1106639LL;

	t12 = (((x53%x54)|x55)*x56);

	if (t12 != 265391819436LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 13955U;
	int64_t x58 = INT64_MAX;
	uint64_t x60 = 5449452182463LLU;

	t13 = (((x57%x58)|x59)*x60);

	if (t13 != 18446062892186743741LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static uint8_t x62 = 83U;
	uint32_t x63 = UINT32_MAX;
	uint32_t t14 = 42841564U;

	t14 = (((x61%x62)|x63)*x64);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MIN;
	int32_t x67 = -59105;
	uint32_t x68 = 3U;

	t15 = (((x65%x66)|x67)*x68);

	if (t15 != -3LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MAX;
	int16_t x71 = -981;
	int16_t x72 = 0;
	volatile int32_t t16 = -6;

	t16 = (((x69%x70)|x71)*x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -10636;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile uint64_t t17 = 48LLU;

	t17 = (((x73%x74)|x75)*x76);

	if (t17 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x78 = 3U;
	uint8_t x79 = UINT8_MAX;
	uint16_t x80 = 32689U;
	volatile int32_t t18 = -23210710;

	t18 = (((x77%x78)|x79)*x80);

	if (t18 != -32689) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 0U;
	volatile int8_t x83 = INT8_MAX;

	t19 = (((x81%x82)|x83)*x84);

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = 58628542577776079LLU;

	t20 = (((x85%x86)|x87)*x88);

	if (t20 != 18388115531131775537LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1708734291715806637LL;
	int64_t x90 = -36454180944915LL;
	static volatile int16_t x91 = INT16_MAX;
	volatile uint32_t x92 = 7U;
	int64_t t21 = 16227991132335365LL;

	t21 = (((x89%x90)|x91)*x92);

	if (t21 != -122277993578503LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = 1;
	static int16_t x95 = -1;
	volatile int32_t x96 = INT32_MAX;
	int32_t t22 = -505;

	t22 = (((x93%x94)|x95)*x96);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x109 = INT64_MIN;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = UINT16_MAX;
	static volatile int64_t t23 = 821LL;

	t23 = (((x109%x110)|x111)*x112);

	if (t23 != -8388480LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile uint16_t x116 = 10U;
	uint64_t t24 = 185967LLU;

	t24 = (((x113%x114)|x115)*x116);

	if (t24 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f25(void) {


	t25 = (((x117%x118)|x119)*x120);

	if (t25 != 135LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 383298062LL;
	uint8_t x126 = 13U;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t26 = 1411LLU;

	t26 = (((x125%x126)|x127)*x128);

	if (t26 != 18446744073533542974LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = INT32_MIN;
	volatile uint8_t x130 = 26U;
	int8_t x131 = INT8_MIN;
	static int32_t x132 = -1;
	int32_t t27 = 905898;

	t27 = (((x129%x130)|x131)*x132);

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x133 = 1380446LLU;
	static uint16_t x135 = 0U;
	static int64_t x136 = -1LL;

	t28 = (((x133%x134)|x135)*x136);

	if (t28 != 18446744073708171170LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 1525LLU;
	uint32_t x139 = 1282141169U;
	volatile uint8_t x140 = 2U;

	t29 = (((x137%x138)|x139)*x140);

	if (t29 != 2564282342LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x142 = 4263;
	volatile int64_t x143 = 19160LL;
	int64_t x144 = -1LL;
	static volatile int64_t t30 = 0LL;

	t30 = (((x141%x142)|x143)*x144);

	if (t30 != -19199LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 6309864U;
	uint32_t x150 = 2527501U;
	static int32_t x151 = -1;
	static volatile uint32_t x152 = UINT32_MAX;
	volatile uint32_t t31 = 0U;

	t31 = (((x149%x150)|x151)*x152);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x155 = 10082U;
	uint8_t x156 = 59U;
	uint64_t t32 = 2695338582502LLU;

	t32 = (((x153%x154)|x155)*x156);

	if (t32 != 1933253LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 13772U;
	volatile int64_t x163 = 237261673127084LL;
	uint64_t x164 = 981785545LLU;
	static volatile uint64_t t33 = 115771648350680366LLU;

	t33 = (((x161%x162)|x163)*x164);

	if (t33 != 13043640788065087708LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x165 = 0U;
	uint64_t x166 = 1108408378264639LLU;
	uint8_t x167 = UINT8_MAX;
	volatile int64_t x168 = -1LL;

	t34 = (((x165%x166)|x167)*x168);

	if (t34 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	static int32_t t35 = 126372;

	t35 = (((x169%x170)|x171)*x172);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -1LL;
	volatile int8_t x174 = INT8_MAX;
	volatile int8_t x175 = INT8_MAX;
	int16_t x176 = INT16_MAX;
	volatile int64_t t36 = 3228094520997LL;

	t36 = (((x173%x174)|x175)*x176);

	if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = INT8_MIN;
	volatile uint32_t t37 = 55423U;

	t37 = (((x177%x178)|x179)*x180);

	if (t37 != 6U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = UINT64_MAX;
	uint64_t t38 = 206517376LLU;

	t38 = (((x181%x182)|x183)*x184);

	if (t38 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x185 = INT16_MIN;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int8_t x188 = -1;

	t39 = (((x185%x186)|x187)*x188);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x195 = -1;
	int8_t x196 = -1;
	volatile int32_t t40 = 2;

	t40 = (((x193%x194)|x195)*x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = -1LL;
	uint16_t x200 = UINT16_MAX;
	volatile int64_t t41 = -35LL;

	t41 = (((x197%x198)|x199)*x200);

	if (t41 != -65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = 29522142;
	static int8_t x202 = -48;
	volatile uint64_t x204 = 36091832659258LLU;
	volatile uint64_t t42 = 3162LLU;

	t42 = (((x201%x202)|x203)*x204);

	if (t42 != 6599218373604854988LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x207 = UINT8_MAX;
	volatile int32_t x208 = -254296;

	t43 = (((x205%x206)|x207)*x208);

	if (t43 != 254296) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = INT16_MIN;
	int64_t x210 = 517891167189867LL;
	int32_t x211 = -10685481;
	volatile uint64_t t44 = 111LLU;

	t44 = (((x209%x210)|x211)*x212);

	if (t44 != 3113LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MIN;
	volatile uint16_t x215 = 73U;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t45 = 359U;

	t45 = (((x213%x214)|x215)*x216);

	if (t45 != 929U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MAX;
	int64_t x218 = -1LL;
	uint32_t x219 = UINT32_MAX;
	static uint64_t t46 = 7926783LLU;

	t46 = (((x217%x218)|x219)*x220);

	if (t46 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x226 = INT16_MIN;
	volatile int16_t x227 = -1;
	int64_t x228 = -4112847513510LL;
	int64_t t47 = -1989375LL;

	t47 = (((x225%x226)|x227)*x228);

	if (t47 != 4112847513510LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x229 = 524219U;
	int8_t x230 = -1;
	static int32_t x231 = INT32_MAX;
	volatile int16_t x232 = -1;
	volatile uint32_t t48 = 2760U;

	t48 = (((x229%x230)|x231)*x232);

	if (t48 != 2147483649U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = -59LL;
	uint64_t x238 = 855251LLU;
	volatile uint32_t x239 = 898922514U;
	uint64_t t49 = 39541LLU;

	t49 = (((x237%x238)|x239)*x240);

	if (t49 != 18446744072810594310LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = -3063;
	int16_t x243 = -5414;
	static int16_t x244 = INT16_MIN;

	t50 = (((x241%x242)|x243)*x244);

	if (t50 != 1245184) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	static volatile int64_t t51 = -3350427LL;

	t51 = (((x245%x246)|x247)*x248);

	if (t51 != 1020975972664LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x253 = 6U;
	static uint32_t x254 = 50009339U;
	static int16_t x255 = -1;
	static int32_t x256 = 220971;

	t52 = (((x253%x254)|x255)*x256);

	if (t52 != 4294746325U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = 61;
	static volatile int16_t x258 = 11526;
	int32_t x259 = -291710;
	int8_t x260 = -50;
	int32_t t53 = -12794;

	t53 = (((x257%x258)|x259)*x260);

	if (t53 != 14582450) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = -1;
	volatile int32_t x262 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	static int32_t t54 = 922370;

	t54 = (((x261%x262)|x263)*x264);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = 11474;
	static int8_t x267 = -1;
	int32_t x268 = -3523302;
	int64_t t55 = -4154630973896070964LL;

	t55 = (((x265%x266)|x267)*x268);

	if (t55 != 3523302LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = 127LLU;
	uint32_t x270 = UINT32_MAX;
	volatile int8_t x272 = -1;

	t56 = (((x269%x270)|x271)*x272);

	if (t56 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = -438;
	static int8_t x276 = INT8_MIN;
	int64_t t57 = 43298LL;

	t57 = (((x273%x274)|x275)*x276);

	if (t57 != 55936LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x279 = 840415526U;

	t58 = (((x277%x278)|x279)*x280);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x281 = INT8_MIN;
	static int8_t x282 = INT8_MIN;
	static uint64_t x283 = UINT64_MAX;
	volatile uint64_t t59 = 2555LLU;

	t59 = (((x281%x282)|x283)*x284);

	if (t59 != 128LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -1;
	volatile int16_t x286 = INT16_MIN;
	int8_t x288 = INT8_MAX;
	int32_t t60 = 63;

	t60 = (((x285%x286)|x287)*x288);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	volatile int16_t x296 = INT16_MIN;
	int64_t t61 = -3129686LL;

	t61 = (((x293%x294)|x295)*x296);

	if (t61 != 32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int64_t t62 = -897479650406349LL;

	t62 = (((x301%x302)|x303)*x304);

	if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = INT64_MIN;
	static volatile uint32_t x307 = 11927553U;
	static volatile uint8_t x308 = 34U;
	volatile int64_t t63 = 3213592301LL;

	t63 = (((x305%x306)|x307)*x308);

	if (t63 != 405536802LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = -38900631963235065LL;
	uint8_t x310 = UINT8_MAX;
	static int8_t x312 = -1;
	static int64_t t64 = 1617934744812LL;

	t64 = (((x309%x310)|x311)*x312);

	if (t64 != 115LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x313 = 6342346U;
	int32_t x314 = -1;
	int64_t x315 = -9210LL;
	static int8_t x316 = INT8_MIN;
	volatile int64_t t65 = -2020841563060204LL;

	t65 = (((x313%x314)|x315)*x316);

	if (t65 != 1087744LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x318 = 7;
	static volatile int64_t x319 = -1LL;
	volatile uint8_t x320 = 6U;

	t66 = (((x317%x318)|x319)*x320);

	if (t66 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x321 = 29U;
	static int32_t x322 = -1;
	int32_t x323 = -1;
	uint8_t x324 = 39U;
	int32_t t67 = 213;

	t67 = (((x321%x322)|x323)*x324);

	if (t67 != -39) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	static int32_t x327 = -8859;
	uint32_t x328 = 49159U;
	volatile uint32_t t68 = 56928911U;

	t68 = (((x325%x326)|x327)*x328);

	if (t68 != 4293640003U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = -1;
	uint8_t x331 = 1U;
	int32_t x332 = -673;
	uint64_t t69 = 50969360869LLU;

	t69 = (((x329%x330)|x331)*x332);

	if (t69 != 18446744073709550943LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = 137;
	int8_t x335 = INT8_MIN;
	volatile uint8_t x336 = 93U;
	static int32_t t70 = -52693;

	t70 = (((x333%x334)|x335)*x336);

	if (t70 != -11718) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x341 = 1U;
	uint64_t x343 = 2LLU;
	uint16_t x344 = UINT16_MAX;

	t71 = (((x341%x342)|x343)*x344);

	if (t71 != 196605LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x346 = 52836860LLU;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MIN;
	static volatile uint64_t t72 = 59676436LLU;

	t72 = (((x345%x346)|x347)*x348);

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x349 = -1LL;
	static int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MIN;
	static int8_t x352 = -2;
	int64_t t73 = 44961516337LL;

	t73 = (((x349%x350)|x351)*x352);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = INT32_MIN;
	static int32_t x354 = INT32_MAX;
	static volatile uint16_t x355 = 3U;
	int32_t x356 = -7;
	int32_t t74 = 0;

	t74 = (((x353%x354)|x355)*x356);

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = UINT8_MAX;
	static int32_t x358 = INT32_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int16_t x360 = INT16_MAX;
	static uint32_t t75 = 70U;

	t75 = (((x357%x358)|x359)*x360);

	if (t75 != 4294934529U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MAX;
	int32_t x362 = 61581089;
	volatile int32_t x363 = INT32_MIN;
	volatile int8_t x364 = -1;
	volatile int32_t t76 = 1666262;

	t76 = (((x361%x362)|x363)*x364);

	if (t76 != 2093757027) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x365 = 14850767LL;
	int8_t x366 = -1;
	static volatile int32_t x367 = -1340982;

	t77 = (((x365%x366)|x367)*x368);

	if (t77 != -77776956LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = -1;
	uint16_t x370 = 3U;
	static int32_t x371 = INT32_MIN;
	int16_t x372 = -1;
	int32_t t78 = -27111492;

	t78 = (((x369%x370)|x371)*x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	uint64_t t79 = 9888331409LLU;

	t79 = (((x373%x374)|x375)*x376);

	if (t79 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x379 = 359;
	int32_t t80 = 766410658;

	t80 = (((x377%x378)|x379)*x380);

	if (t80 != -65535) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x381 = 2;
	int64_t x382 = -239084LL;
	uint64_t x383 = 24LLU;
	uint8_t x384 = UINT8_MAX;
	uint64_t t81 = 1LLU;

	t81 = (((x381%x382)|x383)*x384);

	if (t81 != 6630LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	volatile uint64_t x388 = 2782445011658LLU;
	uint64_t t82 = 268729LLU;

	t82 = (((x385%x386)|x387)*x388);

	if (t82 != 13970062729562972100LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x389 = 106U;
	int64_t x390 = -468314LL;
	static volatile uint32_t x391 = 13U;
	int32_t x392 = 1741835;
	volatile int64_t t83 = -917LL;

	t83 = (((x389%x390)|x391)*x392);

	if (t83 != 193343685LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x395 = 2U;
	static int8_t x396 = INT8_MIN;
	int32_t t84 = -235;

	t84 = (((x393%x394)|x395)*x396);

	if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = -1;
	static uint64_t x398 = 5900051843825485LLU;
	volatile uint8_t x399 = 12U;
	int8_t x400 = -6;

	t85 = (((x397%x398)|x399)*x400);

	if (t85 != 18427652014243038514LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x405 = 1;
	uint16_t x406 = 7838U;
	int32_t x408 = INT32_MAX;
	volatile uint32_t t86 = 670004U;

	t86 = (((x405%x406)|x407)*x408);

	if (t86 != 2147444415U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -35;
	int64_t x412 = -1LL;
	volatile int64_t t87 = 0LL;

	t87 = (((x409%x410)|x411)*x412);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = 1729685LLU;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	uint64_t t88 = 9482LLU;

	t88 = (((x413%x414)|x415)*x416);

	if (t88 != 3506176LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x417 = 8LLU;
	uint32_t x418 = 5U;
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	static volatile uint64_t t89 = 455911312140LLU;

	t89 = (((x417%x418)|x419)*x420);

	if (t89 != 70362301726720LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = INT64_MIN;
	uint32_t x423 = UINT32_MAX;
	volatile int16_t x424 = 894;
	int64_t t90 = -42LL;

	t90 = (((x421%x422)|x423)*x424);

	if (t90 != 3839700761730LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -371811799110LL;
	volatile uint8_t x426 = 29U;
	uint8_t x427 = UINT8_MAX;
	uint16_t x428 = 1U;
	int64_t t91 = 199542244LL;

	t91 = (((x425%x426)|x427)*x428);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x429 = -7913609232LL;
	volatile int16_t x430 = -1;
	uint64_t x431 = 9622LLU;
	uint64_t x432 = 9768447177LLU;
	volatile uint64_t t92 = 1LLU;

	t92 = (((x429%x430)|x431)*x432);

	if (t92 != 93991998737094LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x445 = INT32_MAX;
	volatile int64_t x446 = INT64_MIN;
	static int64_t x447 = 2034265094895LL;
	static uint64_t x448 = 19650LLU;

	t93 = (((x445%x446)|x447)*x448);

	if (t93 != 40003754891653950LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x449 = 44206861468144LLU;
	uint64_t x451 = 893243263LLU;
	int32_t x452 = INT32_MAX;
	uint64_t t94 = 32387LLU;

	t94 = (((x449%x450)|x451)*x452);

	if (t94 != 6611275176782860417LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = INT16_MAX;
	uint16_t x454 = UINT16_MAX;
	uint32_t x455 = UINT32_MAX;
	uint8_t x456 = UINT8_MAX;
	uint32_t t95 = 1558604619U;

	t95 = (((x453%x454)|x455)*x456);

	if (t95 != 4294967041U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x462 = 235811LLU;
	int32_t x463 = 724176;
	int32_t x464 = 342;
	uint64_t t96 = 3184LLU;

	t96 = (((x461%x462)|x463)*x464);

	if (t96 != 254847456LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x470 = 138092708197999LL;
	int16_t x472 = INT16_MIN;
	int64_t t97 = 1256760237481363597LL;

	t97 = (((x469%x470)|x471)*x472);

	if (t97 != 2752512LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x473 = -1;
	int32_t x475 = -1;
	uint16_t x476 = UINT16_MAX;
	volatile int64_t t98 = -25584576171020LL;

	t98 = (((x473%x474)|x475)*x476);

	if (t98 != -65535LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = -1;
	uint64_t t99 = 521576021LLU;

	t99 = (((x477%x478)|x479)*x480);

	if (t99 != 579829312333545472LLU) { NG(); } else { ; }
	
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


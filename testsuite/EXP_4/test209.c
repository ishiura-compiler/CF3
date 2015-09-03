#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 119104344746LLU;
uint64_t x5 = 1201284085074LLU;
volatile int16_t x6 = INT16_MIN;
int64_t x17 = 4010152813480582340LL;
int32_t x25 = INT32_MIN;
int32_t x26 = -1;
uint8_t x29 = UINT8_MAX;
volatile int64_t x35 = INT64_MIN;
int16_t x39 = 301;
static uint64_t x42 = 3710857517LLU;
int32_t x43 = INT32_MAX;
int16_t x45 = INT16_MAX;
static int16_t x46 = INT16_MAX;
volatile int32_t x47 = INT32_MIN;
int16_t x48 = INT16_MIN;
volatile int32_t t8 = 205;
int16_t x57 = INT16_MAX;
uint8_t x59 = 6U;
static volatile int32_t t11 = 105259623;
int8_t x76 = INT8_MIN;
volatile int64_t t15 = INT64_MIN;
static uint8_t x89 = 63U;
static int64_t x92 = 58878860005663LL;
volatile int64_t t16 = -1677682691185067LL;
int64_t x94 = INT64_MIN;
int32_t x97 = -1;
int64_t x108 = INT64_MAX;
int16_t x112 = 106;
uint64_t x118 = 1580163936574129LLU;
volatile int8_t x122 = INT8_MAX;
static int64_t t23 = 2LL;
uint64_t x130 = UINT64_MAX;
uint16_t x142 = UINT16_MAX;
volatile int64_t t27 = 3521789LL;
static uint32_t x149 = 8763U;
int64_t x150 = INT64_MAX;
int32_t x153 = INT32_MIN;
volatile int16_t x154 = INT16_MAX;
uint16_t x157 = 1568U;
int8_t x164 = 1;
uint64_t x170 = 15737435453LLU;
int16_t x172 = INT16_MIN;
uint8_t x173 = UINT8_MAX;
int8_t x175 = INT8_MAX;
uint32_t t35 = 1216180964U;
int16_t x204 = -23;
int32_t t39 = -12235;
static uint32_t x211 = 4962896U;
int64_t t41 = 4LL;
volatile int64_t x231 = -1LL;
int8_t x233 = -54;
static int8_t x237 = INT8_MIN;
int32_t x238 = -1231;
int8_t x241 = -1;
static uint32_t x245 = 1464645911U;
static int32_t x246 = INT32_MIN;
static int32_t x250 = 19;
volatile int32_t t51 = 480695;
uint32_t x254 = 26037921U;
int8_t x260 = -1;
int32_t x279 = 27697;
int32_t x280 = -174412;
uint16_t x286 = 0U;
static volatile int64_t x306 = INT64_MAX;
int64_t x307 = 54990999LL;
uint32_t x309 = 11541941U;
int32_t t64 = 1;
int32_t t65 = 809715;
uint64_t x329 = 8371956122901235538LLU;
static int32_t x340 = INT32_MIN;
int64_t t71 = -242470346LL;
static int16_t x357 = -1;
int64_t x358 = 573LL;
static volatile int16_t x360 = -2;
uint32_t x367 = 8606U;
volatile int64_t x368 = -209623LL;
volatile uint64_t t74 = 0LLU;
int64_t x373 = INT64_MAX;
volatile uint64_t x375 = 115522LLU;
volatile int16_t x380 = -1;
static uint16_t x383 = 114U;
uint32_t x384 = UINT32_MAX;
int8_t x392 = -1;
int32_t x394 = -1;
uint16_t x395 = 7624U;
int64_t t80 = 757445LL;
static int16_t x400 = -1;
uint32_t x415 = 1114902U;
volatile uint32_t t85 = 25350U;
volatile int8_t x426 = INT8_MIN;
int64_t x427 = INT64_MAX;
int16_t x428 = 0;
int8_t x431 = INT8_MIN;
int64_t t89 = INT64_MIN;
static uint8_t x438 = 0U;
int32_t x441 = 8;
int32_t x442 = INT32_MAX;
uint32_t x444 = UINT32_MAX;
int32_t x445 = INT32_MIN;
uint64_t x447 = 120346LLU;
uint8_t x457 = UINT8_MAX;
uint64_t x459 = 334LLU;
static int32_t x461 = 293476539;
volatile uint64_t x468 = 71709767042905LLU;
static uint64_t t97 = 8631676LLU;
volatile int8_t x470 = INT8_MIN;
uint64_t x472 = 28LLU;
int32_t x476 = INT32_MAX;


void f0(void) {
	int8_t x1 = 14;
	volatile int16_t x2 = INT16_MAX;
	static int32_t x3 = 15840669;
	uint64_t x4 = UINT64_MAX;

	t0 = (x1+(x2/(x3-x4)));

	if (t0 != 14LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x7 = 93774LLU;
	int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 196LLU;

	t1 = (x5+(x6/(x7-x8)));

	if (t1 != 198182971418459LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x18 = 0;
	static volatile int16_t x19 = INT16_MIN;
	int64_t x20 = -3310750260960LL;
	int64_t t2 = 7LL;

	t2 = (x17+(x18/(x19-x20)));

	if (t2 != 4010152813480582340LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x27 = 998048429630610057LLU;
	static volatile int8_t x28 = INT8_MIN;
	volatile uint64_t t3 = 13LLU;

	t3 = (x25+(x26/(x27-x28)));

	if (t3 != 18446744071562067986LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = 4;
	uint16_t x32 = UINT16_MAX;
	volatile int64_t t4 = 63LL;

	t4 = (x29+(x30/(x31-x32)));

	if (t4 != 140748226593085LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 26LL;
	uint32_t x34 = 5U;
	int32_t x36 = INT32_MIN;
	int64_t t5 = 1940602LL;

	t5 = (x33+(x34/(x35-x36)));

	if (t5 != 26LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 12U;
	static int16_t x38 = 9;
	int16_t x40 = -1;
	static uint32_t t6 = 0U;

	t6 = (x37+(x38/(x39-x40)));

	if (t6 != 12U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x41 = INT64_MAX;
	static volatile int32_t x44 = 1017;
	volatile uint64_t t7 = 9866LLU;

	t7 = (x41+(x42/(x43-x44)));

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {


	t8 = (x45+(x46/(x47-x48)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 23U;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = 935187LLU;
	uint64_t t9 = 1918LLU;

	t9 = (x49+(x50/(x51-x52)));

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = 0U;
	static volatile uint16_t x54 = 133U;
	uint32_t x55 = 0U;
	static int32_t x56 = -6;
	uint32_t t10 = 235U;

	t10 = (x53+(x54/(x55-x56)));

	if (t10 != 22U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = INT32_MIN;
	static int8_t x60 = 2;

	t11 = (x57+(x58/(x59-x60)));

	if (t11 != -536838145) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	static int8_t x62 = 0;
	int32_t x63 = 195080336;
	static int32_t x64 = -1;
	static volatile int32_t t12 = INT32_MAX;

	t12 = (x61+(x62/(x63-x64)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	static uint16_t x75 = UINT16_MAX;
	static volatile int32_t t13 = INT32_MIN;

	t13 = (x73+(x74/(x75-x76)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int8_t x84 = -41;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x81+(x82/(x83-x84)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = INT64_MIN;
	uint16_t x86 = 1U;
	volatile int64_t x87 = 20211256137042LL;
	int16_t x88 = -472;

	t15 = (x85+(x86/(x87-x88)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x90 = INT32_MIN;
	static uint32_t x91 = 1U;

	t16 = (x89+(x90/(x91-x92)));

	if (t16 != 63LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	int32_t x95 = -58;
	volatile uint32_t x96 = 27076062U;
	volatile int64_t t17 = 2LL;

	t17 = (x93+(x94/(x95-x96)));

	if (t17 != -2161107723LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x98 = INT8_MIN;
	static int8_t x99 = INT8_MAX;
	int8_t x100 = -1;
	static volatile int32_t t18 = -171435;

	t18 = (x97+(x98/(x99-x100)));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 4642245U;
	int32_t x104 = 66324587;
	uint64_t t19 = UINT64_MAX;

	t19 = (x101+(x102/(x103-x104)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = 8U;
	static int64_t x106 = -1LL;
	int8_t x107 = -1;
	volatile int64_t t20 = -42636LL;

	t20 = (x105+(x106/(x107-x108)));

	if (t20 != 8LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x109 = -7;
	int64_t x110 = INT64_MIN;
	int8_t x111 = -1;
	static int64_t t21 = 95940LL;

	t21 = (x109+(x110/(x111-x112)));

	if (t21 != 86199738662194159LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	volatile int16_t x119 = -200;
	int32_t x120 = 0;
	volatile uint64_t t22 = 27666LLU;

	t22 = (x117+(x118/(x119-x120)));

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x121 = INT32_MAX;
	int64_t x123 = 32445811609028366LL;
	uint16_t x124 = UINT16_MAX;

	t23 = (x121+(x122/(x123-x124)));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x129 = 13657;
	int8_t x131 = -28;
	int8_t x132 = -12;
	uint64_t t24 = 126LLU;

	t24 = (x129+(x130/(x131-x132)));

	if (t24 != 13658LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = 123390085796LL;
	static uint8_t x134 = UINT8_MAX;
	volatile uint8_t x135 = 0U;
	volatile uint32_t x136 = 126460U;
	volatile int64_t t25 = -863559408980LL;

	t25 = (x133+(x134/(x135-x136)));

	if (t25 != 123390085796LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MAX;
	int64_t x138 = 28849LL;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int64_t t26 = 23745250158576LL;

	t26 = (x137+(x138/(x139-x140)));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = 0U;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;

	t27 = (x141+(x142/(x143-x144)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x151 = INT64_MIN;
	int16_t x152 = -353;
	volatile int64_t t28 = 3900971410346962269LL;

	t28 = (x149+(x150/(x151-x152)));

	if (t28 != 8762LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x155 = 6U;
	uint16_t x156 = UINT16_MAX;
	int32_t t29 = INT32_MIN;

	t29 = (x153+(x154/(x155-x156)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	static int32_t x160 = 1094260;
	static volatile uint64_t t30 = 1373210637LLU;

	t30 = (x157+(x158/(x159-x160)));

	if (t30 != 1569LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x161 = UINT8_MAX;
	uint16_t x162 = 501U;
	uint16_t x163 = UINT16_MAX;
	static volatile int32_t t31 = 43;

	t31 = (x161+(x162/(x163-x164)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x165 = 23558;
	volatile int8_t x166 = -1;
	static int64_t x167 = 77342900253695LL;
	uint32_t x168 = UINT32_MAX;
	static int64_t t32 = 6883LL;

	t32 = (x165+(x166/(x167-x168)));

	if (t32 != 23558LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x169 = 1493U;
	int64_t x171 = INT64_MIN;
	volatile uint64_t t33 = 0LLU;

	t33 = (x169+(x170/(x171-x172)));

	if (t33 != 1493LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x174 = INT16_MAX;
	uint8_t x176 = 1U;
	volatile int32_t t34 = -3;

	t34 = (x173+(x174/(x175-x176)));

	if (t34 != 515) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -295;
	volatile uint16_t x178 = UINT16_MAX;
	static uint32_t x179 = 369328233U;
	uint8_t x180 = UINT8_MAX;

	t35 = (x177+(x178/(x179-x180)));

	if (t35 != 4294967001U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = 2;
	int64_t x182 = -41703169299253LL;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	int64_t t36 = 25755LL;

	t36 = (x181+(x182/(x183-x184)));

	if (t36 != -9707LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int32_t x188 = 256811;
	volatile int64_t t37 = 1733002633LL;

	t37 = (x185+(x186/(x187-x188)));

	if (t37 != 35914879477748LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x197 = 218U;
	int16_t x198 = 2718;
	int64_t x199 = -1LL;
	uint32_t x200 = 15558196U;
	int64_t t38 = 12349LL;

	t38 = (x197+(x198/(x199-x200)));

	if (t38 != 218LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;

	t39 = (x201+(x202/(x203-x204)));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x205 = 29;
	uint32_t x206 = 775264039U;
	volatile uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = INT16_MAX;
	static uint32_t t40 = 1166U;

	t40 = (x205+(x206/(x207-x208)));

	if (t40 != 29U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;

	t41 = (x209+(x210/(x211-x212)));

	if (t41 != -1858417778654LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x213 = 11U;
	int32_t x214 = -32281442;
	volatile int64_t x215 = -11LL;
	volatile uint64_t x216 = 75271LLU;
	volatile uint64_t t42 = 116819589404847024LLU;

	t42 = (x213+(x214/(x215-x216)));

	if (t42 != 11LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x217 = UINT8_MAX;
	int16_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -10824LL;
	int64_t t43 = -18659618967670LL;

	t43 = (x217+(x218/(x219-x220)));

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MIN;
	static int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MAX;
	uint8_t x224 = 32U;
	volatile int64_t t44 = -147289877612850LL;

	t44 = (x221+(x222/(x223-x224)));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = -30;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -1;
	static int32_t t45 = 215694;

	t45 = (x225+(x226/(x227-x228)));

	if (t45 != -30) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MAX;
	int8_t x232 = INT8_MAX;
	static volatile int64_t t46 = 1214615571314319439LL;

	t46 = (x229+(x230/(x231-x232)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int64_t t47 = -230915960LL;

	t47 = (x233+(x234/(x235-x236)));

	if (t47 != -55LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x239 = 1567892531U;
	static int32_t x240 = INT32_MIN;
	static uint32_t t48 = 2234362U;

	t48 = (x237+(x238/(x239-x240)));

	if (t48 != 4294967169U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	int32_t x244 = 6730;
	static int32_t t49 = -1;

	t49 = (x241+(x242/(x243-x244)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x247 = INT16_MIN;
	uint8_t x248 = 2U;
	volatile uint32_t t50 = 9547U;

	t50 = (x245+(x246/(x247-x248)));

	if (t50 != 1464711443U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = 1;

	t51 = (x249+(x250/(x251-x252)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x253 = 2124073407901LLU;
	static int16_t x255 = -1;
	int64_t x256 = INT64_MIN;
	uint64_t t52 = 3298727227903098826LLU;

	t52 = (x253+(x254/(x255-x256)));

	if (t52 != 2124073407901LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = INT32_MAX;
	static uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	int32_t t53 = INT32_MAX;

	t53 = (x257+(x258/(x259-x260)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = -1;
	int64_t x262 = -1LL;
	int8_t x263 = -18;
	int8_t x264 = -1;
	volatile int64_t t54 = 6340645LL;

	t54 = (x261+(x262/(x263-x264)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x269 = INT8_MIN;
	int16_t x270 = 28;
	int16_t x271 = -142;
	static int64_t x272 = INT64_MIN;
	int64_t t55 = 334286178LL;

	t55 = (x269+(x270/(x271-x272)));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x277 = 31696U;
	int64_t x278 = 2148634695539911LL;
	volatile int64_t t56 = 219470037554LL;

	t56 = (x277+(x278/(x279-x280)));

	if (t56 != 10631100552LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x281 = 15214U;
	uint16_t x282 = 94U;
	int8_t x283 = -1;
	static int32_t x284 = 26;
	uint32_t t57 = 1559U;

	t57 = (x281+(x282/(x283-x284)));

	if (t57 != 15211U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x285 = 38U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = 441308;
	int32_t t58 = 93853;

	t58 = (x285+(x286/(x287-x288)));

	if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	volatile int64_t x299 = -1069497LL;
	uint32_t x300 = 4985880U;
	int64_t t59 = INT64_MIN;

	t59 = (x297+(x298/(x299-x300)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x301 = 53446U;
	int8_t x302 = 19;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t60 = 29188282775555092LLU;

	t60 = (x301+(x302/(x303-x304)));

	if (t60 != 53446LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = 1;
	volatile int8_t x308 = INT8_MIN;
	int64_t t61 = -1564954263071509097LL;

	t61 = (x305+(x306/(x307-x308)));

	if (t61 != 167724731971LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x310 = INT32_MIN;
	int16_t x311 = 516;
	static int64_t x312 = 0LL;
	int64_t t62 = 36835193LL;

	t62 = (x309+(x310/(x311-x312)));

	if (t62 != 7380151LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 31U;
	int32_t t63 = 1;

	t63 = (x317+(x318/(x319-x320)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = 1823;
	static int16_t x323 = INT16_MIN;
	static int8_t x324 = -1;

	t64 = (x321+(x322/(x323-x324)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 11377U;
	uint16_t x328 = 4831U;

	t65 = (x325+(x326/(x327-x328)));

	if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x330 = 993557227;
	static uint32_t x331 = 284870U;
	int16_t x332 = INT16_MIN;
	uint64_t t66 = 3118478480LLU;

	t66 = (x329+(x330/(x331-x332)));

	if (t66 != 8371956122901238665LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = 16808758853LLU;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	int64_t x336 = -1182466287435LL;
	uint64_t t67 = 4LLU;

	t67 = (x333+(x334/(x335-x336)));

	if (t67 != 16808758853LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x337 = 28129006484129LL;
	int8_t x338 = INT8_MIN;
	static uint64_t x339 = 2245622412002843LLU;
	static volatile uint64_t t68 = 535811770047LLU;

	t68 = (x337+(x338/(x339-x340)));

	if (t68 != 28129006492343LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x341 = 3187U;
	uint8_t x342 = 22U;
	static uint32_t x343 = 48024501U;
	int16_t x344 = -18;
	volatile uint32_t t69 = 14U;

	t69 = (x341+(x342/(x343-x344)));

	if (t69 != 3187U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x349 = -1523254LL;
	uint8_t x350 = 107U;
	int32_t x351 = 153214001;
	int16_t x352 = 2110;
	int64_t t70 = 26028LL;

	t70 = (x349+(x350/(x351-x352)));

	if (t70 != -1523254LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x353 = INT16_MIN;
	static uint16_t x354 = UINT16_MAX;
	int64_t x355 = -1LL;
	volatile uint32_t x356 = 212329U;

	t71 = (x353+(x354/(x355-x356)));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x359 = UINT16_MAX;
	volatile int64_t t72 = -39613LL;

	t72 = (x357+(x358/(x359-x360)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x365 = INT16_MAX;
	static uint32_t x366 = 0U;
	volatile int64_t t73 = 3552LL;

	t73 = (x365+(x366/(x367-x368)));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x369 = 410U;
	static volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = -15075;
	volatile uint64_t x372 = 223LLU;

	t74 = (x369+(x370/(x371-x372)));

	if (t74 != 411LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x374 = INT16_MIN;
	static uint32_t x376 = UINT32_MAX;
	static volatile uint64_t t75 = 391805767354871957LLU;

	t75 = (x373+(x374/(x375-x376)));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = 27U;
	int16_t x378 = INT16_MIN;
	int64_t x379 = 1LL;
	volatile int64_t t76 = 85420575461130686LL;

	t76 = (x377+(x378/(x379-x380)));

	if (t76 != -16357LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x381 = -1;
	volatile int8_t x382 = -21;
	static uint32_t t77 = 387674U;

	t77 = (x381+(x382/(x383-x384)));

	if (t77 != 37347540U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = -15200;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t78 = 26790427471421LLU;

	t78 = (x385+(x386/(x387-x388)));

	if (t78 != 18446744073709536416LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x389 = -926847196;
	static uint64_t x390 = 477817137942338LLU;
	uint32_t x391 = 40352812U;
	volatile uint64_t t79 = 56818777038LLU;

	t79 = (x389+(x390/(x391-x392)));

	if (t79 != 18446744072794545407LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x393 = INT32_MIN;
	static int64_t x396 = -1LL;

	t80 = (x393+(x394/(x395-x396)));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x397 = 3308U;
	static uint16_t x398 = UINT16_MAX;
	static int64_t x399 = INT64_MIN;
	volatile int64_t t81 = -128484575759836276LL;

	t81 = (x397+(x398/(x399-x400)));

	if (t81 != 3308LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x401 = INT64_MAX;
	static uint16_t x402 = 1383U;
	uint8_t x403 = 12U;
	int8_t x404 = 15;
	int64_t t82 = -557444243977247493LL;

	t82 = (x401+(x402/(x403-x404)));

	if (t82 != 9223372036854775346LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 2289833723404304LLU;
	volatile int64_t x407 = -32364589887056LL;
	int16_t x408 = 849;
	static volatile uint64_t t83 = UINT64_MAX;

	t83 = (x405+(x406/(x407-x408)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = -1816862;
	static int8_t x410 = -2;
	static uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = INT8_MIN;
	int32_t t84 = -156;

	t84 = (x409+(x410/(x411-x412)));

	if (t84 != -1816862) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	uint16_t x416 = 438U;

	t85 = (x413+(x414/(x415-x416)));

	if (t85 != 3852U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x417 = 58;
	int32_t x418 = INT32_MIN;
	static volatile int16_t x419 = 249;
	static uint8_t x420 = 2U;
	static volatile int32_t t86 = 1429009;

	t86 = (x417+(x418/(x419-x420)));

	if (t86 != -8694207) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = UINT32_MAX;
	volatile int64_t t87 = -17LL;

	t87 = (x425+(x426/(x427-x428)));

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x429 = INT16_MIN;
	static int64_t x430 = INT64_MIN;
	int64_t x432 = -1LL;
	volatile int64_t t88 = -934LL;

	t88 = (x429+(x430/(x431-x432)));

	if (t88 != 72624976668115073LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = INT64_MIN;
	static int16_t x434 = INT16_MIN;
	volatile uint8_t x435 = 24U;
	int16_t x436 = INT16_MIN;

	t89 = (x433+(x434/(x435-x436)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = -1LL;
	int16_t x439 = 1;
	uint8_t x440 = 0U;
	volatile int64_t t90 = 7LL;

	t90 = (x437+(x438/(x439-x440)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x443 = 52U;
	volatile uint32_t t91 = 103473094U;

	t91 = (x441+(x442/(x443-x444)));

	if (t91 != 40518567U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x446 = -1LL;
	int16_t x448 = -1;
	static uint64_t t92 = 2405695654LLU;

	t92 = (x445+(x446/(x447-x448)));

	if (t92 != 153277486189892LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x449 = 1388LLU;
	volatile int16_t x450 = INT16_MIN;
	volatile int8_t x451 = INT8_MAX;
	uint8_t x452 = 27U;
	static uint64_t t93 = 1505959032913LLU;

	t93 = (x449+(x450/(x451-x452)));

	if (t93 != 1061LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x453 = 329U;
	int32_t x454 = INT32_MAX;
	uint32_t x455 = 8162U;
	volatile uint8_t x456 = UINT8_MAX;
	volatile uint32_t t94 = 1841581U;

	t94 = (x453+(x454/(x455-x456)));

	if (t94 != 271921U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x458 = -1LL;
	static volatile int8_t x460 = INT8_MIN;
	uint64_t t95 = 22LLU;

	t95 = (x457+(x458/(x459-x460)));

	if (t95 != 39928017475562055LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x462 = 28;
	static uint8_t x463 = 0U;
	volatile uint8_t x464 = 46U;
	int32_t t96 = -24234;

	t96 = (x461+(x462/(x463-x464)));

	if (t96 != 293476539) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x465 = 4099U;
	int8_t x466 = -1;
	static int64_t x467 = -1LL;

	t97 = (x465+(x466/(x467-x468)));

	if (t97 != 4100LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x469 = 2197793;
	int32_t x471 = 1;
	uint64_t t98 = 45344448114LLU;

	t98 = (x469+(x470/(x471-x472)));

	if (t98 != 2197793LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x473 = 537116576U;
	static uint64_t x474 = 286739875973LLU;
	uint16_t x475 = UINT16_MAX;
	static volatile uint64_t t99 = 171LLU;

	t99 = (x473+(x474/(x475-x476)));

	if (t99 != 537116576LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
uint16_t x3 = UINT16_MAX;
static int8_t x10 = -1;
volatile int8_t x11 = INT8_MIN;
volatile uint16_t x12 = UINT16_MAX;
int32_t x17 = INT32_MIN;
int16_t x20 = INT16_MIN;
int32_t t4 = -162;
volatile uint32_t x22 = 0U;
volatile int64_t t6 = 441270519872593LL;
int32_t x30 = -1;
volatile int64_t t7 = 2859436340616LL;
int16_t x39 = -1;
volatile uint64_t t9 = 11201966647591LLU;
int8_t x41 = 8;
static volatile int8_t x43 = INT8_MAX;
volatile int8_t x47 = -7;
static int32_t t11 = 16334;
volatile int16_t x58 = INT16_MAX;
int16_t x66 = INT16_MAX;
volatile int16_t x70 = -429;
volatile int64_t x74 = INT64_MIN;
int16_t x76 = INT16_MIN;
int64_t x80 = 4LL;
int64_t x83 = INT64_MIN;
int32_t t20 = 1213503;
volatile uint8_t x85 = UINT8_MAX;
volatile int64_t t22 = INT64_MIN;
static uint64_t x93 = UINT64_MAX;
volatile uint64_t x95 = 6738110LLU;
uint32_t t25 = 462U;
volatile uint32_t t26 = UINT32_MAX;
volatile int64_t t27 = -2644236893295LL;
int8_t x115 = INT8_MAX;
uint64_t x116 = UINT64_MAX;
uint32_t t30 = 452907U;
static volatile uint8_t x126 = 3U;
int64_t x127 = -1LL;
static int16_t x128 = 0;
uint32_t x131 = 8212922U;
static volatile uint64_t t32 = 9355917254LLU;
static volatile int16_t x133 = INT16_MAX;
uint16_t x136 = UINT16_MAX;
uint8_t x140 = UINT8_MAX;
static uint32_t t34 = 383582U;
uint8_t x142 = 62U;
volatile uint16_t x150 = UINT16_MAX;
static int32_t x156 = INT32_MAX;
int64_t t43 = 719141LL;
uint64_t x180 = 2223250591927LLU;
static uint64_t t44 = 387935353873980693LLU;
int8_t x181 = INT8_MIN;
uint32_t x182 = 120U;
volatile uint8_t x183 = 13U;
int32_t t46 = -290878610;
int32_t t48 = -6449940;
int64_t x197 = -1LL;
volatile int64_t x199 = -97519125718806LL;
uint64_t x202 = 57605675998LLU;
volatile int8_t x204 = 0;
int8_t x207 = 7;
volatile uint32_t t51 = 1U;
uint32_t x209 = 0U;
int64_t x210 = -643024LL;
int32_t x213 = INT32_MIN;
int32_t x222 = -1;
static int8_t x228 = INT8_MAX;
int64_t x229 = -1LL;
uint32_t t58 = 26U;
uint64_t x240 = 700661437571999581LLU;
volatile uint64_t t59 = 835LLU;
uint32_t x249 = 7623U;
static uint8_t x259 = 2U;
int64_t x266 = -1LL;
volatile int64_t x279 = -669117016521413LL;
uint64_t x280 = UINT64_MAX;
int8_t x293 = INT8_MIN;
int32_t t73 = 30746;
int64_t x298 = INT64_MAX;
int64_t x305 = INT64_MIN;
int16_t x312 = INT16_MIN;
int16_t x314 = -8219;
int32_t t78 = 1033623;
int8_t x317 = 52;
uint64_t x321 = 3LLU;
static volatile uint64_t x324 = 1347930LLU;
int64_t x326 = INT64_MAX;
int64_t t81 = 27059186002332006LL;
static int32_t x329 = 1367;
int32_t t83 = -2044094;
uint32_t x339 = 1000863029U;
volatile int32_t t84 = 4735;
static uint8_t x342 = 1U;
int64_t x343 = INT64_MIN;
int16_t x345 = INT16_MIN;
int32_t x352 = INT32_MAX;
uint8_t x355 = 13U;
static int32_t x356 = -1;
volatile int32_t t90 = -1096539;
int16_t x371 = 6;
static int32_t x373 = INT32_MIN;
int8_t x384 = -1;
int64_t x393 = -75428LL;
volatile int64_t t98 = -266742LL;
int64_t x399 = -5881433034151LL;
static uint32_t t99 = UINT32_MAX;


void f0(void) {
	static int64_t x2 = INT64_MAX;
	int8_t x4 = 2;
	int32_t t0 = 492564419;

	t0 = ((x1&(x2<=x3))+x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int64_t x6 = INT64_MIN;
	static uint64_t x7 = 549428887546LLU;
	int32_t x8 = 217;
	volatile int32_t t1 = 332802633;

	t1 = ((x5&(x6<=x7))+x8);

	if (t1 != 217) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 91LLU;
	volatile uint64_t t2 = 75388137866LLU;

	t2 = ((x9&(x10<=x11))+x12);

	if (t2 != 65535LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 127U;
	uint64_t x14 = 333LLU;
	volatile uint32_t x15 = 20325U;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -371;

	t3 = ((x13&(x14<=x15))+x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	uint32_t x19 = UINT32_MAX;

	t4 = ((x17&(x18<=x19))+x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static volatile int8_t x23 = INT8_MAX;
	uint32_t x24 = UINT32_MAX;
	uint32_t t5 = UINT32_MAX;

	t5 = ((x21&(x22<=x23))+x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = -4;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1LL;

	t6 = ((x25&(x26<=x27))+x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static int32_t x31 = 232827641;
	volatile int64_t x32 = 6LL;

	t7 = ((x29&(x30<=x31))+x32);

	if (t7 != 7LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 33865LLU;
	int16_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t8 = 3735548116LLU;

	t8 = ((x33&(x34<=x35))+x36);

	if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1LLU;
	int32_t x38 = 15598;
	volatile int16_t x40 = 2471;

	t9 = ((x37&(x38<=x39))+x40);

	if (t9 != 2471LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	static uint32_t x44 = UINT32_MAX;
	uint32_t t10 = UINT32_MAX;

	t10 = ((x41&(x42<=x43))+x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = UINT8_MAX;
	static int16_t x46 = INT16_MAX;
	uint8_t x48 = 3U;

	t11 = ((x45&(x46<=x47))+x48);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = 1591U;
	static uint8_t x51 = 47U;
	int16_t x52 = 0;
	int32_t t12 = -291212;

	t12 = ((x49&(x50<=x51))+x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	static int8_t x54 = 34;
	int32_t x55 = -35082;
	uint16_t x56 = 2U;
	int64_t t13 = 15780107LL;

	t13 = ((x53&(x54<=x55))+x56);

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	volatile uint16_t x59 = 49U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = -228901229;

	t14 = ((x57&(x58<=x59))+x60);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = 0U;
	static uint32_t x62 = UINT32_MAX;
	int8_t x63 = -35;
	int16_t x64 = -1;
	int32_t t15 = -136215809;

	t15 = ((x61&(x62<=x63))+x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	static int32_t x67 = 240604656;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = ((x65&(x66<=x67))+x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -1169713716925426118LL;
	static int64_t t17 = 43657481173LL;

	t17 = ((x69&(x70<=x71))+x72);

	if (t17 != -1169713716925426117LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 16U;
	int16_t x75 = -937;
	int32_t t18 = 7334858;

	t18 = ((x73&(x74<=x75))+x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static volatile uint8_t x78 = 8U;
	volatile uint16_t x79 = 8U;
	static volatile int64_t t19 = 4948693364LL;

	t19 = ((x77&(x78<=x79))+x80);

	if (t19 != 4LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -23;
	int16_t x82 = INT16_MAX;
	volatile int8_t x84 = INT8_MIN;

	t20 = ((x81&(x82<=x83))+x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MIN;
	int64_t x87 = -17460550743LL;
	volatile uint8_t x88 = 4U;
	int32_t t21 = 1;

	t21 = ((x85&(x86<=x87))+x88);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1461U;
	int32_t x90 = -1367;
	volatile uint64_t x91 = 46LLU;
	volatile int64_t x92 = INT64_MIN;

	t22 = ((x89&(x90<=x91))+x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 116;
	volatile int8_t x96 = INT8_MIN;
	volatile uint64_t t23 = 66LLU;

	t23 = ((x93&(x94<=x95))+x96);

	if (t23 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	int32_t t24 = 62770311;

	t24 = ((x97&(x98<=x99))+x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 11U;
	static int8_t x102 = -1;
	uint64_t x103 = 458867349LLU;
	uint16_t x104 = 0U;

	t25 = ((x101&(x102<=x103))+x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 278400428U;
	int16_t x106 = INT16_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	static int16_t x108 = -1;

	t26 = ((x105&(x106<=x107))+x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MAX;
	static int16_t x111 = INT16_MIN;
	static int64_t x112 = 1022LL;

	t27 = ((x109&(x110<=x111))+x112);

	if (t27 != 1022LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MAX;
	uint64_t x114 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113&(x114<=x115))+x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = 26LL;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 150137848;

	t29 = ((x117&(x118<=x119))+x120);

	if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	static volatile uint8_t x124 = UINT8_MAX;

	t30 = ((x121&(x122<=x123))+x124);

	if (t30 != 255U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t t31 = 12005290LL;

	t31 = ((x125&(x126<=x127))+x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x132 = 0LLU;

	t32 = ((x129&(x130<=x131))+x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = UINT64_MAX;
	int8_t x135 = -1;
	int32_t t33 = -11674;

	t33 = ((x133&(x134<=x135))+x136);

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	int64_t x138 = -4976LL;
	uint64_t x139 = 76184483247288809LLU;

	t34 = ((x137&(x138<=x139))+x140);

	if (t34 != 255U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x143 = 31956209;
	int32_t x144 = 579624345;
	volatile int32_t t35 = -120502366;

	t35 = ((x141&(x142<=x143))+x144);

	if (t35 != 579624345) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 30;
	volatile int32_t x146 = INT32_MIN;
	uint64_t x147 = 10544840LLU;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -104062;

	t36 = ((x145&(x146<=x147))+x148);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MAX;
	uint32_t t37 = 105169450U;

	t37 = ((x149&(x150<=x151))+x152);

	if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MIN;
	int32_t t38 = INT32_MAX;

	t38 = ((x153&(x154<=x155))+x156);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = UINT8_MAX;
	int64_t x160 = -3659058516390LL;
	int64_t t39 = -1436849LL;

	t39 = ((x157&(x158<=x159))+x160);

	if (t39 != -3659058516390LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 1U;
	int16_t x162 = 473;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MAX;
	int64_t t40 = INT64_MAX;

	t40 = ((x161&(x162<=x163))+x164);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	static int32_t x166 = 0;
	int16_t x167 = INT16_MIN;
	int16_t x168 = 102;
	int64_t t41 = -647357991011861488LL;

	t41 = ((x165&(x166<=x167))+x168);

	if (t41 != 102LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	uint16_t x171 = UINT16_MAX;
	uint8_t x172 = 0U;
	int32_t t42 = 561;

	t42 = ((x169&(x170<=x171))+x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1;
	static uint8_t x174 = 115U;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MIN;

	t43 = ((x173&(x174<=x175))+x176);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 2698U;
	static int32_t x178 = -213079454;
	uint64_t x179 = 1LLU;

	t44 = ((x177&(x178<=x179))+x180);

	if (t44 != 2223250591927LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x184 = 1898;
	static int32_t t45 = 303066;

	t45 = ((x181&(x182<=x183))+x184);

	if (t45 != 1898) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = -1;
	volatile uint64_t x187 = 226127LLU;
	static int16_t x188 = -14471;

	t46 = ((x185&(x186<=x187))+x188);

	if (t46 != -14471) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile uint64_t x190 = 133649730099109LLU;
	int32_t x191 = 251706318;
	int64_t x192 = -1LL;
	volatile int64_t t47 = 4100140879400239LL;

	t47 = ((x189&(x190<=x191))+x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 22U;
	uint16_t x194 = 53U;
	int64_t x195 = -1LL;
	uint16_t x196 = 5400U;

	t48 = ((x193&(x194<=x195))+x196);

	if (t48 != 5400) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int64_t x200 = -1LL;
	static volatile int64_t t49 = -389LL;

	t49 = ((x197&(x198<=x199))+x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 13;
	uint8_t x203 = UINT8_MAX;
	volatile int32_t t50 = 494494;

	t50 = ((x201&(x202<=x203))+x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x206 = 2;
	uint32_t x208 = UINT32_MAX;

	t51 = ((x205&(x206<=x207))+x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x209&(x210<=x211))+x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x214 = 7U;
	uint64_t x215 = 931178128969760LLU;
	volatile int32_t x216 = 1895;
	volatile int32_t t53 = 4469;

	t53 = ((x213&(x214<=x215))+x216);

	if (t53 != 1895) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 1939LLU;
	uint32_t x218 = 96U;
	static int16_t x219 = INT16_MIN;
	static int32_t x220 = 2407067;
	uint64_t t54 = 489151921691920LLU;

	t54 = ((x217&(x218<=x219))+x220);

	if (t54 != 2407068LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	static volatile int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MIN;
	uint32_t t55 = 19260878U;

	t55 = ((x221&(x222<=x223))+x224);

	if (t55 != 4294967168U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 3U;
	uint16_t x226 = 12707U;
	uint16_t x227 = 1020U;
	uint32_t t56 = 459U;

	t56 = ((x225&(x226<=x227))+x228);

	if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 2302U;
	static int32_t x232 = -1;
	int64_t t57 = 818556012822338LL;

	t57 = ((x229&(x230<=x231))+x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 0;
	uint8_t x234 = 6U;
	int64_t x235 = INT64_MIN;
	static volatile uint32_t x236 = 1873321U;

	t58 = ((x233&(x234<=x235))+x236);

	if (t58 != 1873321U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 51312LLU;
	uint32_t x238 = 2940U;
	uint64_t x239 = UINT64_MAX;

	t59 = ((x237&(x238<=x239))+x240);

	if (t59 != 700661437571999581LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 15U;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 296155U;
	static volatile int8_t x244 = 1;
	int32_t t60 = 33;

	t60 = ((x241&(x242<=x243))+x244);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	volatile int64_t x246 = 11LL;
	volatile int32_t x247 = -1443;
	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t61 = 9056319436060717LL;

	t61 = ((x245&(x246<=x247))+x248);

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 1U;
	int8_t x251 = -2;
	int8_t x252 = 12;
	static volatile uint32_t t62 = 113898234U;

	t62 = ((x249&(x250<=x251))+x252);

	if (t62 != 12U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x254 = 974;
	int64_t x255 = -1LL;
	uint64_t x256 = 227840711124289936LLU;
	uint64_t t63 = 453531111LLU;

	t63 = ((x253&(x254<=x255))+x256);

	if (t63 != 227840711124289936LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 6;
	int8_t x258 = -1;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x257&(x258<=x259))+x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 14U;
	int64_t x262 = -1LL;
	uint64_t x263 = UINT64_MAX;
	volatile uint16_t x264 = 3276U;
	volatile int32_t t65 = 2;

	t65 = ((x261&(x262<=x263))+x264);

	if (t65 != 3276) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = 4972;
	uint64_t x267 = 19459994LLU;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 43899556;

	t66 = ((x265&(x266<=x267))+x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 25438578624452747LLU;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = 68508559135LL;
	int64_t t67 = 277574621234181058LL;

	t67 = ((x269&(x270<=x271))+x272);

	if (t67 != 68508559135LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = 497;
	uint64_t x274 = 1622037392LLU;
	static uint16_t x275 = 5U;
	volatile uint16_t x276 = UINT16_MAX;
	static volatile int32_t t68 = -95412;

	t68 = ((x273&(x274<=x275))+x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -28;
	uint16_t x278 = 3U;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x277&(x278<=x279))+x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	uint16_t x283 = 3U;
	uint8_t x284 = 0U;
	static volatile int32_t t70 = -1839122;

	t70 = ((x281&(x282<=x283))+x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 360;
	int16_t x286 = INT16_MAX;
	static uint64_t x287 = 45320541LLU;
	int64_t x288 = INT64_MAX;
	int64_t t71 = INT64_MAX;

	t71 = ((x285&(x286<=x287))+x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 2LLU;
	int64_t x290 = -1LL;
	volatile int16_t x291 = INT16_MAX;
	static int64_t x292 = 46638227LL;
	volatile uint64_t t72 = 158496LLU;

	t72 = ((x289&(x290<=x291))+x292);

	if (t72 != 46638227LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	int32_t x295 = -31811;
	int16_t x296 = -1;

	t73 = ((x293&(x294<=x295))+x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 14668;
	static int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -112042;

	t74 = ((x297&(x298<=x299))+x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 0U;
	static int32_t x302 = 4;
	int16_t x303 = INT16_MIN;
	static uint16_t x304 = 395U;
	volatile int32_t t75 = 19099;

	t75 = ((x301&(x302<=x303))+x304);

	if (t75 != 395) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = 41702280LL;
	uint16_t x307 = UINT16_MAX;
	uint8_t x308 = 87U;
	int64_t t76 = 342474LL;

	t76 = ((x305&(x306<=x307))+x308);

	if (t76 != 87LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	static volatile uint32_t x311 = UINT32_MAX;
	int32_t t77 = 83;

	t77 = ((x309&(x310<=x311))+x312);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 25711853;
	int16_t x315 = -1;
	int16_t x316 = 0;

	t78 = ((x313&(x314<=x315))+x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	static volatile int64_t x320 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = ((x317&(x318<=x319))+x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x322 = 0LL;
	static uint8_t x323 = 13U;
	volatile uint64_t t80 = 108700LLU;

	t80 = ((x321&(x322<=x323))+x324);

	if (t80 != 1347931LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	static int64_t x328 = -1LL;

	t81 = ((x325&(x326<=x327))+x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x330 = INT64_MAX;
	uint32_t x331 = 171584337U;
	int32_t x332 = INT32_MAX;
	static volatile int32_t t82 = INT32_MAX;

	t82 = ((x329&(x330<=x331))+x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	volatile int16_t x334 = -4;
	volatile int16_t x335 = INT16_MIN;
	volatile int8_t x336 = -61;

	t83 = ((x333&(x334<=x335))+x336);

	if (t83 != -61) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 20U;
	volatile uint8_t x338 = 10U;
	int16_t x340 = INT16_MIN;

	t84 = ((x337&(x338<=x339))+x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 21U;
	static int64_t x344 = INT64_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = ((x341&(x342<=x343))+x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x346 = 99U;
	int64_t x347 = INT64_MIN;
	volatile int16_t x348 = -1;
	static volatile int32_t t86 = 0;

	t86 = ((x345&(x346<=x347))+x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	volatile uint16_t x351 = 12U;
	uint32_t t87 = 180659U;

	t87 = ((x349&(x350<=x351))+x352);

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	int32_t t88 = 72305321;

	t88 = ((x353&(x354<=x355))+x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	static volatile uint64_t x358 = 9955773774007837LLU;
	uint8_t x359 = 6U;
	int64_t x360 = 13676128LL;
	int64_t t89 = -1719709LL;

	t89 = ((x357&(x358<=x359))+x360);

	if (t89 != 13676128LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile uint32_t x362 = 466157197U;
	int32_t x363 = INT32_MIN;
	static uint8_t x364 = 0U;

	t90 = ((x361&(x362<=x363))+x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 155028392;
	int32_t x366 = -1;
	volatile int16_t x367 = 24;
	int64_t x368 = INT64_MAX;
	int64_t t91 = INT64_MAX;

	t91 = ((x365&(x366<=x367))+x368);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = 99862433;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 7;

	t92 = ((x369&(x370<=x371))+x372);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -3LL;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 21U;
	int32_t t93 = -4607190;

	t93 = ((x373&(x374<=x375))+x376);

	if (t93 != 21) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile int64_t x378 = INT64_MAX;
	uint8_t x379 = 3U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -1613822;

	t94 = ((x377&(x378<=x379))+x380);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	static volatile int32_t x383 = -1;
	volatile int32_t t95 = -28349;

	t95 = ((x381&(x382<=x383))+x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x386 = -17323LL;
	int64_t x387 = INT64_MIN;
	static volatile int16_t x388 = 4;
	int32_t t96 = -1;

	t96 = ((x385&(x386<=x387))+x388);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x389 = 1423087065U;
	volatile int8_t x390 = INT8_MIN;
	static volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	uint32_t t97 = 30653873U;

	t97 = ((x389&(x390<=x391))+x392);

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	static int64_t x395 = 1386LL;
	volatile int16_t x396 = -42;

	t98 = ((x393&(x394<=x395))+x396);

	if (t98 != -42LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MAX;
	uint32_t x400 = UINT32_MAX;

	t99 = ((x397&(x398<=x399))+x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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


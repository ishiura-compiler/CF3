#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 1U;
volatile uint64_t t3 = 16118871094595200LLU;
int16_t x17 = INT16_MIN;
int64_t x19 = -1LL;
static int32_t x21 = 282199920;
int32_t t6 = 8959;
uint16_t x33 = UINT16_MAX;
static int16_t x36 = INT16_MIN;
int32_t t8 = -108629721;
int16_t x43 = -1;
uint32_t x47 = UINT32_MAX;
uint32_t x67 = 83441168U;
int16_t x68 = INT16_MIN;
int16_t x76 = INT16_MIN;
volatile uint64_t x79 = 5530294697000LLU;
int16_t x82 = INT16_MIN;
static volatile int16_t x83 = INT16_MIN;
volatile int32_t t19 = -123195;
volatile int32_t x96 = -1;
uint32_t x104 = 0U;
volatile int32_t x109 = -1;
int64_t x111 = INT64_MAX;
int32_t x114 = 1376;
static uint16_t x116 = 3711U;
volatile int16_t x121 = -46;
int64_t x122 = 134113886107702LL;
static volatile int64_t x131 = -89LL;
volatile int64_t x132 = -1LL;
static uint64_t x141 = 8053LLU;
uint64_t x147 = 375492631859LLU;
volatile uint64_t x148 = 25LLU;
int64_t x149 = -1LL;
volatile int16_t x152 = -1;
static volatile uint8_t x159 = 25U;
static int32_t t37 = 2012;
int16_t x162 = 5;
int8_t x163 = INT8_MIN;
volatile int16_t x164 = 4248;
uint64_t x169 = UINT64_MAX;
int8_t x173 = INT8_MIN;
int64_t x176 = INT64_MAX;
int32_t x178 = -1;
uint32_t x182 = 11201U;
int8_t x183 = INT8_MAX;
int32_t t43 = -6;
static int32_t t45 = -1;
volatile uint64_t t48 = 398792655LLU;
static int64_t x205 = INT64_MAX;
uint8_t x223 = 2U;
int16_t x234 = INT16_MIN;
int64_t x235 = 69368175557556030LL;
volatile uint32_t t55 = 74U;
int64_t x246 = INT64_MIN;
int8_t x248 = -1;
int8_t x249 = -1;
int32_t x254 = -57205777;
volatile int8_t x255 = -26;
volatile int32_t x257 = -1;
int16_t x261 = INT16_MIN;
int64_t x262 = INT64_MAX;
int32_t t65 = -300506;
uint16_t x282 = 1U;
volatile int32_t t66 = 8750530;
volatile int32_t t67 = 399637551;
uint32_t x292 = 389799823U;
static uint16_t x295 = 9760U;
int32_t x299 = -1;
volatile uint64_t x304 = 2999LLU;
uint8_t x319 = 11U;
int32_t x327 = INT32_MIN;
static int32_t x331 = -1;
volatile int32_t t77 = -2078323;
int32_t x334 = -106720455;
int32_t t78 = 14653;
static int16_t x347 = 37;
int16_t x352 = -1;
int16_t x366 = INT16_MAX;
volatile int32_t t84 = 0;
int64_t x370 = INT64_MIN;
int16_t x372 = -5;
uint8_t x376 = 32U;
volatile int32_t x378 = 298380134;
int32_t x379 = 36;
uint32_t x382 = UINT32_MAX;
volatile int32_t x394 = INT32_MAX;
int64_t x400 = INT64_MAX;
static volatile int16_t x406 = -1;
int32_t x407 = INT32_MIN;
int32_t t93 = 62772;
int32_t x413 = INT32_MAX;
volatile int32_t t96 = -94886;
static volatile int8_t x425 = INT8_MIN;
int16_t x431 = -2011;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 2U;
	static int32_t t0 = -6075;

	t0 = ((x1==(x2==x3))-x4);

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 9746U;
	int32_t x6 = INT32_MAX;
	static int32_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 10295390;

	t1 = ((x5==(x6==x7))-x8);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 117U;
	uint32_t x10 = 661890232U;
	int8_t x12 = -1;
	static volatile int32_t t2 = 272;

	t2 = ((x9==(x10==x11))-x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MAX;
	int32_t x15 = -1;
	uint64_t x16 = UINT64_MAX;

	t3 = ((x13==(x14==x15))-x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 1U;
	volatile int64_t x20 = INT64_MAX;
	int64_t t4 = -980504344680LL;

	t4 = ((x17==(x18==x19))-x20);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 0;
	volatile uint64_t x23 = 226270800184LLU;
	int64_t x24 = -738390474735LL;
	int64_t t5 = 3726853772699053LL;

	t5 = ((x21==(x22==x23))-x24);

	if (t5 != 738390474735LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 332159984088LL;
	int16_t x26 = 2;
	int16_t x27 = -1;
	int32_t x28 = INT32_MAX;

	t6 = ((x25==(x26==x27))-x28);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int32_t x30 = 179587025;
	int64_t x31 = -1096821647773LL;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = -67660005483LL;

	t7 = ((x29==(x30==x31))-x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 228874806204635793LLU;
	uint16_t x35 = UINT16_MAX;

	t8 = ((x33==(x34==x35))-x36);

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 5170U;
	uint32_t x38 = 168827U;
	static volatile int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = 23348196;

	t9 = ((x37==(x38==x39))-x40);

	if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = -4335630863485887864LL;
	static int32_t x44 = 987058;
	int32_t t10 = -16148526;

	t10 = ((x41==(x42==x43))-x44);

	if (t10 != -987058) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint16_t x46 = 19878U;
	static int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -2021;

	t11 = ((x45==(x46==x47))-x48);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int64_t x50 = -26559LL;
	int64_t x51 = 1LL;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -335001588;

	t12 = ((x49==(x50==x51))-x52);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	static int8_t x54 = 33;
	static uint64_t x55 = 38741019621LLU;
	int16_t x56 = -1;
	volatile int32_t t13 = 6;

	t13 = ((x53==(x54==x55))-x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	uint16_t x58 = 4U;
	volatile int64_t x59 = INT64_MIN;
	static uint8_t x60 = UINT8_MAX;
	static volatile int32_t t14 = 42133045;

	t14 = ((x57==(x58==x59))-x60);

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 45U;
	int32_t x62 = -67623;
	int16_t x63 = 44;
	uint32_t x64 = 2048U;
	uint32_t t15 = 371U;

	t15 = ((x61==(x62==x63))-x64);

	if (t15 != 4294965248U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	uint16_t x66 = 30279U;
	int32_t t16 = -59;

	t16 = ((x65==(x66==x67))-x68);

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 0;
	volatile int32_t x74 = -73;
	int32_t x75 = INT32_MAX;
	volatile int32_t t17 = 15;

	t17 = ((x73==(x74==x75))-x76);

	if (t17 != 32769) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	uint16_t x78 = 885U;
	int8_t x80 = INT8_MAX;
	int32_t t18 = -1;

	t18 = ((x77==(x78==x79))-x80);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 734U;
	uint8_t x84 = 0U;

	t19 = ((x81==(x82==x83))-x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = 1;
	int32_t x86 = -1349976;
	static int32_t x87 = 2;
	volatile int64_t x88 = -2057043LL;
	static volatile int64_t t20 = 339178070314114465LL;

	t20 = ((x85==(x86==x87))-x88);

	if (t20 != 2057043LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	volatile int64_t x90 = INT64_MAX;
	static volatile int64_t x91 = INT64_MIN;
	volatile uint16_t x92 = 5U;
	static int32_t t21 = -88;

	t21 = ((x89==(x90==x91))-x92);

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	static volatile int32_t t22 = -1;

	t22 = ((x93==(x94==x95))-x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MAX;
	uint64_t x98 = 90571069850324LLU;
	uint32_t x99 = 12396858U;
	int32_t x100 = -1;
	int32_t t23 = -2073460;

	t23 = ((x97==(x98==x99))-x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 7U;
	uint16_t x102 = UINT16_MAX;
	static uint32_t x103 = 16937131U;
	volatile uint32_t t24 = 712527497U;

	t24 = ((x101==(x102==x103))-x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 560LL;
	int16_t x106 = -1;
	uint64_t x107 = 3803016578LLU;
	int8_t x108 = INT8_MAX;
	volatile int32_t t25 = 5426446;

	t25 = ((x105==(x106==x107))-x108);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x110 = INT16_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t26 = 212805203;

	t26 = ((x109==(x110==x111))-x112);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 0U;
	volatile int64_t x115 = INT64_MIN;
	volatile int32_t t27 = 52270;

	t27 = ((x113==(x114==x115))-x116);

	if (t27 != -3710) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1569;
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t28 = -395072491;

	t28 = ((x117==(x118==x119))-x120);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x123 = INT32_MIN;
	uint16_t x124 = UINT16_MAX;
	static volatile int32_t t29 = -1026;

	t29 = ((x121==(x122==x123))-x124);

	if (t29 != -65535) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	int64_t x130 = INT64_MIN;
	volatile int64_t t30 = -1455533771043743251LL;

	t30 = ((x129==(x130==x131))-x132);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x133 = 98080395336LLU;
	uint32_t x134 = 149329U;
	volatile int8_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t31 = 27;

	t31 = ((x133==(x134==x135))-x136);

	if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 33;
	int32_t t32 = 0;

	t32 = ((x137==(x138==x139))-x140);

	if (t32 != -33) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = 1063;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t33 = -1;

	t33 = ((x141==(x142==x143))-x144);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 13U;
	int64_t x146 = INT64_MIN;
	volatile uint64_t t34 = 16203924249185LLU;

	t34 = ((x145==(x146==x147))-x148);

	if (t34 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = -1;
	volatile int64_t x151 = INT64_MIN;
	volatile int32_t t35 = -358339;

	t35 = ((x149==(x150==x151))-x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = 4886842LL;
	volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 7LLU;
	volatile uint64_t t36 = 66814619570463852LLU;

	t36 = ((x153==(x154==x155))-x156);

	if (t36 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = 1966016U;
	uint16_t x158 = UINT16_MAX;
	int8_t x160 = INT8_MIN;

	t37 = ((x157==(x158==x159))-x160);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 0;
	volatile int32_t t38 = 0;

	t38 = ((x161==(x162==x163))-x164);

	if (t38 != -4247) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x165 = INT64_MIN;
	uint8_t x166 = 8U;
	uint32_t x167 = 2879939U;
	int16_t x168 = -1;
	volatile int32_t t39 = 7673;

	t39 = ((x165==(x166==x167))-x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = 61U;
	static uint64_t x171 = 87808707LLU;
	static uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t40 = 2103408LLU;

	t40 = ((x169==(x170==x171))-x172);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MAX;
	volatile int64_t t41 = -15348355478LL;

	t41 = ((x173==(x174==x175))-x176);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 0;
	int32_t x179 = -16912;
	uint8_t x180 = 42U;
	int32_t t42 = -5;

	t42 = ((x177==(x178==x179))-x180);

	if (t42 != -41) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MAX;
	volatile int8_t x184 = -1;

	t43 = ((x181==(x182==x183))-x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 0U;
	static int64_t x186 = INT64_MIN;
	static uint8_t x187 = UINT8_MAX;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t44 = 559940;

	t44 = ((x185==(x186==x187))-x188);

	if (t44 != 129) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = UINT8_MAX;
	static int32_t x190 = INT32_MIN;
	volatile int16_t x191 = INT16_MIN;
	int8_t x192 = -16;

	t45 = ((x189==(x190==x191))-x192);

	if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -1;
	volatile int16_t x194 = -1;
	int32_t x195 = -1;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t46 = -1;

	t46 = ((x193==(x194==x195))-x196);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x198 = -1LL;
	int64_t x199 = INT64_MIN;
	int64_t x200 = 4875221LL;
	volatile int64_t t47 = -3984LL;

	t47 = ((x197==(x198==x199))-x200);

	if (t47 != -4875221LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = 7;
	static int16_t x203 = -1;
	uint64_t x204 = 3010LLU;

	t48 = ((x201==(x202==x203))-x204);

	if (t48 != 18446744073709548606LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = 19208182;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t49 = -43430;

	t49 = ((x205==(x206==x207))-x208);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = INT32_MIN;
	volatile int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = 558U;
	volatile int32_t t50 = 1;

	t50 = ((x209==(x210==x211))-x212);

	if (t50 != -558) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 1U;
	uint16_t x218 = 988U;
	volatile int32_t x219 = -81;
	volatile int16_t x220 = -1;
	int32_t t51 = -68385540;

	t51 = ((x217==(x218==x219))-x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MAX;
	uint64_t x224 = 521236363588LLU;
	volatile uint64_t t52 = 4446738531779365LLU;

	t52 = ((x221==(x222==x223))-x224);

	if (t52 != 18446743552473188028LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x229 = 4U;
	uint64_t x230 = 83347276625LLU;
	int64_t x231 = 72LL;
	int8_t x232 = 0;
	volatile int32_t t53 = 146669;

	t53 = ((x229==(x230==x231))-x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x233 = 117256LLU;
	static int16_t x236 = -1;
	volatile int32_t t54 = -400;

	t54 = ((x233==(x234==x235))-x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 10U;
	int32_t x238 = -1;
	static int32_t x239 = INT32_MIN;
	uint32_t x240 = 58039U;

	t55 = ((x237==(x238==x239))-x240);

	if (t55 != 4294909257U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = 350767886094453967LLU;
	int8_t x242 = -1;
	volatile int16_t x243 = INT16_MIN;
	uint16_t x244 = 3723U;
	volatile int32_t t56 = -1643;

	t56 = ((x241==(x242==x243))-x244);

	if (t56 != -3723) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	static int8_t x247 = -1;
	volatile int32_t t57 = -13;

	t57 = ((x245==(x246==x247))-x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x250 = -1;
	int64_t x251 = -1LL;
	static int16_t x252 = -58;
	int32_t t58 = -409122;

	t58 = ((x249==(x250==x251))-x252);

	if (t58 != 58) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x253 = INT32_MAX;
	volatile int64_t x256 = 179LL;
	int64_t t59 = 401252516LL;

	t59 = ((x253==(x254==x255))-x256);

	if (t59 != -179LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 12LLU;
	uint8_t x260 = 1U;
	static volatile int32_t t60 = -7;

	t60 = ((x257==(x258==x259))-x260);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x263 = 108;
	int8_t x264 = INT8_MIN;
	volatile int32_t t61 = -518433;

	t61 = ((x261==(x262==x263))-x264);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x265 = INT16_MIN;
	static int32_t x266 = INT32_MAX;
	uint32_t x267 = 29U;
	int8_t x268 = 29;
	volatile int32_t t62 = -1;

	t62 = ((x265==(x266==x267))-x268);

	if (t62 != -29) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -24;
	int32_t x270 = INT32_MIN;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = -615897LL;
	volatile int64_t t63 = 355LL;

	t63 = ((x269==(x270==x271))-x272);

	if (t63 != 615897LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	static volatile int8_t x276 = 0;
	int32_t t64 = -1;

	t64 = ((x273==(x274==x275))-x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MAX;
	volatile int32_t x278 = 119382;
	static int8_t x279 = INT8_MAX;
	int16_t x280 = -212;

	t65 = ((x277==(x278==x279))-x280);

	if (t65 != 212) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = 14271;
	volatile uint16_t x283 = 21023U;
	int16_t x284 = INT16_MIN;

	t66 = ((x281==(x282==x283))-x284);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 38751309640143LLU;
	int32_t x287 = -1;
	int8_t x288 = INT8_MIN;

	t67 = ((x285==(x286==x287))-x288);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -197076LL;
	int32_t x290 = -184604;
	uint32_t x291 = 7255U;
	static volatile uint32_t t68 = 193U;

	t68 = ((x289==(x290==x291))-x292);

	if (t68 != 3905167473U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = 2U;
	static volatile uint64_t x294 = UINT64_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t69 = -34526009;

	t69 = ((x293==(x294==x295))-x296);

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static int8_t x298 = INT8_MIN;
	int32_t x300 = -2790;
	int32_t t70 = 901;

	t70 = ((x297==(x298==x299))-x300);

	if (t70 != 2790) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x301 = 5414652771718LLU;
	int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MIN;
	uint64_t t71 = 1522383009LLU;

	t71 = ((x301==(x302==x303))-x304);

	if (t71 != 18446744073709548617LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = INT16_MIN;
	static int64_t x306 = -9003302782917692LL;
	volatile uint16_t x307 = 3U;
	int64_t x308 = -113861873401313LL;
	int64_t t72 = 1701266907772684514LL;

	t72 = ((x305==(x306==x307))-x308);

	if (t72 != 113861873401313LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 19U;
	int32_t x310 = INT32_MAX;
	uint32_t x311 = 12U;
	static uint8_t x312 = 0U;
	volatile int32_t t73 = 2298;

	t73 = ((x309==(x310==x311))-x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x313 = 7U;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = -1;
	volatile uint8_t x316 = UINT8_MAX;
	static int32_t t74 = 1493380;

	t74 = ((x313==(x314==x315))-x316);

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	volatile int8_t x318 = -1;
	int8_t x320 = -5;
	int32_t t75 = 505595540;

	t75 = ((x317==(x318==x319))-x320);

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = -1;
	uint8_t x328 = 43U;
	volatile int32_t t76 = -93627949;

	t76 = ((x325==(x326==x327))-x328);

	if (t76 != -43) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 20547U;
	static volatile uint16_t x330 = 1725U;
	static uint8_t x332 = 64U;

	t77 = ((x329==(x330==x331))-x332);

	if (t77 != -64) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x333 = 157164787U;
	int32_t x335 = INT32_MIN;
	volatile uint8_t x336 = 47U;

	t78 = ((x333==(x334==x335))-x336);

	if (t78 != -47) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -20;
	int32_t t79 = -66;

	t79 = ((x337==(x338==x339))-x340);

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x341 = 708679742332LLU;
	static int8_t x342 = INT8_MAX;
	int32_t x343 = -14902099;
	uint8_t x344 = 6U;
	int32_t t80 = -17;

	t80 = ((x341==(x342==x343))-x344);

	if (t80 != -6) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = UINT64_MAX;
	static int8_t x346 = INT8_MIN;
	int16_t x348 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x345==(x346==x347))-x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MAX;
	static int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	int32_t t82 = -7;

	t82 = ((x349==(x350==x351))-x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MAX;
	int32_t x363 = 341515;
	int8_t x364 = 15;
	int32_t t83 = -7079;

	t83 = ((x361==(x362==x363))-x364);

	if (t83 != -15) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x365 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;

	t84 = ((x365==(x366==x367))-x368);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = INT64_MIN;
	uint32_t x371 = 9425470U;
	volatile int32_t t85 = 240876189;

	t85 = ((x369==(x370==x371))-x372);

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MAX;
	static int16_t x375 = INT16_MAX;
	static volatile int32_t t86 = 237952;

	t86 = ((x373==(x374==x375))-x376);

	if (t86 != -32) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x377 = INT16_MIN;
	int64_t x380 = -144656420896868LL;
	static volatile int64_t t87 = -69062668231945LL;

	t87 = ((x377==(x378==x379))-x380);

	if (t87 != 144656420896868LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x381 = 3;
	static int32_t x383 = INT32_MIN;
	int64_t x384 = -1LL;
	int64_t t88 = 5585609916LL;

	t88 = ((x381==(x382==x383))-x384);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = 18379LL;
	volatile int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t89 = 62576684707LL;

	t89 = ((x385==(x386==x387))-x388);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = 18734LL;
	int32_t x390 = -2;
	uint8_t x391 = UINT8_MAX;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t90 = -150;

	t90 = ((x389==(x390==x391))-x392);

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = 0;
	int16_t x395 = INT16_MAX;
	static int8_t x396 = -4;
	int32_t t91 = -23;

	t91 = ((x393==(x394==x395))-x396);

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x397 = 12306LLU;
	static int32_t x398 = -16357330;
	int32_t x399 = 419570;
	volatile int64_t t92 = -755997LL;

	t92 = ((x397==(x398==x399))-x400);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = INT64_MIN;
	int8_t x408 = -1;

	t93 = ((x405==(x406==x407))-x408);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x409 = INT8_MIN;
	static volatile uint64_t x410 = 121305240156LLU;
	int64_t x411 = -1LL;
	uint16_t x412 = 12386U;
	int32_t t94 = -16279206;

	t94 = ((x409==(x410==x411))-x412);

	if (t94 != -12386) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = -34;
	uint16_t x416 = 5U;
	int32_t t95 = -2;

	t95 = ((x413==(x414==x415))-x416);

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = -1LL;
	volatile int64_t x418 = 16558LL;
	int16_t x419 = INT16_MIN;
	int8_t x420 = -3;

	t96 = ((x417==(x418==x419))-x420);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = -1;
	static uint32_t x423 = UINT32_MAX;
	uint16_t x424 = 23321U;
	static volatile int32_t t97 = -22;

	t97 = ((x421==(x422==x423))-x424);

	if (t97 != -23321) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x426 = 0U;
	int64_t x427 = -350545970LL;
	static volatile uint64_t x428 = 245113760686706626LLU;
	uint64_t t98 = 76631085358631396LLU;

	t98 = ((x425==(x426==x427))-x428);

	if (t98 != 18201630313022844990LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -33;
	volatile int64_t x430 = 2LL;
	static uint64_t x432 = 1LLU;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x429==(x430==x431))-x432);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


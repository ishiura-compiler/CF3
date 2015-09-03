#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1701U;
uint32_t x3 = 4286041U;
int8_t x14 = 11;
int32_t x16 = INT32_MAX;
volatile int64_t x20 = INT64_MAX;
volatile int32_t t6 = -2881;
volatile int64_t t7 = 225683LL;
int64_t t8 = 3033LL;
uint64_t x37 = 2718879LLU;
static uint64_t x38 = 1953LLU;
int64_t x41 = 19672323405LL;
static volatile uint16_t x45 = UINT16_MAX;
volatile int16_t x46 = -1;
int32_t t11 = 1;
int32_t t12 = 39331;
volatile int32_t x53 = 124963;
uint16_t x66 = 12U;
static int16_t x68 = 3;
int8_t x71 = 0;
uint64_t x77 = 63552924798540LLU;
static int8_t x80 = INT8_MAX;
static volatile uint64_t t19 = 214055265326LLU;
static volatile int16_t x83 = 7;
volatile int32_t t20 = 1719;
volatile uint16_t x86 = 0U;
uint64_t x92 = 217780LLU;
int32_t x95 = INT32_MAX;
volatile int32_t x96 = -1;
int32_t x98 = -1;
uint64_t t24 = 64990774178775LLU;
int32_t x102 = 0;
static int32_t x110 = -1;
volatile int8_t x111 = INT8_MIN;
int32_t x112 = -1;
uint64_t x118 = 947176253611631615LLU;
static volatile uint16_t x119 = 0U;
int64_t x120 = -6LL;
static int32_t x122 = -12;
volatile int32_t t31 = -2488;
volatile int64_t t32 = -233704377050321616LL;
int8_t x143 = 1;
int32_t x144 = -1;
int16_t x148 = -1;
volatile int32_t t36 = 98227449;
static int16_t x151 = 12;
static volatile int32_t x154 = INT32_MAX;
int64_t x168 = -1LL;
uint8_t x173 = 5U;
volatile int64_t x178 = INT64_MIN;
int16_t x180 = -1;
static int64_t t44 = -1027217880224LL;
int64_t x181 = 19292242687115LL;
uint32_t x185 = 2250U;
uint8_t x186 = 73U;
volatile uint32_t x187 = 2U;
uint8_t x193 = 2U;
volatile int16_t x194 = INT16_MIN;
uint16_t x198 = 515U;
static uint32_t x202 = 15700U;
static volatile uint64_t t50 = 195LLU;
int32_t x206 = 3524;
static int8_t x208 = 30;
uint8_t x212 = UINT8_MAX;
uint16_t x213 = 344U;
static int64_t t55 = -284LL;
volatile uint64_t x227 = 4460LLU;
uint64_t t56 = 47331192LLU;
int32_t x229 = -1;
static int64_t x230 = -128520766592524LL;
uint64_t x242 = 49691304LLU;
uint32_t x244 = UINT32_MAX;
int8_t x247 = -1;
int16_t x248 = 74;
int8_t x254 = INT8_MAX;
uint32_t t63 = 32154111U;
static uint64_t t65 = UINT64_MAX;
volatile int8_t x272 = INT8_MIN;
int16_t x274 = -64;
volatile int64_t x275 = INT64_MIN;
static int16_t x276 = -1;
volatile int64_t t68 = -1LL;
int64_t x279 = -1LL;
uint32_t x280 = 341991U;
int16_t x281 = -1;
int64_t t70 = 17817259353LL;
static volatile int32_t x286 = 113980626;
int32_t x287 = INT32_MAX;
volatile uint32_t x291 = 15978U;
volatile int64_t t72 = -294897LL;
int64_t x295 = INT64_MAX;
int64_t t73 = 1LL;
static int64_t x299 = INT64_MIN;
int8_t x300 = INT8_MIN;
int64_t t74 = -1334LL;
int64_t x303 = INT64_MAX;
static int64_t t75 = -12081705LL;
uint16_t x305 = UINT16_MAX;
int16_t x315 = -1;
volatile int64_t x319 = -52LL;
volatile int64_t t79 = -10056580617LL;
static int64_t x326 = INT64_MIN;
uint64_t x330 = 20589154LLU;
volatile uint64_t x332 = 3405883LLU;
uint64_t t82 = 5750963447024520LLU;
volatile int64_t x333 = INT64_MAX;
uint64_t x334 = 47419122LLU;
int16_t x335 = -15;
uint64_t t83 = 164436112874LLU;
int16_t x343 = -1;
int64_t t85 = -8083LL;
static uint64_t x345 = 6336609689342947056LLU;
int16_t x349 = 8155;
int8_t x356 = -1;
static int64_t x358 = INT64_MAX;
volatile int64_t t90 = -1LL;
volatile int64_t t91 = 648028191208557677LL;
int16_t x371 = 139;
uint16_t x376 = 5U;
volatile int8_t x382 = 52;
int64_t x389 = INT64_MIN;
int32_t x391 = INT32_MIN;
static int64_t t97 = 48023080252091903LL;
uint8_t x397 = UINT8_MAX;
uint16_t x398 = 106U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x4 = INT64_MAX;
	int64_t t0 = INT64_MAX;

	t0 = (((x1&x2)^x3)|x4);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1771550LLU;
	volatile int64_t x6 = 286LL;
	static int64_t x7 = -1332095324932LL;
	volatile int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 405107264760LLU;

	t1 = (((x5&x6)^x7)|x8);

	if (t1 != 18446744073709546722LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static int16_t x10 = INT16_MIN;
	volatile int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	volatile int64_t t2 = INT64_MAX;

	t2 = (((x9&x10)^x11)|x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 436;
	uint16_t x15 = 24U;
	int32_t t3 = INT32_MAX;

	t3 = (((x13&x14)^x15)|x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1284U;
	volatile int16_t x18 = INT16_MIN;
	volatile int64_t x19 = 14790LL;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x17&x18)^x19)|x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -1LL;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 73U;
	static volatile int64_t t5 = -12638106468LL;

	t5 = (((x21&x22)^x23)|x24);

	if (t5 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	static int32_t x26 = -495184086;
	uint16_t x27 = 23835U;
	int16_t x28 = INT16_MIN;

	t6 = (((x25&x26)^x27)|x28);

	if (t6 != -13775) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint32_t x30 = 223084U;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;

	t7 = (((x29&x30)^x31)|x32);

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int64_t x34 = INT64_MIN;
	volatile uint8_t x35 = 3U;
	int16_t x36 = INT16_MIN;

	t8 = (((x33&x34)^x35)|x36);

	if (t8 != -32765LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = 166517993U;
	static uint8_t x40 = 1U;
	uint64_t t9 = 4630762958LLU;

	t9 = (((x37&x38)^x39)|x40);

	if (t9 != 166516841LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = 205383;
	int16_t x43 = INT16_MIN;
	static int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -283876017LL;

	t10 = (((x41&x42)^x43)|x44);

	if (t10 != -229307LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x47 = 370U;
	int32_t x48 = 1;

	t11 = (((x45&x46)^x47)|x48);

	if (t11 != 65165) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -55;
	static int8_t x50 = INT8_MIN;
	static volatile int8_t x51 = 9;
	int8_t x52 = INT8_MIN;

	t12 = (((x49&x50)^x51)|x52);

	if (t12 != -119) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 36089586U;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	uint32_t t13 = UINT32_MAX;

	t13 = (((x53&x54)^x55)|x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MIN;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = -1;
	int64_t t14 = -1930214366666LL;

	t14 = (((x57&x58)^x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -216;
	int8_t x62 = INT8_MAX;
	uint32_t x63 = UINT32_MAX;
	volatile int64_t x64 = INT64_MIN;
	int64_t t15 = -822706444670586529LL;

	t15 = (((x61&x62)^x63)|x64);

	if (t15 != -9223372032559808553LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 8672505306058487LLU;
	volatile int16_t x67 = -1;
	static volatile uint64_t t16 = 866351LLU;

	t16 = (((x65&x66)^x67)|x68);

	if (t16 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MAX;
	uint8_t x70 = 0U;
	volatile int16_t x72 = INT16_MIN;
	static volatile int64_t t17 = -3495719896574LL;

	t17 = (((x69&x70)^x71)|x72);

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 29;
	volatile int8_t x74 = INT8_MIN;
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -9423673;

	t18 = (((x73&x74)^x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 111738827848LLU;
	int64_t x79 = INT64_MIN;

	t19 = (((x77&x78)^x79)|x80);

	if (t19 != 9223372071214580863LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 32U;
	int16_t x82 = -1;
	int16_t x84 = INT16_MIN;

	t20 = (((x81&x82)^x83)|x84);

	if (t20 != -32729) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -3664096;
	int32_t x87 = -7;
	uint8_t x88 = 5U;
	static volatile int32_t t21 = -28126109;

	t21 = (((x85&x86)^x87)|x88);

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 2U;
	int16_t x90 = 0;
	int64_t x91 = -229662942LL;
	static uint64_t t22 = 10LLU;

	t22 = (((x89&x90)^x91)|x92);

	if (t22 != 18446744073479905206LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	volatile int64_t t23 = -15566LL;

	t23 = (((x93&x94)^x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 8776U;
	static uint64_t x99 = 267365489LLU;
	int8_t x100 = INT8_MIN;

	t24 = (((x97&x98)^x99)|x100);

	if (t24 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = 0;
	int8_t x103 = INT8_MIN;
	static uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (((x101&x102)^x103)|x104);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile uint16_t x106 = 7732U;
	volatile int32_t x107 = INT32_MIN;
	static int32_t x108 = INT32_MIN;
	uint32_t t26 = 111662904U;

	t26 = (((x105&x106)^x107)|x108);

	if (t26 != 2147491380U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1222U;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (((x109&x110)^x111)|x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	uint32_t x114 = 1192068549U;
	int32_t x115 = -1;
	volatile uint32_t x116 = 47880U;
	static volatile uint32_t t28 = 547358U;

	t28 = (((x113&x114)^x115)|x116);

	if (t28 != 3102932991U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 1U;
	uint64_t t29 = 134691714844462LLU;

	t29 = (((x117&x118)^x119)|x120);

	if (t29 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	static uint32_t x123 = UINT32_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile uint32_t t30 = 582U;

	t30 = (((x121&x122)^x123)|x124);

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	static volatile int16_t x126 = 0;
	static int32_t x127 = 222739;
	uint8_t x128 = UINT8_MAX;

	t31 = (((x125&x126)^x127)|x128);

	if (t31 != 222975) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 99LL;
	volatile int16_t x130 = 0;
	int16_t x131 = -10;
	uint32_t x132 = 1731826U;

	t32 = (((x129&x130)^x131)|x132);

	if (t32 != -10LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 14749;
	static int64_t x134 = -183246173104458849LL;
	static uint16_t x135 = 3U;
	int8_t x136 = 8;
	static int64_t t33 = -58204815LL;

	t33 = (((x133&x134)^x135)|x136);

	if (t33 != 12702LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 10886U;
	int8_t x138 = 0;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 1U;
	uint32_t t34 = 14U;

	t34 = (((x137&x138)^x139)|x140);

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x141&x142)^x143)|x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	volatile uint8_t x147 = UINT8_MAX;

	t36 = (((x145&x146)^x147)|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 523432929LL;
	int8_t x150 = 44;
	static uint8_t x152 = 35U;
	volatile int64_t t37 = 8LL;

	t37 = (((x149&x150)^x151)|x152);

	if (t37 != 47LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static uint32_t x155 = 6U;
	static uint32_t x156 = UINT32_MAX;
	static volatile int64_t t38 = -47LL;

	t38 = (((x153&x154)^x155)|x156);

	if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 60U;
	volatile uint16_t x158 = 54U;
	volatile uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 2993U;
	volatile uint32_t t39 = 5406197U;

	t39 = (((x157&x158)^x159)|x160);

	if (t39 != 4294967291U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1018U;
	int16_t x162 = INT16_MAX;
	int16_t x163 = -93;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = 0;

	t40 = (((x161&x162)^x163)|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -4;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MIN;
	int64_t t41 = -923139LL;

	t41 = (((x165&x166)^x167)|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint32_t x170 = 5722U;
	uint16_t x171 = 27096U;
	int8_t x172 = -1;
	uint32_t t42 = UINT32_MAX;

	t42 = (((x169&x170)^x171)|x172);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MAX;
	int64_t x175 = -386536827699202LL;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t43 = 212LL;

	t43 = (((x173&x174)^x175)|x176);

	if (t43 != -386536827699205LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -502859225442LL;
	volatile int8_t x179 = 8;

	t44 = (((x177&x178)^x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -1;
	volatile int32_t x183 = -4;
	volatile int16_t x184 = 1;
	volatile int64_t t45 = 2630675251433315455LL;

	t45 = (((x181&x182)^x183)|x184);

	if (t45 != -19292242687113LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x188 = INT8_MIN;
	static volatile uint32_t t46 = 49480U;

	t46 = (((x185&x186)^x187)|x188);

	if (t46 != 4294967242U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 6U;
	static int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	static uint32_t x192 = 221U;
	volatile int64_t t47 = INT64_MAX;

	t47 = (((x189&x190)^x191)|x192);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x195 = 47U;
	volatile int8_t x196 = -1;
	int32_t t48 = 31;

	t48 = (((x193&x194)^x195)|x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	static int32_t x199 = INT32_MAX;
	static int8_t x200 = -20;
	volatile int32_t t49 = -12;

	t49 = (((x197&x198)^x199)|x200);

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 5U;
	int8_t x203 = -1;
	uint64_t x204 = 164201269LLU;

	t50 = (((x201&x202)^x203)|x204);

	if (t50 != 4294967295LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -28;
	static volatile uint32_t x207 = 188021U;
	static uint32_t t51 = 415956U;

	t51 = (((x205&x206)^x207)|x208);

	if (t51 != 185279U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 582U;
	static uint32_t x210 = 1542391153U;
	uint16_t x211 = 786U;
	uint32_t t52 = 582393387U;

	t52 = (((x209&x210)^x211)|x212);

	if (t52 != 1023U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x214 = -6;
	uint32_t x215 = 178U;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t53 = 0U;

	t53 = (((x213&x214)^x215)|x216);

	if (t53 != 2147484138U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 117U;
	volatile int8_t x218 = 25;
	uint16_t x219 = 1U;
	volatile int64_t x220 = 160374397654960LL;
	static volatile int64_t t54 = 0LL;

	t54 = (((x217&x218)^x219)|x220);

	if (t54 != 160374397654960LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	static volatile int8_t x222 = 12;
	int16_t x223 = -2196;
	static int64_t x224 = INT64_MIN;

	t55 = (((x221&x222)^x223)|x224);

	if (t55 != -2208LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 239257;
	uint64_t x226 = UINT64_MAX;
	volatile uint32_t x228 = 2505U;

	t56 = (((x225&x226)^x227)|x228);

	if (t56 != 245757LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x231 = 120U;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = -37738912289844LL;

	t57 = (((x229&x230)^x231)|x232);

	if (t57 != -116LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	static uint64_t x236 = 124750LLU;
	uint64_t t58 = 124LLU;

	t58 = (((x233&x234)^x235)|x236);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1017LLU;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 1512548U;
	int16_t x240 = 0;
	static uint64_t t59 = 2730653LLU;

	t59 = (((x237&x238)^x239)|x240);

	if (t59 != 1513373LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int8_t x243 = -1;
	uint64_t t60 = UINT64_MAX;

	t60 = (((x241&x242)^x243)|x244);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 30653LLU;
	int32_t x246 = INT32_MAX;
	static uint64_t t61 = 23LLU;

	t61 = (((x245&x246)^x247)|x248);

	if (t61 != 18446744073709520970LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = -30;
	uint8_t x251 = 22U;
	int32_t x252 = INT32_MIN;
	static int32_t t62 = -11;

	t62 = (((x249&x250)^x251)|x252);

	if (t62 != -2147483404) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 3U;
	uint8_t x255 = 6U;
	int8_t x256 = INT8_MIN;

	t63 = (((x253&x254)^x255)|x256);

	if (t63 != 4294967173U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 21777676634009LLU;
	uint8_t x258 = UINT8_MAX;
	static int64_t x259 = INT64_MIN;
	static uint32_t x260 = UINT32_MAX;
	volatile uint64_t t64 = 112681136LLU;

	t64 = (((x257&x258)^x259)|x260);

	if (t64 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 1700512602993435LLU;
	int64_t x262 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;

	t65 = (((x261&x262)^x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	int32_t x266 = -1;
	uint64_t x267 = 36256603477865LLU;
	static volatile int8_t x268 = INT8_MAX;
	volatile uint64_t t66 = 39171635305LLU;

	t66 = (((x265&x266)^x267)|x268);

	if (t66 != 36256603477887LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	int8_t x270 = INT8_MAX;
	static volatile int32_t x271 = 17;
	static volatile int32_t t67 = -16218;

	t67 = (((x269&x270)^x271)|x272);

	if (t67 != -18) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;

	t68 = (((x273&x274)^x275)|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 1263;
	volatile int32_t x278 = -6386543;
	volatile int64_t t69 = -135271735937LL;

	t69 = (((x277&x278)^x279)|x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -453102LL;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = -308262740LL;

	t70 = (((x281&x282)^x283)|x284);

	if (t70 != -307828290LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 2451376LL;
	int16_t x288 = -29;
	static int64_t t71 = 21696030982207502LL;

	t71 = (((x285&x286)^x287)|x288);

	if (t71 != -17LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -2477917511291322LL;
	volatile int8_t x290 = INT8_MIN;
	int32_t x292 = -1;

	t72 = (((x289&x290)^x291)|x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = INT16_MAX;
	volatile int16_t x296 = INT16_MIN;

	t73 = (((x293&x294)^x295)|x296);

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -18994LL;
	uint8_t x298 = 5U;

	t74 = (((x297&x298)^x299)|x300);

	if (t74 != -124LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	static int64_t x302 = INT64_MIN;
	int32_t x304 = INT32_MIN;

	t75 = (((x301&x302)^x303)|x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x306 = -140042;
	static int16_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x305&x306)^x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 259LL;
	uint16_t x310 = 13U;
	volatile uint64_t x311 = 1LLU;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t77 = 2708419888LLU;

	t77 = (((x309&x310)^x311)|x312);

	if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	static int32_t x316 = -1;
	int64_t t78 = 17LL;

	t78 = (((x313&x314)^x315)|x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	static uint32_t x318 = UINT32_MAX;
	uint16_t x320 = 4U;

	t79 = (((x317&x318)^x319)|x320);

	if (t79 != -52LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = 1544769052000174856LLU;
	static uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile uint64_t t80 = 1850909176253LLU;

	t80 = (((x321&x322)^x323)|x324);

	if (t80 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint32_t x327 = 401506U;
	int64_t x328 = 5LL;
	volatile int64_t t81 = -3552LL;

	t81 = (((x325&x326)^x327)|x328);

	if (t81 != 401511LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int8_t x331 = INT8_MAX;

	t82 = (((x329&x330)^x331)|x332);

	if (t82 != 3405951LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x336 = INT8_MIN;

	t83 = (((x333&x334)^x335)|x336);

	if (t83 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = -34;
	int32_t x340 = -1;
	volatile int32_t t84 = -2;

	t84 = (((x337&x338)^x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -4798LL;
	uint32_t x342 = UINT32_MAX;
	volatile uint16_t x344 = UINT16_MAX;

	t85 = (((x341&x342)^x343)|x344);

	if (t85 != -4294901761LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MAX;
	int16_t x347 = 4864;
	int32_t x348 = -36;
	volatile uint64_t t86 = 921820LLU;

	t86 = (((x345&x346)^x347)|x348);

	if (t86 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = INT64_MIN;
	static uint32_t x351 = 128310762U;
	static int16_t x352 = 6;
	int64_t t87 = -7101865LL;

	t87 = (((x349&x350)^x351)|x352);

	if (t87 != 128310766LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 4U;
	uint8_t x354 = 1U;
	volatile int32_t x355 = 169458305;
	static uint32_t t88 = UINT32_MAX;

	t88 = (((x353&x354)^x355)|x356);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 18;
	uint8_t x359 = UINT8_MAX;
	static uint8_t x360 = 49U;
	volatile int64_t t89 = -1654236LL;

	t89 = (((x357&x358)^x359)|x360);

	if (t89 != 253LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	static int64_t x364 = -1LL;

	t90 = (((x361&x362)^x363)|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 48U;
	uint8_t x367 = 0U;
	int64_t x368 = 222LL;

	t91 = (((x365&x366)^x367)|x368);

	if (t91 != 222LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -273080565624LL;
	uint8_t x370 = UINT8_MAX;
	static int8_t x372 = INT8_MAX;
	volatile int64_t t92 = 1288672762967429874LL;

	t92 = (((x369&x370)^x371)|x372);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	static uint32_t x374 = UINT32_MAX;
	static int32_t x375 = INT32_MIN;
	uint32_t t93 = 2504U;

	t93 = (((x373&x374)^x375)|x376);

	if (t93 != 2147483775U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int32_t x378 = INT32_MIN;
	volatile uint32_t x379 = 48U;
	uint16_t x380 = UINT16_MAX;
	int64_t t94 = -5444853876651LL;

	t94 = (((x377&x378)^x379)|x380);

	if (t94 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x383 = 6797588U;
	int64_t x384 = -1LL;
	int64_t t95 = -1882274462973108LL;

	t95 = (((x381&x382)^x383)|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	static int64_t x387 = -7LL;
	uint64_t x388 = 500958959201596LLU;
	uint64_t t96 = 1LLU;

	t96 = (((x385&x386)^x387)|x388);

	if (t96 != 9223872995813982205LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MIN;
	uint32_t x392 = 685U;

	t97 = (((x389&x390)^x391)|x392);

	if (t97 != 9223372034707292845LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 639129747698079LL;
	volatile uint64_t x394 = 39345681803LLU;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t98 = 36937LLU;

	t98 = (((x393&x394)^x395)|x396);

	if (t98 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = -1;
	uint8_t x400 = 32U;
	int32_t t99 = 30;

	t99 = (((x397&x398)^x399)|x400);

	if (t99 != -75) { NG(); } else { ; }
	
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


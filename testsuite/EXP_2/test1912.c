#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 3U;
int64_t x5 = 30LL;
int16_t x7 = -9880;
int8_t x9 = 11;
static int32_t x11 = 241;
int64_t t3 = 25239649535LL;
int8_t x20 = -7;
static uint32_t x24 = UINT32_MAX;
int16_t x28 = INT16_MIN;
static int8_t x30 = -3;
int16_t x36 = 190;
volatile int32_t x38 = -1;
int32_t x42 = INT32_MIN;
static volatile int32_t t10 = -1819222;
static int32_t x45 = -1;
static volatile uint16_t x46 = 1U;
volatile uint32_t x47 = UINT32_MAX;
volatile int64_t t11 = INT64_MIN;
int16_t x53 = INT16_MIN;
volatile int32_t t14 = 0;
volatile int32_t x61 = INT32_MIN;
int32_t x72 = -918663;
int16_t x75 = 3727;
static int32_t x76 = INT32_MIN;
volatile int64_t t18 = 53306LL;
uint64_t x79 = UINT64_MAX;
int64_t x96 = 273970381260LL;
volatile uint8_t x97 = 5U;
static volatile int64_t t25 = -1981024810498702711LL;
int16_t x105 = -1;
int64_t x108 = -750LL;
volatile uint64_t t26 = 1138646278962139830LLU;
volatile int64_t t27 = 469446452244958LL;
volatile uint64_t t28 = 4024781491256200397LLU;
int16_t x122 = INT16_MIN;
uint32_t t30 = 920U;
int32_t x125 = 333445122;
volatile uint8_t x129 = 77U;
uint16_t x134 = UINT16_MAX;
int16_t x135 = INT16_MIN;
volatile int64_t t34 = 11LL;
int64_t x141 = -267LL;
uint32_t x142 = 121636008U;
int64_t x146 = INT64_MAX;
volatile uint64_t t37 = 214180353LLU;
int8_t x157 = 9;
uint8_t x158 = UINT8_MAX;
uint64_t x159 = UINT64_MAX;
uint64_t t39 = 552LLU;
uint64_t x172 = 10459016789033LLU;
int32_t x174 = INT32_MIN;
uint16_t x177 = UINT16_MAX;
uint64_t x179 = UINT64_MAX;
int16_t x191 = INT16_MIN;
static int16_t x192 = -1;
int32_t x195 = INT32_MIN;
int64_t t48 = 3649LL;
uint64_t t50 = 12540706626LLU;
static volatile uint8_t x211 = UINT8_MAX;
uint64_t x217 = UINT64_MAX;
int32_t x231 = -1;
static int64_t x242 = INT64_MIN;
uint8_t x243 = UINT8_MAX;
int64_t t58 = -33553LL;
int64_t x251 = 6417170563LL;
volatile int32_t x252 = 133525126;
int64_t x259 = INT64_MIN;
static volatile int32_t x264 = -343538;
int8_t x267 = 0;
int8_t x271 = -1;
uint32_t x283 = 56U;
int64_t x284 = 53LL;
static int64_t t68 = -23816405970508808LL;
static int64_t x296 = -12LL;
static int32_t x297 = -5168;
int8_t x298 = INT8_MAX;
int32_t x299 = INT32_MIN;
int64_t x300 = -1LL;
static int16_t x305 = -1;
static int32_t x310 = INT32_MIN;
static volatile int32_t x316 = INT32_MIN;
volatile uint32_t x318 = UINT32_MAX;
volatile int64_t t77 = 406818472901236579LL;
int16_t x334 = INT16_MIN;
int8_t x337 = INT8_MAX;
uint32_t x344 = UINT32_MAX;
uint32_t x346 = 416007633U;
int64_t x351 = INT64_MAX;
int32_t x354 = INT32_MIN;
volatile int64_t t85 = INT64_MAX;
int32_t t86 = 69839928;
static uint32_t x365 = 853U;
uint8_t x368 = 1U;
volatile int8_t x376 = INT8_MIN;
int64_t t92 = -1667021337LL;
int16_t x387 = INT16_MIN;
int32_t t93 = 154;
uint8_t x391 = UINT8_MAX;
uint16_t x396 = 3035U;
static volatile int64_t t95 = -897847LL;
static uint64_t x401 = 896487663LLU;
volatile int64_t x409 = INT64_MAX;
int64_t x410 = INT64_MIN;


void f0(void) {
	int16_t x1 = -103;
	int32_t x2 = -1;
	int64_t x3 = 1971644LL;
	volatile int64_t t0 = -4697489LL;

	t0 = ((x1%(x2|x3))+x4);

	if (t0 != 3LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	static int8_t x8 = 61;
	volatile uint64_t t1 = 133545582445217871LLU;

	t1 = ((x5%(x6|x7))+x8);

	if (t1 != 91LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 28U;
	uint64_t x12 = 5LLU;
	volatile uint64_t t2 = 201563417221859LLU;

	t2 = ((x9%(x10|x11))+x12);

	if (t2 != 16LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 22;
	int64_t x14 = 398996LL;
	volatile int64_t x15 = -1LL;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13%(x14|x15))+x16);

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = 368948;

	t4 = ((x17%(x18|x19))+x20);

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int16_t x22 = -580;
	int8_t x23 = INT8_MAX;
	volatile uint32_t t5 = 15537U;

	t5 = ((x21%(x22|x23))+x24);

	if (t5 != 126U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = 365;
	int32_t x26 = 63;
	static int16_t x27 = -1;
	int32_t t6 = 139714;

	t6 = ((x25%(x26|x27))+x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MAX;
	int64_t t7 = -2835996487LL;

	t7 = ((x29%(x30|x31))+x32);

	if (t7 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -24;
	static int64_t x34 = -1200558859395473391LL;
	uint32_t x35 = 715U;
	static int64_t t8 = 866916LL;

	t8 = ((x33%(x34|x35))+x36);

	if (t8 != 166LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint16_t x39 = 191U;
	int8_t x40 = -29;
	volatile int32_t t9 = -46189;

	t9 = ((x37%(x38|x39))+x40);

	if (t9 != -29) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -11;
	int32_t x43 = INT32_MIN;
	int32_t x44 = 2;

	t10 = ((x41%(x42|x43))+x44);

	if (t10 != -9) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x48 = INT64_MIN;

	t11 = ((x45%(x46|x47))+x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	int8_t x52 = -1;
	int32_t t12 = 49837264;

	t12 = ((x49%(x50|x51))+x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	volatile int32_t x55 = 6;
	static volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = ((x53%(x54|x55))+x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	static uint16_t x59 = UINT16_MAX;
	static int32_t x60 = 11;

	t14 = ((x57%(x58|x59))+x60);

	if (t14 != -117) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = 3005880242995766LL;
	int64_t x63 = -10942790LL;
	int64_t x64 = -1LL;
	volatile int64_t t15 = -2645182263580584LL;

	t15 = ((x61%(x62|x63))+x64);

	if (t15 != -5920939LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	static uint64_t x66 = 39512LLU;
	int16_t x67 = 2702;
	static uint8_t x68 = UINT8_MAX;
	volatile uint64_t t16 = 75543902785756575LLU;

	t16 = ((x65%(x66|x67))+x68);

	if (t16 != 17497LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	static uint32_t x70 = 173U;
	int32_t x71 = 8;
	uint32_t t17 = 117278U;

	t17 = ((x69%(x70|x71))+x72);

	if (t17 != 4294048728U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;

	t18 = ((x73%(x74|x75))+x76);

	if (t18 != -4294967296LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = UINT8_MAX;
	int64_t x80 = -2473594429882960603LL;
	uint64_t t19 = 1701577LLU;

	t19 = ((x77%(x78|x79))+x80);

	if (t19 != 15973149643826591140LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = -1;
	volatile int64_t x83 = -16271775LL;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int64_t t20 = 2010353754053666717LL;

	t20 = ((x81%(x82|x83))+x84);

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 4793U;
	volatile int8_t x88 = -1;
	volatile int64_t t21 = 1030549632406689244LL;

	t21 = ((x85%(x86|x87))+x88);

	if (t21 != -4794LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MAX;
	uint16_t x90 = 5U;
	int16_t x91 = 0;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -29792;

	t22 = ((x89%(x90|x91))+x92);

	if (t22 != 65537) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;
	uint32_t x95 = 384245242U;
	volatile uint64_t t23 = 8513098945LLU;

	t23 = ((x93%(x94|x95))+x96);

	if (t23 != 276117864907LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x98 = INT64_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile int8_t x100 = -1;
	static volatile int64_t t24 = 1LL;

	t24 = ((x97%(x98|x99))+x100);

	if (t24 != 4LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	volatile int64_t x102 = 21044799LL;
	volatile int16_t x103 = -56;
	int8_t x104 = -1;

	t25 = ((x101%(x102|x103))+x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 1U;
	volatile uint64_t x107 = 22735083503LLU;

	t26 = ((x105%(x106|x107))+x108);

	if (t26 != 14806685698LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x110 = -32428527244LL;
	int32_t x111 = -229;
	static uint32_t x112 = UINT32_MAX;

	t27 = ((x109%(x110|x111))+x112);

	if (t27 != 4294967293LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -748530;
	uint64_t x114 = 16033LLU;
	int32_t x115 = 40410822;
	uint64_t x116 = UINT64_MAX;

	t28 = ((x113%(x114|x115))+x116);

	if (t28 != 664867LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -44311019309781LL;
	volatile int32_t x118 = -1;
	volatile int32_t x119 = -217083754;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t29 = 1848037834LL;

	t29 = ((x117%(x118|x119))+x120);

	if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = -1;
	static volatile uint16_t x123 = UINT16_MAX;
	volatile uint32_t x124 = 5U;

	t30 = ((x121%(x122|x123))+x124);

	if (t30 != 5U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MAX;
	uint16_t x127 = 187U;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -1258323;

	t31 = ((x125%(x126|x127))+x128);

	if (t31 != 8002) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x130 = -1;
	int64_t x131 = -2963LL;
	int32_t x132 = 1044804231;
	volatile int64_t t32 = 84694076374LL;

	t32 = ((x129%(x130|x131))+x132);

	if (t32 != 1044804231LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -45135628;
	static volatile int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -6;

	t33 = ((x133%(x134|x135))+x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = -3840760668LL;
	volatile int8_t x139 = -36;
	static int32_t x140 = -232465121;

	t34 = ((x137%(x138|x139))+x140);

	if (t34 != -232465121LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x143 = 31U;
	static uint16_t x144 = 11139U;
	volatile int64_t t35 = -1865727656740LL;

	t35 = ((x141%(x142|x143))+x144);

	if (t35 != 10872LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 104U;
	int16_t x147 = INT16_MIN;
	int8_t x148 = 57;
	int64_t t36 = -2123022275307961521LL;

	t36 = ((x145%(x146|x147))+x148);

	if (t36 != 57LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 1;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 58868LLU;
	volatile int8_t x152 = -3;

	t37 = ((x149%(x150|x151))+x152);

	if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -1LL;
	static uint64_t x155 = 745165971LLU;
	int8_t x156 = -1;
	volatile uint64_t t38 = 510876432322684858LLU;

	t38 = ((x153%(x154|x155))+x156);

	if (t38 != 254LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x160 = -1472987605LL;

	t39 = ((x157%(x158|x159))+x160);

	if (t39 != 18446744072236564020LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 231957837580586644LL;
	int8_t x162 = -1;
	int8_t x163 = 31;
	int32_t x164 = INT32_MIN;
	volatile int64_t t40 = 1109021569033418862LL;

	t40 = ((x161%(x162|x163))+x164);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 27657842LLU;
	uint16_t x166 = 24457U;
	int16_t x167 = INT16_MIN;
	volatile int32_t x168 = -40;
	static uint64_t t41 = 131752997LLU;

	t41 = ((x165%(x166|x167))+x168);

	if (t41 != 27657802LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 15;
	static volatile int64_t x170 = -1LL;
	static int64_t x171 = INT64_MIN;
	uint64_t t42 = 28177LLU;

	t42 = ((x169%(x170|x171))+x172);

	if (t42 != 10459016789033LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	int16_t x176 = -1;
	static int64_t t43 = -33LL;

	t43 = ((x173%(x174|x175))+x176);

	if (t43 != -32769LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t44 = 6839587963194LLU;

	t44 = ((x177%(x178|x179))+x180);

	if (t44 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 13;
	int16_t x182 = 0;
	int64_t x183 = INT64_MAX;
	volatile int8_t x184 = -1;
	int64_t t45 = -1389562LL;

	t45 = ((x181%(x182|x183))+x184);

	if (t45 != 12LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	volatile uint16_t x186 = 93U;
	int16_t x187 = INT16_MAX;
	volatile int32_t x188 = 6;
	static volatile int32_t t46 = 29497;

	t46 = ((x185%(x186|x187))+x188);

	if (t46 != 261) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	static int64_t x190 = -11841223767886LL;
	int64_t t47 = -3081LL;

	t47 = ((x189%(x190|x191))+x192);

	if (t47 != 10572LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 13337379244485LL;
	uint8_t x194 = UINT8_MAX;
	uint16_t x196 = 877U;

	t48 = ((x193%(x194|x195))+x196);

	if (t48 != 1507374832LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	static uint32_t x198 = 71U;
	int8_t x199 = 1;
	uint64_t x200 = 52450LLU;
	volatile uint64_t t49 = 1019955662LLU;

	t49 = ((x197%(x198|x199))+x200);

	if (t49 != 52458LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -13;
	uint16_t x202 = UINT16_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	uint32_t x204 = UINT32_MAX;

	t50 = ((x201%(x202|x203))+x204);

	if (t50 != 4294967282LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	int32_t x212 = -1;
	static volatile int32_t t51 = 156;

	t51 = ((x209%(x210|x211))+x212);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	static volatile int16_t x216 = -1;
	volatile int64_t t52 = 458LL;

	t52 = ((x213%(x214|x215))+x216);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MIN;
	static uint32_t x220 = 930U;
	volatile uint64_t t53 = 6525613417LLU;

	t53 = ((x217%(x218|x219))+x220);

	if (t53 != 930LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	static int8_t x226 = INT8_MIN;
	uint32_t x227 = 1045987U;
	int32_t x228 = 1031309880;
	volatile int64_t t54 = 1LL;

	t54 = ((x225%(x226|x227))+x228);

	if (t54 != -1116174174LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	static uint64_t x230 = 126050146156LLU;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t55 = 484399LLU;

	t55 = ((x229%(x230|x231))+x232);

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = 40;
	static int32_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	int8_t x236 = -1;
	static volatile int32_t t56 = -4;

	t56 = ((x233%(x234|x235))+x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x237 = 13774U;
	int64_t x238 = -16391158260140LL;
	volatile uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;
	int64_t t57 = -59978454193850LL;

	t57 = ((x237%(x238|x239))+x240);

	if (t57 != 13773LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	int64_t x244 = INT64_MIN;

	t58 = ((x241%(x242|x243))+x244);

	if (t58 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = -1;
	int16_t x247 = 70;
	uint32_t x248 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = ((x245%(x246|x247))+x248);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x249 = UINT16_MAX;
	static int64_t x250 = INT64_MIN;
	int64_t t60 = 15781286LL;

	t60 = ((x249%(x250|x251))+x252);

	if (t60 != 133590661LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x253 = -70;
	volatile int64_t x254 = INT64_MIN;
	static volatile int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MAX;
	volatile int64_t t61 = 1159499218LL;

	t61 = ((x253%(x254|x255))+x256);

	if (t61 != 57LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x257 = -2738836281377019548LL;
	int32_t x258 = -196;
	int8_t x260 = -1;
	int64_t t62 = -16222488400LL;

	t62 = ((x257%(x258|x259))+x260);

	if (t62 != -61LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	static uint32_t x262 = 0U;
	int32_t x263 = 1757563;
	volatile int64_t t63 = 242361374174LL;

	t63 = ((x261%(x262|x263))+x264);

	if (t63 != -1023554LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x265 = 1U;
	int16_t x266 = INT16_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	static volatile int32_t t64 = 10305;

	t64 = ((x265%(x266|x267))+x268);

	if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MAX;
	int8_t x270 = 2;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = ((x269%(x270|x271))+x272);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = 0;
	volatile int64_t x274 = -1LL;
	static uint64_t x275 = UINT64_MAX;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t66 = 1331090080845704LLU;

	t66 = ((x273%(x274|x275))+x276);

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = 30U;
	uint64_t x278 = 3275157844372LLU;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t67 = 6807932222920375731LLU;

	t67 = ((x277%(x278|x279))+x280);

	if (t67 != 18446744073709518878LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 1746U;
	uint32_t x282 = UINT32_MAX;

	t68 = ((x281%(x282|x283))+x284);

	if (t68 != 1799LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 2559831389LLU;
	uint64_t x286 = 253755361162604769LLU;
	volatile int64_t x287 = -1LL;
	int16_t x288 = INT16_MIN;
	uint64_t t69 = 628LLU;

	t69 = ((x285%(x286|x287))+x288);

	if (t69 != 2559798621LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 9154U;
	volatile int32_t x290 = INT32_MIN;
	volatile int32_t x291 = INT32_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t70 = -12203418;

	t70 = ((x289%(x290|x291))+x292);

	if (t70 != 9026) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 349U;
	static int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int64_t t71 = 16990188349LL;

	t71 = ((x293%(x294|x295))+x296);

	if (t71 != 337LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t t72 = 73641816LL;

	t72 = ((x297%(x298|x299))+x300);

	if (t72 != -5169LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MAX;
	static int8_t x308 = 14;
	volatile int64_t t73 = 0LL;

	t73 = ((x305%(x306|x307))+x308);

	if (t73 != 14LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -42;
	volatile uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 3U;
	uint64_t t74 = 8995366361705833LLU;

	t74 = ((x309%(x310|x311))+x312);

	if (t74 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = 64;
	static int64_t x314 = -30458845LL;
	uint32_t x315 = 5U;
	volatile int64_t t75 = 6LL;

	t75 = ((x313%(x314|x315))+x316);

	if (t75 != -2147483584LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x319 = -1LL;
	int64_t x320 = -164313201LL;
	volatile int64_t t76 = 1LL;

	t76 = ((x317%(x318|x319))+x320);

	if (t76 != -164313201LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	uint32_t x322 = 1237217U;
	int8_t x323 = -1;
	volatile int8_t x324 = INT8_MIN;

	t77 = ((x321%(x322|x323))+x324);

	if (t77 != 2147483519LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	volatile int32_t x327 = INT32_MAX;
	volatile uint64_t x328 = 984260LLU;
	volatile uint64_t t78 = 818571509LLU;

	t78 = ((x325%(x326|x327))+x328);

	if (t78 != 9223372036855760068LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -1;
	int32_t x332 = INT32_MAX;
	static uint32_t t79 = 80U;

	t79 = ((x329%(x330|x331))+x332);

	if (t79 != 2147450879U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x333 = 12867U;
	int32_t x335 = INT32_MAX;
	int8_t x336 = -10;
	volatile uint32_t t80 = 1U;

	t80 = ((x333%(x334|x335))+x336);

	if (t80 != 12857U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x338 = -2939;
	volatile uint32_t x339 = 4808396U;
	int16_t x340 = INT16_MIN;
	volatile uint32_t t81 = 184611357U;

	t81 = ((x337%(x338|x339))+x340);

	if (t81 != 4294934655U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x341 = UINT64_MAX;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t t82 = 298LLU;

	t82 = ((x341%(x342|x343))+x344);

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	static volatile int8_t x348 = -1;
	volatile uint32_t t83 = 40641U;

	t83 = ((x345%(x346|x347))+x348);

	if (t83 != 134709257U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x349 = INT64_MIN;
	int32_t x350 = -1;
	volatile uint64_t x352 = 943LLU;
	uint64_t t84 = 1849004LLU;

	t84 = ((x349%(x350|x351))+x352);

	if (t84 != 943LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x353 = INT64_MIN;
	static int32_t x355 = -1;
	int64_t x356 = INT64_MAX;

	t85 = ((x353%(x354|x355))+x356);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 149U;
	int16_t x358 = -1;
	uint16_t x359 = 2U;
	int32_t x360 = -7845725;

	t86 = ((x357%(x358|x359))+x360);

	if (t86 != -7845725) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 29U;
	static int32_t x362 = 77;
	static int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t87 = 0U;

	t87 = ((x361%(x362|x363))+x364);

	if (t87 != 28U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	volatile uint32_t t88 = 65185548U;

	t88 = ((x365%(x366|x367))+x368);

	if (t88 != 854U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = 26;
	int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t89 = 4270;

	t89 = ((x369%(x370|x371))+x372);

	if (t89 != -102) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	static uint32_t x374 = 6935327U;
	int8_t x375 = INT8_MIN;
	volatile int64_t t90 = 709LL;

	t90 = ((x373%(x374|x375))+x376);

	if (t90 != -2147488432LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = 0;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = -1LL;
	static volatile int32_t x380 = INT32_MIN;
	uint64_t t91 = 815171779484LLU;

	t91 = ((x377%(x378|x379))+x380);

	if (t91 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -1LL;
	int8_t x382 = -2;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MAX;

	t92 = ((x381%(x382|x383))+x384);

	if (t92 != 32766LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = -1;
	static int16_t x386 = -1;
	uint8_t x388 = UINT8_MAX;

	t93 = ((x385%(x386|x387))+x388);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	static uint64_t x392 = 267494941073610856LLU;
	uint64_t t94 = 463350133LLU;

	t94 = ((x389%(x390|x391))+x392);

	if (t94 != 267494941073610856LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 22U;
	int64_t x394 = -2LL;
	int32_t x395 = INT32_MAX;

	t95 = ((x393%(x394|x395))+x396);

	if (t95 != 3035LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x397 = -1;
	uint64_t x398 = 480813LLU;
	volatile int16_t x399 = -1;
	int16_t x400 = -65;
	uint64_t t96 = 1043872438LLU;

	t96 = ((x397%(x398|x399))+x400);

	if (t96 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x402 = 737LLU;
	int8_t x403 = 6;
	uint16_t x404 = 9454U;
	uint64_t t97 = 825819901842LLU;

	t97 = ((x401%(x402|x403))+x404);

	if (t97 != 9663LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x411 = 3149502U;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t98 = 244189LLU;

	t98 = ((x409%(x410|x411))+x412);

	if (t98 != 3149500LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = -3;
	static int8_t x414 = INT8_MAX;
	int16_t x415 = 4;
	int32_t x416 = -1;
	int32_t t99 = -7;

	t99 = ((x413%(x414|x415))+x416);

	if (t99 != -4) { NG(); } else { ; }
	
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


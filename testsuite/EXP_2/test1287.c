#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -1LL;
volatile int64_t x2 = 10436LL;
static int32_t x3 = INT32_MAX;
uint16_t x6 = UINT16_MAX;
int32_t x7 = INT32_MIN;
int8_t x9 = 1;
volatile uint64_t t2 = 1163813222LLU;
int8_t x15 = 1;
int16_t x26 = -1;
int32_t x27 = -4074860;
volatile int32_t t6 = -10;
int16_t x32 = INT16_MIN;
int32_t x34 = INT32_MAX;
int32_t t8 = 41526221;
volatile int64_t t9 = -83369392375430LL;
volatile int64_t t10 = -6175028LL;
uint64_t x47 = 301009705LLU;
volatile uint8_t x51 = 59U;
volatile int32_t t12 = 797560;
int8_t x53 = -1;
static int32_t t13 = 174;
int16_t x66 = -4;
volatile int64_t t18 = INT64_MIN;
static int64_t x77 = INT64_MIN;
uint16_t x87 = 3649U;
uint8_t x89 = UINT8_MAX;
static int32_t t22 = 1564;
static int16_t x97 = 3;
int16_t x98 = INT16_MIN;
static volatile uint8_t x103 = 0U;
static int8_t x104 = INT8_MAX;
int64_t x105 = INT64_MIN;
uint64_t x107 = 1258100829294LLU;
int32_t x111 = INT32_MIN;
static volatile int8_t x113 = 27;
int8_t x114 = INT8_MIN;
uint16_t x115 = 157U;
volatile uint16_t x116 = 1025U;
int16_t x118 = -1;
int16_t x128 = INT16_MIN;
int32_t t31 = 154433;
static int32_t t32 = INT32_MAX;
int8_t x133 = INT8_MIN;
uint16_t x144 = 1675U;
int32_t t35 = 611;
int64_t x150 = -214625018802220769LL;
uint16_t x151 = UINT16_MAX;
int64_t x156 = INT64_MIN;
static int32_t t39 = 1;
int32_t t40 = 918638702;
static int32_t t41 = INT32_MIN;
uint16_t x175 = UINT16_MAX;
int8_t x177 = -1;
int8_t x191 = INT8_MIN;
volatile int64_t t47 = INT64_MAX;
int32_t x193 = INT32_MIN;
int8_t x217 = INT8_MIN;
int16_t x235 = INT16_MIN;
static volatile int64_t t58 = 7LL;
static uint8_t x239 = 34U;
uint64_t x240 = UINT64_MAX;
static uint16_t x245 = UINT16_MAX;
static int32_t x251 = INT32_MAX;
static int64_t x252 = -1LL;
static int16_t x254 = 167;
int32_t x259 = -1101088;
volatile int64_t x260 = INT64_MIN;
uint32_t x261 = 7U;
uint8_t x263 = UINT8_MAX;
static volatile uint32_t x264 = 384U;
static int8_t x267 = INT8_MAX;
static int64_t x273 = INT64_MIN;
uint64_t x280 = UINT64_MAX;
static volatile int64_t x286 = INT64_MAX;
int32_t t71 = -79347;
uint32_t x289 = UINT32_MAX;
static volatile int32_t t73 = -29012;
uint64_t x297 = UINT64_MAX;
uint16_t x301 = 15U;
static int32_t x307 = 1;
volatile uint16_t x320 = UINT16_MAX;
uint8_t x326 = UINT8_MAX;
uint8_t x328 = 121U;
static uint16_t x333 = UINT16_MAX;
uint8_t x343 = UINT8_MAX;
int16_t x346 = INT16_MIN;
int32_t t86 = 58;
static uint8_t x353 = 2U;
int8_t x358 = INT8_MIN;
static int64_t x364 = INT64_MIN;
static uint64_t x372 = 3LLU;
uint64_t t92 = 69617549268173596LLU;
int16_t x373 = -59;
int64_t x378 = INT64_MAX;
volatile int32_t t95 = -235865861;
static int16_t x388 = 1355;
int16_t x391 = INT16_MIN;
volatile int8_t x397 = 1;


void f0(void) {
	uint32_t x4 = 38637U;
	volatile uint32_t t0 = 3224U;

	t0 = ((x1==(x2==x3))^x4);

	if (t0 != 38637U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -59;
	static int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -20453441;

	t1 = ((x5==(x6==x7))^x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -1;
	uint32_t x11 = 12U;
	uint64_t x12 = 4176286LLU;

	t2 = ((x9==(x10==x11))^x12);

	if (t2 != 4176286LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 17U;
	volatile uint8_t x14 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 45;

	t3 = ((x13==(x14==x15))^x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2749U;
	uint64_t x18 = 38271287184LLU;
	int8_t x19 = INT8_MIN;
	int8_t x20 = -26;
	int32_t t4 = 771;

	t4 = ((x17==(x18==x19))^x20);

	if (t4 != -26) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint8_t x22 = UINT8_MAX;
	static volatile int32_t x23 = -3319;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -8;

	t5 = ((x21==(x22==x23))^x24);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static volatile int32_t x28 = -211;

	t6 = ((x25==(x26==x27))^x28);

	if (t6 != -211) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int8_t x30 = 6;
	uint8_t x31 = 29U;
	volatile int32_t t7 = -1;

	t7 = ((x29==(x30==x31))^x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -4129084;
	uint16_t x35 = 26970U;
	static uint16_t x36 = 3U;

	t8 = ((x33==(x34==x35))^x36);

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = -1;
	uint64_t x39 = 559397718229181LLU;
	volatile int64_t x40 = -15253789LL;

	t9 = ((x37==(x38==x39))^x40);

	if (t9 != -15253789LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	int64_t x44 = 1735220LL;

	t10 = ((x41==(x42==x43))^x44);

	if (t10 != 1735220LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 6U;
	int32_t x46 = -1;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x45==(x46==x47))^x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int64_t x50 = 216395455860LL;
	int32_t x52 = -11860867;

	t12 = ((x49==(x50==x51))^x52);

	if (t12 != -11860867) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = 3958570887406058LL;
	uint32_t x55 = 1U;
	int32_t x56 = 1;

	t13 = ((x53==(x54==x55))^x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	uint64_t x58 = 6311348471804663018LLU;
	int64_t x59 = -1LL;
	int16_t x60 = 5578;
	volatile int32_t t14 = -230328;

	t14 = ((x57==(x58==x59))^x60);

	if (t14 != 5578) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int32_t x62 = INT32_MIN;
	volatile int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	volatile int32_t t15 = 1;

	t15 = ((x61==(x62==x63))^x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x65 = 132U;
	int16_t x67 = INT16_MAX;
	static int8_t x68 = -1;
	static int32_t t16 = -2854188;

	t16 = ((x65==(x66==x67))^x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	static volatile int16_t x70 = -1;
	int64_t x71 = 13559795LL;
	int64_t x72 = 3718979235788421410LL;
	volatile int64_t t17 = -194417434705830LL;

	t17 = ((x69==(x70==x71))^x72);

	if (t17 != 3718979235788421410LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int8_t x74 = 22;
	uint64_t x75 = 2354LLU;
	int64_t x76 = INT64_MIN;

	t18 = ((x73==(x74==x75))^x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 116U;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = ((x77==(x78==x79))^x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 572;
	int64_t x82 = INT64_MAX;
	int32_t x83 = -105287;
	int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = ((x81==(x82==x83))^x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 9497612U;
	int64_t x86 = INT64_MIN;
	volatile int32_t x88 = -1;
	int32_t t21 = -44;

	t21 = ((x85==(x86==x87))^x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = 1U;
	volatile int64_t x91 = -1LL;
	int16_t x92 = -1;

	t22 = ((x89==(x90==x91))^x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 698444819;
	volatile uint8_t x94 = UINT8_MAX;
	static int64_t x95 = 1115156827396213022LL;
	static int32_t x96 = -1;
	int32_t t23 = 1;

	t23 = ((x93==(x94==x95))^x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x99 = 13;
	int8_t x100 = 4;
	static volatile int32_t t24 = 108665;

	t24 = ((x97==(x98==x99))^x100);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MAX;
	volatile int32_t t25 = -825857999;

	t25 = ((x101==(x102==x103))^x104);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 2;

	t26 = ((x105==(x106==x107))^x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 27U;
	volatile uint32_t x110 = UINT32_MAX;
	int8_t x112 = -1;
	volatile int32_t t27 = -256454982;

	t27 = ((x109==(x110==x111))^x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t t28 = 171183;

	t28 = ((x113==(x114==x115))^x116);

	if (t28 != 1025) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MAX;
	uint8_t x119 = 25U;
	volatile uint16_t x120 = 5936U;
	volatile int32_t t29 = 174;

	t29 = ((x117==(x118==x119))^x120);

	if (t29 != 5936) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	static uint32_t x122 = 3443U;
	uint32_t x123 = 32368U;
	int8_t x124 = INT8_MAX;
	int32_t t30 = -29400;

	t30 = ((x121==(x122==x123))^x124);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 6610065857890LLU;
	int16_t x126 = -1;
	static int8_t x127 = INT8_MIN;

	t31 = ((x125==(x126==x127))^x128);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 2U;
	uint16_t x131 = 14U;
	int32_t x132 = INT32_MAX;

	t32 = ((x129==(x130==x131))^x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1840;
	int8_t x135 = INT8_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x133==(x134==x135))^x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 8U;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 0;
	int32_t t34 = 855278395;

	t34 = ((x137==(x138==x139))^x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 17701;
	int16_t x142 = -562;
	uint16_t x143 = 26773U;

	t35 = ((x141==(x142==x143))^x144);

	if (t35 != 1675) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = -1LL;
	int8_t x147 = INT8_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x145==(x146==x147))^x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 11028U;
	uint32_t x152 = 148752582U;
	volatile uint32_t t37 = 20U;

	t37 = ((x149==(x150==x151))^x152);

	if (t37 != 148752582U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = -1;
	static int64_t t38 = INT64_MIN;

	t38 = ((x153==(x154==x155))^x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	uint8_t x159 = UINT8_MAX;
	uint8_t x160 = 2U;

	t39 = ((x157==(x158==x159))^x160);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static uint8_t x162 = 0U;
	volatile int64_t x163 = INT64_MIN;
	volatile int8_t x164 = 13;

	t40 = ((x161==(x162==x163))^x164);

	if (t40 != 13) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	volatile int64_t x166 = INT64_MIN;
	volatile int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;

	t41 = ((x165==(x166==x167))^x168);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int32_t x170 = INT32_MIN;
	static int16_t x171 = -42;
	volatile uint32_t x172 = UINT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x169==(x170==x171))^x172);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int32_t x174 = -1;
	int32_t x176 = -972766406;
	static int32_t t43 = -2007664;

	t43 = ((x173==(x174==x175))^x176);

	if (t43 != -972766406) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = -3;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x177==(x178==x179))^x180);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1U;
	int16_t x182 = INT16_MAX;
	static int16_t x183 = INT16_MIN;
	uint16_t x184 = 5U;
	volatile int32_t t45 = 870;

	t45 = ((x181==(x182==x183))^x184);

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	volatile int32_t x186 = 2307;
	uint32_t x187 = 3545U;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t46 = INT32_MIN;

	t46 = ((x185==(x186==x187))^x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	uint16_t x190 = 2U;
	int64_t x192 = INT64_MAX;

	t47 = ((x189==(x190==x191))^x192);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x194 = INT8_MIN;
	static uint32_t x195 = 51683U;
	int8_t x196 = 1;
	volatile int32_t t48 = -54;

	t48 = ((x193==(x194==x195))^x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 44;
	int16_t x198 = 6;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = ((x197==(x198==x199))^x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MAX;
	volatile uint8_t x202 = 3U;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = -1LL;
	volatile int64_t t50 = -17581LL;

	t50 = ((x201==(x202==x203))^x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 1;
	volatile uint8_t x206 = 24U;
	uint8_t x207 = 1U;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = INT32_MIN;

	t51 = ((x205==(x206==x207))^x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 506171779517LLU;
	int8_t x210 = 0;
	volatile uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = ((x209==(x210==x211))^x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = 1;
	static int16_t x214 = INT16_MIN;
	int16_t x215 = -6;
	uint16_t x216 = 4262U;
	int32_t t53 = -8717;

	t53 = ((x213==(x214==x215))^x216);

	if (t53 != 4262) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	int32_t x219 = -1;
	uint8_t x220 = 3U;
	int32_t t54 = 22;

	t54 = ((x217==(x218==x219))^x220);

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 15078934764154346LLU;
	int8_t x222 = -33;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t55 = -20863;

	t55 = ((x221==(x222==x223))^x224);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -19;
	static uint64_t x226 = UINT64_MAX;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x225==(x226==x227))^x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static int32_t x230 = INT32_MAX;
	volatile int16_t x231 = -1;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -8241;

	t57 = ((x229==(x230==x231))^x232);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 3075U;
	static volatile uint8_t x234 = UINT8_MAX;
	int64_t x236 = -8LL;

	t58 = ((x233==(x234==x235))^x236);

	if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 110162698U;
	volatile int8_t x238 = INT8_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = ((x237==(x238==x239))^x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 279680U;
	static uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -3;

	t60 = ((x241==(x242==x243))^x244);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = -10271;
	int16_t x247 = INT16_MIN;
	volatile int64_t x248 = -33133164281LL;
	static volatile int64_t t61 = -534707008LL;

	t61 = ((x245==(x246==x247))^x248);

	if (t61 != -33133164281LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int32_t x250 = -25;
	int64_t t62 = 1265137893768900398LL;

	t62 = ((x249==(x250==x251))^x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	volatile uint8_t x255 = 6U;
	static uint16_t x256 = 19U;
	volatile int32_t t63 = 877988709;

	t63 = ((x253==(x254==x255))^x256);

	if (t63 != 19) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 1036880021559389LL;
	int16_t x258 = 2639;
	int64_t t64 = INT64_MIN;

	t64 = ((x257==(x258==x259))^x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MAX;
	uint32_t t65 = 92U;

	t65 = ((x261==(x262==x263))^x264);

	if (t65 != 384U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -2;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -39;

	t66 = ((x265==(x266==x267))^x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 2U;
	uint16_t x270 = 3371U;
	int16_t x271 = -10857;
	static int32_t x272 = INT32_MIN;
	int32_t t67 = INT32_MIN;

	t67 = ((x269==(x270==x271))^x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MAX;
	uint16_t x275 = 6453U;
	static int64_t x276 = -15202LL;
	volatile int64_t t68 = 73588711112750LL;

	t68 = ((x273==(x274==x275))^x276);

	if (t68 != -15202LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	static uint16_t x279 = 2U;
	static uint64_t t69 = UINT64_MAX;

	t69 = ((x277==(x278==x279))^x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -7;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = 105;

	t70 = ((x281==(x282==x283))^x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = -6;
	uint16_t x288 = 2209U;

	t71 = ((x285==(x286==x287))^x288);

	if (t71 != 2209) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 456U;
	static volatile int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t72 = INT32_MIN;

	t72 = ((x289==(x290==x291))^x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 2381;
	static int64_t x294 = -1LL;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = -1;

	t73 = ((x293==(x294==x295))^x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;
	volatile int16_t x299 = 1;
	uint64_t x300 = 65973745207230LLU;
	volatile uint64_t t74 = 26030977550937LLU;

	t74 = ((x297==(x298==x299))^x300);

	if (t74 != 65973745207230LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 1132U;
	volatile uint16_t x303 = 3750U;
	int32_t x304 = INT32_MAX;
	volatile int32_t t75 = INT32_MAX;

	t75 = ((x301==(x302==x303))^x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	static uint64_t x306 = UINT64_MAX;
	int64_t x308 = INT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = ((x305==(x306==x307))^x308);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 6379;
	int16_t x310 = -1;
	int8_t x311 = -1;
	uint32_t x312 = 6293686U;
	static volatile uint32_t t77 = 3346U;

	t77 = ((x309==(x310==x311))^x312);

	if (t77 != 6293686U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	static int16_t x314 = -1;
	int8_t x315 = -1;
	static int32_t x316 = INT32_MAX;
	int32_t t78 = INT32_MAX;

	t78 = ((x313==(x314==x315))^x316);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = 61779402;
	int32_t t79 = 24737;

	t79 = ((x317==(x318==x319))^x320);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 54LL;
	static uint16_t x322 = 217U;
	uint16_t x323 = 11979U;
	volatile int64_t x324 = -2358109085996744LL;
	volatile int64_t t80 = 6326124LL;

	t80 = ((x321==(x322==x323))^x324);

	if (t80 != -2358109085996744LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	uint32_t x327 = UINT32_MAX;
	int32_t t81 = -13;

	t81 = ((x325==(x326==x327))^x328);

	if (t81 != 121) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 12137673566271305LLU;
	static uint8_t x330 = 30U;
	uint32_t x331 = UINT32_MAX;
	static int64_t x332 = INT64_MIN;
	static volatile int64_t t82 = INT64_MIN;

	t82 = ((x329==(x330==x331))^x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = 1345;
	int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -532;

	t83 = ((x333==(x334==x335))^x336);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	static uint8_t x338 = 1U;
	volatile int8_t x339 = INT8_MAX;
	uint16_t x340 = 1455U;
	int32_t t84 = -3;

	t84 = ((x337==(x338==x339))^x340);

	if (t84 != 1455) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x341==(x342==x343))^x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MAX;
	uint8_t x347 = 55U;
	static uint8_t x348 = 0U;

	t86 = ((x345==(x346==x347))^x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 15U;
	uint16_t x350 = 14U;
	static uint32_t x351 = 1165895849U;
	static int64_t x352 = 719LL;
	volatile int64_t t87 = -51854325492LL;

	t87 = ((x349==(x350==x351))^x352);

	if (t87 != 719LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 2014373788234LLU;
	static uint32_t x355 = UINT32_MAX;
	static int8_t x356 = 0;
	static volatile int32_t t88 = 3750;

	t88 = ((x353==(x354==x355))^x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	int64_t x359 = INT64_MAX;
	static volatile int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 7;

	t89 = ((x357==(x358==x359))^x360);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile uint16_t x362 = 418U;
	int8_t x363 = -1;
	static volatile int64_t t90 = INT64_MIN;

	t90 = ((x361==(x362==x363))^x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int8_t x366 = -1;
	int64_t x367 = -1258777080122LL;
	int32_t x368 = INT32_MIN;
	int32_t t91 = INT32_MIN;

	t91 = ((x365==(x366==x367))^x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = 28402616;
	uint16_t x370 = UINT16_MAX;
	uint32_t x371 = 110191U;

	t92 = ((x369==(x370==x371))^x372);

	if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x374 = 0U;
	uint8_t x375 = UINT8_MAX;
	uint16_t x376 = 493U;
	int32_t t93 = -4;

	t93 = ((x373==(x374==x375))^x376);

	if (t93 != 493) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x379 = INT32_MAX;
	int8_t x380 = -1;
	volatile int32_t t94 = -476183;

	t94 = ((x377==(x378==x379))^x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int8_t x382 = 14;
	static int16_t x383 = INT16_MIN;
	volatile int8_t x384 = 28;

	t95 = ((x381==(x382==x383))^x384);

	if (t95 != 28) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -5;
	uint16_t x386 = 13U;
	int16_t x387 = INT16_MAX;
	int32_t t96 = 43;

	t96 = ((x385==(x386==x387))^x388);

	if (t96 != 1355) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -825483;
	int8_t x390 = -1;
	int16_t x392 = -1596;
	volatile int32_t t97 = -890557;

	t97 = ((x389==(x390==x391))^x392);

	if (t97 != -1596) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -86;
	static int8_t x395 = INT8_MIN;
	volatile int16_t x396 = -1;
	volatile int32_t t98 = 1;

	t98 = ((x393==(x394==x395))^x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = 434933697992547LL;
	int64_t x399 = INT64_MIN;
	int64_t x400 = 14702LL;
	volatile int64_t t99 = 10978973580LL;

	t99 = ((x397==(x398==x399))^x400);

	if (t99 != 14702LL) { NG(); } else { ; }
	
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


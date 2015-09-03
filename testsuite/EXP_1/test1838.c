#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
int32_t x7 = 192105;
int16_t x8 = -1;
int32_t x14 = -11;
int8_t x15 = INT8_MIN;
static volatile int8_t x16 = 4;
volatile int32_t t3 = -1;
volatile uint16_t x17 = UINT16_MAX;
static volatile int32_t t4 = -7990093;
uint32_t x21 = 5100U;
uint8_t x27 = UINT8_MAX;
uint64_t x32 = 2LLU;
static int64_t t9 = -202LL;
int16_t x44 = 138;
static uint32_t x45 = 0U;
uint32_t x46 = UINT32_MAX;
int64_t x50 = -173167144942020182LL;
int64_t t12 = -455732151890LL;
uint32_t x56 = 3406944U;
volatile int64_t t13 = -6942973LL;
int64_t t14 = 221LL;
static int16_t x69 = 1;
uint8_t x77 = 5U;
uint8_t x85 = 56U;
int32_t x88 = INT32_MIN;
volatile int32_t x89 = INT32_MIN;
static uint64_t t24 = 40575595282123233LLU;
volatile int64_t t25 = -2615710LL;
static uint64_t x112 = UINT64_MAX;
int64_t x113 = INT64_MAX;
static int16_t x115 = INT16_MIN;
volatile int64_t t29 = -64LL;
uint32_t t35 = 273U;
uint64_t x157 = UINT64_MAX;
static volatile int8_t x160 = -1;
uint16_t x164 = UINT16_MAX;
int64_t t40 = 49729814339912LL;
static volatile uint32_t t42 = 68U;
uint8_t x185 = 9U;
uint32_t x186 = UINT32_MAX;
static int32_t x200 = INT32_MAX;
volatile uint16_t x203 = 0U;
volatile uint64_t t47 = 1827095LLU;
uint8_t x206 = 29U;
static uint64_t x213 = UINT64_MAX;
int32_t x223 = 2719576;
volatile int16_t x225 = INT16_MIN;
int32_t t55 = 38635;
uint32_t x239 = 43988U;
uint16_t x242 = 15U;
static uint8_t x247 = 0U;
static int64_t t59 = 1718302224577LL;
uint64_t x260 = 115241008898926LLU;
static volatile uint64_t t61 = 1323525080684487LLU;
int64_t t63 = -223LL;
int32_t x270 = 180781360;
volatile uint32_t t66 = 54U;
volatile int64_t t68 = -43849116LL;
static int16_t x292 = INT16_MIN;
int8_t x295 = 0;
volatile uint32_t x296 = 43U;
int8_t x298 = INT8_MAX;
static uint64_t x303 = 108113288LLU;
volatile int64_t x312 = -43121385408LL;
uint32_t x315 = UINT32_MAX;
volatile int64_t t75 = -6517571720411683LL;
volatile uint64_t t77 = 1723452711018LLU;
int8_t x333 = INT8_MAX;
uint64_t x338 = 30914011LLU;
int64_t t82 = 23763550568231LL;
int16_t x345 = 0;
int32_t x346 = -901025;
int8_t x347 = INT8_MAX;
static uint32_t x348 = 61721124U;
uint32_t x364 = UINT32_MAX;
int32_t x376 = -1;
volatile int64_t x377 = INT64_MIN;
int16_t x380 = -397;
volatile int8_t x382 = INT8_MIN;
int64_t x387 = -1LL;
int16_t x390 = -1;
volatile int16_t x401 = INT16_MIN;
int16_t x402 = -16;
volatile uint16_t x404 = UINT16_MAX;
volatile int32_t t96 = -742684;
int32_t x412 = -1;
static int64_t t98 = -139LL;
int64_t x414 = 231656LL;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	volatile uint16_t x3 = 2U;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -11921026436LL;

	t0 = (((x1&x2)|x3)%x4);

	if (t0 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	int64_t t1 = 350LL;

	t1 = (((x5&x6)|x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 952892LLU;
	int64_t x10 = INT64_MIN;
	int32_t x11 = 697922992;
	volatile int32_t x12 = INT32_MAX;
	volatile uint64_t t2 = 223700903920143602LLU;

	t2 = (((x9&x10)|x11)%x12);

	if (t2 != 697922992LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;

	t3 = (((x13&x14)|x15)%x16);

	if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = INT8_MIN;

	t4 = (((x17&x18)|x19)%x20);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	int64_t x23 = 1050014847894LL;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -890671343LL;

	t5 = (((x21&x22)|x23)%x24);

	if (t5 != 1050014847998LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1173;
	int64_t x26 = -38751098992217500LL;
	static int16_t x28 = 4386;
	volatile int64_t t6 = 31LL;

	t6 = (((x25&x26)|x27)%x28);

	if (t6 != -1949LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1226651307U;
	uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MAX;
	volatile uint64_t t7 = 49526024050280LLU;

	t7 = (((x29&x30)|x31)%x32);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 12210;
	int64_t x34 = INT64_MAX;
	volatile int8_t x35 = INT8_MIN;
	uint32_t x36 = 78U;
	int64_t t8 = 2708712712LL;

	t8 = (((x33&x34)|x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 21176LL;
	volatile int64_t x38 = 1449788169LL;
	int32_t x39 = 5;
	uint16_t x40 = UINT16_MAX;

	t9 = (((x37&x38)|x39)%x40);

	if (t9 != 525LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -15;
	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = INT32_MAX;
	volatile int32_t t10 = 14119;

	t10 = (((x41&x42)|x43)%x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x47 = 162941075589LLU;
	static int32_t x48 = INT32_MIN;
	volatile uint64_t t11 = 4559095LLU;

	t11 = (((x45&x46)|x47)%x48);

	if (t11 != 162941075589LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static uint8_t x51 = 2U;
	int32_t x52 = INT32_MIN;

	t12 = (((x49&x50)|x51)%x52);

	if (t12 != 787896746LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int64_t x55 = -28LL;

	t13 = (((x53&x54)|x55)%x56);

	if (t13 != -28LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static int16_t x58 = 8153;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = 8610U;

	t14 = (((x57&x58)|x59)%x60);

	if (t14 != -8401LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint8_t x62 = 102U;
	int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 1814332;

	t15 = (((x61&x62)|x63)%x64);

	if (t15 != -27) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = -48;
	volatile int16_t x68 = -12762;
	uint64_t t16 = 674386027818954152LLU;

	t16 = (((x65&x66)|x67)%x68);

	if (t16 != 12761LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -1LL;
	static int16_t x71 = -6066;
	uint8_t x72 = 39U;
	int64_t t17 = 23970148228461396LL;

	t17 = (((x69&x70)|x71)%x72);

	if (t17 != -20LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 1748;
	volatile int16_t x74 = INT16_MAX;
	int16_t x75 = INT16_MAX;
	static int64_t x76 = -1LL;
	volatile int64_t t18 = 182287637128LL;

	t18 = (((x73&x74)|x75)%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	int16_t x80 = -21;
	int64_t t19 = -421LL;

	t19 = (((x77&x78)|x79)%x80);

	if (t19 != 7LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	uint8_t x82 = 1U;
	uint64_t x83 = 35479793500081LLU;
	int8_t x84 = INT8_MIN;
	uint64_t t20 = 4096547073707641146LLU;

	t20 = (((x81&x82)|x83)%x84);

	if (t20 != 35479793500081LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1LL;
	int32_t x87 = INT32_MIN;
	volatile int64_t t21 = -9754742446066275LL;

	t21 = (((x85&x86)|x87)%x88);

	if (t21 != -2147483592LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	static int16_t x92 = INT16_MIN;
	int32_t t22 = 3975839;

	t22 = (((x89&x90)|x91)%x92);

	if (t22 != -32513) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 113916U;
	volatile int16_t x94 = 1;
	volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	uint32_t t23 = 20138586U;

	t23 = (((x93&x94)|x95)%x96);

	if (t23 != 128U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;

	t24 = (((x97&x98)|x99)%x100);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	volatile int64_t x102 = INT64_MIN;
	static volatile int64_t x103 = INT64_MAX;
	uint8_t x104 = 6U;

	t25 = (((x101&x102)|x103)%x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MAX;
	int32_t x108 = -952687596;
	int64_t t26 = 86282809LL;

	t26 = (((x105&x106)|x107)%x108);

	if (t26 != 605499223LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 444U;
	volatile int16_t x110 = 273;
	static uint16_t x111 = UINT16_MAX;
	volatile uint64_t t27 = 11403616923861179LLU;

	t27 = (((x109&x110)|x111)%x112);

	if (t27 != 65535LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x116 = -216;
	int64_t t28 = 24454875221LL;

	t28 = (((x113&x114)|x115)%x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int16_t x118 = -1;
	static int16_t x119 = -1;
	static volatile int64_t x120 = INT64_MIN;

	t29 = (((x117&x118)|x119)%x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MIN;
	volatile int64_t x122 = INT64_MIN;
	volatile int16_t x123 = -3;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = 6934439713967LLU;

	t30 = (((x121&x122)|x123)%x124);

	if (t30 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -75382212LL;
	volatile uint64_t x126 = 1165217LLU;
	static volatile uint8_t x127 = 3U;
	volatile int32_t x128 = INT32_MIN;
	static uint64_t t31 = 6218058727LLU;

	t31 = (((x125&x126)|x127)%x128);

	if (t31 != 115235LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 839479437;

	t32 = (((x129&x130)|x131)%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 3U;
	static int32_t x136 = INT32_MAX;
	int64_t t33 = -1035243140857485LL;

	t33 = (((x133&x134)|x135)%x136);

	if (t33 != -2147483646LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = -52640;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = -558473520;
	static int32_t x144 = -1;
	static int32_t t34 = 77823;

	t34 = (((x141&x142)|x143)%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	static volatile int16_t x147 = -681;
	int8_t x148 = INT8_MAX;

	t35 = (((x145&x146)|x147)%x148);

	if (t35 != 102U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = -1;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 2U;
	uint32_t x156 = 7U;
	volatile uint32_t t36 = 15626212U;

	t36 = (((x153&x154)|x155)%x156);

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x158 = -687739383;
	volatile int8_t x159 = INT8_MIN;
	uint64_t t37 = 446451069712747LLU;

	t37 = (((x157&x158)|x159)%x160);

	if (t37 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -200266LL;
	uint8_t x162 = UINT8_MAX;
	volatile int32_t x163 = 712;
	volatile int64_t t38 = 171558781097760LL;

	t38 = (((x161&x162)|x163)%x164);

	if (t38 != 766LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 103U;
	static int16_t x168 = INT16_MAX;
	volatile uint32_t t39 = 424753U;

	t39 = (((x165&x166)|x167)%x168);

	if (t39 != 231U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = -25180011LL;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = 1U;

	t40 = (((x169&x170)|x171)%x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = -64965888151537LL;
	uint8_t x174 = 60U;
	int64_t x175 = -5632LL;
	int32_t x176 = INT32_MAX;
	int64_t t41 = -300143LL;

	t41 = (((x173&x174)|x175)%x176);

	if (t41 != -5620LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = 0;
	int32_t x178 = 10634;
	uint32_t x179 = 3856892U;
	uint8_t x180 = 1U;

	t42 = (((x177&x178)|x179)%x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	int64_t t43 = 43806830689324502LL;

	t43 = (((x185&x186)|x187)%x188);

	if (t43 != -119LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 18159U;
	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;
	static uint16_t x192 = UINT16_MAX;
	int64_t t44 = 56977LL;

	t44 = (((x189&x190)|x191)%x192);

	if (t44 != -17LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = -1LL;
	uint64_t x194 = 1604173415LLU;
	int32_t x195 = -1;
	static int64_t x196 = INT64_MIN;
	uint64_t t45 = 46746LLU;

	t45 = (((x193&x194)|x195)%x196);

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	int8_t x199 = -53;
	static int32_t t46 = -1;

	t46 = (((x197&x198)|x199)%x200);

	if (t46 != -53) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1LL;
	static uint64_t x202 = 9LLU;
	static uint64_t x204 = 8767255017LLU;

	t47 = (((x201&x202)|x203)%x204);

	if (t47 != 9LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	uint8_t x208 = 3U;
	static int64_t t48 = 211LL;

	t48 = (((x205&x206)|x207)%x208);

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -1LL;
	uint8_t x210 = 3U;
	int16_t x211 = INT16_MAX;
	uint32_t x212 = 228442U;
	static volatile int64_t t49 = 3729119262252414LL;

	t49 = (((x209&x210)|x211)%x212);

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MAX;
	static uint8_t x216 = UINT8_MAX;
	volatile uint64_t t50 = 2375232252969726LLU;

	t50 = (((x213&x214)|x215)%x216);

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = -1;
	volatile uint32_t x220 = 3787035U;
	uint32_t t51 = 13U;

	t51 = (((x217&x218)|x219)%x220);

	if (t51 != 469605U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = 3;
	int8_t x222 = INT8_MIN;
	static int64_t x224 = -113919619171906023LL;
	int64_t t52 = 23LL;

	t52 = (((x221&x222)|x223)%x224);

	if (t52 != 2719576LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x226 = 27U;
	int16_t x227 = -28;
	int16_t x228 = INT16_MIN;
	int32_t t53 = 153;

	t53 = (((x225&x226)|x227)%x228);

	if (t53 != -28) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	volatile uint32_t x230 = 40U;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	volatile int64_t t54 = 32557666186464LL;

	t54 = (((x229&x230)|x231)%x232);

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MIN;
	uint8_t x236 = UINT8_MAX;

	t55 = (((x233&x234)|x235)%x236);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = -1;
	volatile uint8_t x240 = UINT8_MAX;
	uint64_t t56 = 431611639451LLU;

	t56 = (((x237&x238)|x239)%x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	uint16_t x244 = 20320U;
	int32_t t57 = 962623915;

	t57 = (((x241&x242)|x243)%x244);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x245 = -15;
	static int16_t x246 = 0;
	volatile int16_t x248 = -1;
	int32_t t58 = 9983;

	t58 = (((x245&x246)|x247)%x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 1U;
	static int64_t x252 = INT64_MAX;

	t59 = (((x249&x250)|x251)%x252);

	if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MAX;
	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MAX;
	volatile int16_t x256 = 1;
	volatile int64_t t60 = 4702963865423316LL;

	t60 = (((x253&x254)|x255)%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 80773626U;
	uint64_t x258 = 8074LLU;
	int32_t x259 = -1;

	t61 = (((x257&x258)|x259)%x260);

	if (t61 != 538249567869LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x262 = -6;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = -1;
	volatile int32_t t62 = 108536;

	t62 = (((x261&x262)|x263)%x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint32_t x266 = 67566U;
	uint32_t x267 = 124U;
	int64_t x268 = INT64_MAX;

	t63 = (((x265&x266)|x267)%x268);

	if (t63 != 2046LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = 108LLU;
	int64_t x271 = 444873188312LL;
	volatile int16_t x272 = INT16_MIN;
	volatile uint64_t t64 = 5351145726136428LLU;

	t64 = (((x269&x270)|x271)%x272);

	if (t64 != 444873188344LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	static int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t65 = 706877172;

	t65 = (((x273&x274)|x275)%x276);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = 466397132U;
	int8_t x278 = INT8_MAX;
	int16_t x279 = -1;
	int32_t x280 = -1;

	t66 = (((x277&x278)|x279)%x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = -12210312;
	static volatile uint8_t x283 = UINT8_MAX;
	uint8_t x284 = UINT8_MAX;
	uint32_t t67 = 856210U;

	t67 = (((x281&x282)|x283)%x284);

	if (t67 != 244U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;

	t68 = (((x285&x286)|x287)%x288);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x289 = -1;
	volatile int8_t x290 = -10;
	int16_t x291 = 0;
	volatile int32_t t69 = -5;

	t69 = (((x289&x290)|x291)%x292);

	if (t69 != -10) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = -1;
	uint32_t t70 = 1796467U;

	t70 = (((x293&x294)|x295)%x296);

	if (t70 != 14U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	uint16_t x299 = 4U;
	int32_t x300 = INT32_MIN;
	volatile int32_t t71 = -60;

	t71 = (((x297&x298)|x299)%x300);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = 502268788LL;
	int64_t x302 = -449LL;
	uint8_t x304 = 4U;
	volatile uint64_t t72 = 1040016229303146990LLU;

	t72 = (((x301&x302)|x303)%x304);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = 1;
	int8_t x308 = 29;
	static int32_t t73 = -10452;

	t73 = (((x305&x306)|x307)%x308);

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = INT16_MAX;
	int8_t x310 = 20;
	int8_t x311 = INT8_MIN;
	static volatile int64_t t74 = -1894380340124175342LL;

	t74 = (((x309&x310)|x311)%x312);

	if (t74 != -108LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 1772U;
	uint8_t x314 = 75U;
	int64_t x316 = INT64_MIN;

	t75 = (((x313&x314)|x315)%x316);

	if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 17384860561806LLU;
	int32_t x318 = INT32_MAX;
	volatile int32_t x319 = -1;
	int16_t x320 = -1;
	volatile uint64_t t76 = 242341LLU;

	t76 = (((x317&x318)|x319)%x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 0U;
	int64_t x322 = 283591415LL;
	int8_t x323 = 0;
	static uint64_t x324 = 12046865651776LLU;

	t77 = (((x321&x322)|x323)%x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -726539974830777889LL;
	int32_t x326 = -1;
	volatile int8_t x327 = 40;
	int8_t x328 = 23;
	int64_t t78 = -30008LL;

	t78 = (((x325&x326)|x327)%x328);

	if (t78 != -19LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 42U;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -18LL;
	uint32_t x332 = 2U;
	static uint64_t t79 = 98942563366679LLU;

	t79 = (((x329&x330)|x331)%x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x334 = INT8_MAX;
	static int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MIN;
	static int64_t t80 = -91317732LL;

	t80 = (((x333&x334)|x335)%x336);

	if (t80 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = -1LL;
	uint32_t x339 = 6U;
	int32_t x340 = INT32_MIN;
	uint64_t t81 = 288495684028LLU;

	t81 = (((x337&x338)|x339)%x340);

	if (t81 != 30914015LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	int8_t x343 = -1;
	int16_t x344 = -1;

	t82 = (((x341&x342)|x343)%x344);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t t83 = 16428647U;

	t83 = (((x345&x346)|x347)%x348);

	if (t83 != 127U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x349 = 0U;
	volatile int8_t x350 = 1;
	uint16_t x351 = UINT16_MAX;
	uint32_t x352 = 2041U;
	static volatile uint32_t t84 = 7648U;

	t84 = (((x349&x350)|x351)%x352);

	if (t84 != 223U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x353 = 126U;
	static int16_t x354 = INT16_MAX;
	static int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t85 = 145;

	t85 = (((x353&x354)|x355)%x356);

	if (t85 != -32642) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	static volatile int64_t t86 = -577095254LL;

	t86 = (((x357&x358)|x359)%x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 33885855LLU;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 125201LLU;
	static uint64_t t87 = 24287494248144039LLU;

	t87 = (((x361&x362)|x363)%x364);

	if (t87 != 126879LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int8_t x368 = 28;
	static volatile int32_t t88 = 3;

	t88 = (((x365&x366)|x367)%x368);

	if (t88 != -8) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 76U;
	static volatile int16_t x375 = -1;
	int32_t t89 = -2617;

	t89 = (((x373&x374)|x375)%x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x378 = 29887U;
	volatile uint64_t x379 = UINT64_MAX;
	uint64_t t90 = 0LLU;

	t90 = (((x377&x378)|x379)%x380);

	if (t90 != 396LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = 6382;
	volatile int16_t x383 = INT16_MIN;
	static volatile int64_t x384 = -1LL;
	int64_t t91 = -83150946574848626LL;

	t91 = (((x381&x382)|x383)%x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = 1;
	static uint32_t x386 = 1U;
	int64_t x388 = 2255732LL;
	volatile int64_t t92 = 29859706LL;

	t92 = (((x385&x386)|x387)%x388);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x389 = INT64_MIN;
	int32_t x391 = -1;
	int16_t x392 = INT16_MAX;
	volatile int64_t t93 = -2LL;

	t93 = (((x389&x390)|x391)%x392);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	static uint32_t x394 = 231088U;
	static int64_t x395 = INT64_MAX;
	int16_t x396 = INT16_MIN;
	volatile int64_t t94 = -1352061079LL;

	t94 = (((x393&x394)|x395)%x396);

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x397 = -1;
	int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t95 = 0LL;

	t95 = (((x397&x398)|x399)%x400);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x403 = INT8_MAX;

	t96 = (((x401&x402)|x403)%x404);

	if (t96 != -32641) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -1;
	int64_t x406 = -3LL;
	volatile uint8_t x407 = 0U;
	volatile int8_t x408 = INT8_MIN;
	volatile int64_t t97 = -6552188004465LL;

	t97 = (((x405&x406)|x407)%x408);

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x409 = 2U;
	volatile int8_t x410 = -33;
	int64_t x411 = -1LL;

	t98 = (((x409&x410)|x411)%x412);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = -4;
	uint64_t x415 = 14418631128812LLU;
	uint32_t x416 = 543534043U;
	uint64_t t99 = 8604642LLU;

	t99 = (((x413&x414)|x415)%x416);

	if (t99 != 303637735LLU) { NG(); } else { ; }
	
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


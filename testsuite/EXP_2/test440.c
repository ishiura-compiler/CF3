#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -12;
volatile int16_t x17 = -3254;
uint32_t x29 = 1U;
uint32_t x30 = 0U;
volatile int32_t x35 = -2182;
static int16_t x38 = INT16_MAX;
static int8_t x41 = 10;
static int64_t x42 = 655LL;
volatile int32_t t10 = 3596;
uint16_t x55 = 68U;
uint16_t x58 = 976U;
int32_t t12 = 129;
int16_t x61 = INT16_MIN;
uint16_t x63 = 11884U;
volatile int8_t x64 = INT8_MIN;
int8_t x66 = 0;
volatile int32_t t14 = -1;
int16_t x77 = -6464;
volatile uint64_t x78 = UINT64_MAX;
int32_t x85 = -1;
int64_t x88 = INT64_MIN;
uint8_t x95 = 3U;
int32_t t21 = -94161;
volatile uint64_t t22 = 390167970LLU;
int64_t x124 = -1292909LL;
volatile int32_t t24 = -74107;
int8_t x130 = -1;
volatile int16_t x137 = -3968;
static int8_t x138 = -1;
uint16_t x143 = 2772U;
static uint8_t x153 = 2U;
static volatile uint64_t x156 = 24545904LLU;
uint16_t x159 = 2770U;
int8_t x163 = INT8_MAX;
int8_t x164 = INT8_MIN;
int32_t x169 = INT32_MIN;
uint16_t x182 = 959U;
int32_t t37 = 31749;
int64_t x192 = -31758694049554981LL;
int32_t x206 = INT32_MIN;
uint16_t x208 = 3U;
uint64_t x209 = UINT64_MAX;
int32_t t44 = -3411;
uint32_t x223 = 194U;
volatile uint8_t x227 = 0U;
int32_t x230 = 3;
int32_t t49 = 28241445;
static int16_t x234 = -1;
int32_t x239 = INT32_MAX;
volatile int64_t t51 = 1LL;
int8_t x244 = -5;
volatile int32_t t52 = 15;
int8_t x250 = -1;
volatile int32_t t53 = -303912418;
int32_t x255 = -242;
int32_t t56 = -6961207;
uint64_t x271 = UINT64_MAX;
uint8_t x272 = 88U;
static volatile int64_t x273 = -40548616051595736LL;
int32_t t58 = 1;
static volatile uint64_t x304 = 14546152746628LLU;
uint64_t x307 = 49915394287311844LLU;
uint64_t x309 = 10723090907925LLU;
uint64_t x312 = 207234528927619967LLU;
static volatile uint16_t x327 = 6134U;
static int64_t x328 = -45426291795297LL;
uint64_t x330 = UINT64_MAX;
int8_t x333 = INT8_MIN;
uint32_t x344 = 288735U;
static uint32_t x345 = UINT32_MAX;
int32_t x351 = -1;
volatile int8_t x362 = -1;
volatile uint8_t x374 = 3U;
int32_t x376 = 205246;
int16_t x381 = -1;
uint64_t x386 = 34528846801813LLU;
volatile uint64_t x395 = 10270LLU;
uint64_t x405 = UINT64_MAX;
uint16_t x421 = 1U;
int64_t x433 = 993788836577942LL;
int64_t x436 = INT64_MIN;
int64_t t84 = -1973223024096LL;
int8_t x444 = -1;
uint64_t x459 = 34818756986177925LLU;
static volatile int32_t x469 = 2;
static int8_t x475 = 1;
int16_t x488 = 5;
volatile uint64_t x495 = UINT64_MAX;
uint32_t x498 = 16480106U;
volatile int32_t t93 = 34327677;
volatile uint32_t x520 = 58U;
static int16_t x521 = INT16_MIN;
uint64_t x524 = UINT64_MAX;
int32_t t99 = 2374;


void f0(void) {
	int64_t x1 = 186184121514754LL;
	volatile int8_t x2 = INT8_MIN;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -101355239521LL;

	t0 = ((x1==(x2*x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	int32_t x10 = 177;
	volatile int8_t x11 = INT8_MIN;
	uint8_t x12 = 3U;
	volatile int32_t t1 = 3;

	t1 = ((x9==(x10*x11))&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	static int16_t x15 = INT16_MAX;
	volatile int8_t x16 = INT8_MIN;

	t2 = ((x13==(x14*x15))&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x18 = UINT16_MAX;
	uint8_t x19 = UINT8_MAX;
	static uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 1187664900311LLU;

	t3 = ((x17==(x18*x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	static uint16_t x26 = UINT16_MAX;
	static volatile uint64_t x27 = 240022050LLU;
	static int8_t x28 = INT8_MIN;
	int32_t t4 = -583;

	t4 = ((x25==(x26*x27))&x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = 13766;
	static volatile uint16_t x32 = 466U;
	int32_t t5 = -2066556;

	t5 = ((x29==(x30*x31))&x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 2721318U;
	int32_t x34 = 114042;
	static volatile int16_t x36 = -1;
	int32_t t6 = 0;

	t6 = ((x33==(x34*x35))&x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = 31146685;
	volatile int32_t x39 = -1;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 50LLU;

	t7 = ((x37==(x38*x39))&x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x43 = -3LL;
	volatile int32_t x44 = -7991205;
	int32_t t8 = -31;

	t8 = ((x41==(x42*x43))&x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MIN;
	int8_t x46 = -3;
	uint16_t x47 = 0U;
	volatile int16_t x48 = -1;
	volatile int32_t t9 = -1;

	t9 = ((x45==(x46*x47))&x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 3571U;
	uint8_t x50 = 17U;
	uint8_t x51 = 1U;
	int8_t x52 = INT8_MIN;

	t10 = ((x49==(x50*x51))&x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint8_t x54 = 1U;
	volatile uint8_t x56 = 11U;
	static volatile int32_t t11 = -10;

	t11 = ((x53==(x54*x55))&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint8_t x59 = 10U;
	uint16_t x60 = 114U;

	t12 = ((x57==(x58*x59))&x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x62 = 192907911LLU;
	volatile int32_t t13 = 57375360;

	t13 = ((x61==(x62*x63))&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 11;
	int8_t x67 = INT8_MIN;
	int16_t x68 = -2889;

	t14 = ((x65==(x66*x67))&x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = -1;
	int32_t x74 = INT32_MAX;
	static volatile int8_t x75 = 0;
	uint16_t x76 = UINT16_MAX;
	int32_t t15 = -138;

	t15 = ((x73==(x74*x75))&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t16 = 534048;

	t16 = ((x77==(x78*x79))&x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = -1;
	static uint32_t x87 = 675190203U;
	int64_t t17 = -768842281499920340LL;

	t17 = ((x85==(x86*x87))&x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 1LL;
	uint16_t x94 = 14U;
	int8_t x96 = -1;
	volatile int32_t t18 = 226603;

	t18 = ((x93==(x94*x95))&x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x101 = -471676690;
	static volatile uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 6U;
	int8_t x104 = 5;
	volatile int32_t t19 = -15915758;

	t19 = ((x101==(x102*x103))&x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = -1;
	volatile int64_t x106 = 1007214982293LL;
	int16_t x107 = INT16_MIN;
	static uint16_t x108 = 14U;
	int32_t t20 = 317717412;

	t20 = ((x105==(x106*x107))&x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 7748U;
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = INT16_MAX;
	int32_t x116 = -1778;

	t21 = ((x113==(x114*x115))&x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = 115U;
	int64_t x118 = -774LL;
	uint64_t x119 = 12373LLU;
	uint64_t x120 = 100612457LLU;

	t22 = ((x117==(x118*x119))&x120);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 915482U;
	uint64_t x123 = UINT64_MAX;
	int64_t t23 = -940263992099425936LL;

	t23 = ((x121==(x122*x123))&x124);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MAX;
	uint8_t x126 = 55U;
	int8_t x127 = INT8_MAX;
	int16_t x128 = -1;

	t24 = ((x125==(x126*x127))&x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x129 = 28;
	volatile uint16_t x131 = 4962U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t25 = -233386534;

	t25 = ((x129==(x130*x131))&x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = 1;
	uint64_t x134 = 768291318238LLU;
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = -1;
	int32_t t26 = 6;

	t26 = ((x133==(x134*x135))&x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x139 = 2U;
	static volatile int32_t x140 = INT32_MAX;
	volatile int32_t t27 = 1;

	t27 = ((x137==(x138*x139))&x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x141 = 19U;
	uint32_t x142 = 42747U;
	static volatile int64_t x144 = -1LL;
	volatile int64_t t28 = 222147LL;

	t28 = ((x141==(x142*x143))&x144);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	static uint8_t x146 = 5U;
	int64_t x147 = 157083824LL;
	uint16_t x148 = 55U;
	int32_t t29 = -60;

	t29 = ((x145==(x146*x147))&x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 46U;
	int16_t x150 = -1377;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -5800;
	static int32_t t30 = 1109567;

	t30 = ((x149==(x150*x151))&x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	volatile uint64_t t31 = 7448601699398LLU;

	t31 = ((x153==(x154*x155))&x156);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MAX;
	static uint64_t x158 = 2746603224201LLU;
	volatile uint64_t x160 = 21090934860334006LLU;
	static uint64_t t32 = 20LLU;

	t32 = ((x157==(x158*x159))&x160);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = 1U;
	int32_t t33 = 0;

	t33 = ((x161==(x162*x163))&x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x170 = 2U;
	static int8_t x171 = -1;
	int16_t x172 = 3763;
	static int32_t t34 = 308;

	t34 = ((x169==(x170*x171))&x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = 29436438LLU;
	volatile uint32_t x175 = 199662961U;
	int8_t x176 = INT8_MIN;
	int32_t t35 = -947;

	t35 = ((x173==(x174*x175))&x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x177 = -1;
	uint8_t x178 = 26U;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = -1LL;
	static int64_t t36 = 135LL;

	t36 = ((x177==(x178*x179))&x180);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = INT64_MAX;
	uint32_t x183 = UINT32_MAX;
	static volatile uint16_t x184 = UINT16_MAX;

	t37 = ((x181==(x182*x183))&x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = 7281;
	uint8_t x187 = 1U;
	int8_t x188 = -17;
	volatile int32_t t38 = -22679472;

	t38 = ((x185==(x186*x187))&x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x189 = -1481;
	int32_t x190 = 1;
	uint32_t x191 = 6U;
	static int64_t t39 = 2014LL;

	t39 = ((x189==(x190*x191))&x192);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = 123;
	static int64_t x195 = -1LL;
	static uint64_t x196 = 203605868115043698LLU;
	static volatile uint64_t t40 = 139693937532523LLU;

	t40 = ((x193==(x194*x195))&x196);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x197 = -1;
	static int8_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = 4820715353160005LL;
	int64_t t41 = 1090LL;

	t41 = ((x197==(x198*x199))&x200);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MAX;
	volatile int16_t x202 = -452;
	static int32_t x203 = 136;
	uint8_t x204 = UINT8_MAX;
	int32_t t42 = 974;

	t42 = ((x201==(x202*x203))&x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	uint32_t x207 = 3U;
	int32_t t43 = -2682;

	t43 = ((x205==(x206*x207))&x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x210 = 0;
	uint16_t x211 = UINT16_MAX;
	volatile int8_t x212 = INT8_MIN;

	t44 = ((x209==(x210*x211))&x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 4U;
	volatile int16_t x214 = 89;
	volatile uint64_t x215 = UINT64_MAX;
	volatile int64_t x216 = 832348614606LL;
	static int64_t t45 = 52LL;

	t45 = ((x213==(x214*x215))&x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	static int32_t x220 = -116242050;
	static int32_t t46 = -1;

	t46 = ((x217==(x218*x219))&x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = -1;
	int16_t x222 = 0;
	int32_t x224 = INT32_MIN;
	int32_t t47 = -183397368;

	t47 = ((x221==(x222*x223))&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = 1;
	int64_t x226 = -28237LL;
	static int64_t x228 = INT64_MIN;
	static int64_t t48 = -160656497918LL;

	t48 = ((x225==(x226*x227))&x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 10574U;
	uint16_t x231 = 1006U;
	int8_t x232 = INT8_MIN;

	t49 = ((x229==(x230*x231))&x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MAX;
	int32_t x235 = -1;
	static uint8_t x236 = 16U;
	static volatile int32_t t50 = 5;

	t50 = ((x233==(x234*x235))&x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 115U;
	uint64_t x238 = UINT64_MAX;
	int64_t x240 = INT64_MIN;

	t51 = ((x237==(x238*x239))&x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	static int32_t x242 = 2527600;
	int16_t x243 = -1;

	t52 = ((x241==(x242*x243))&x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x249 = 345301LLU;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;

	t53 = ((x249==(x250*x251))&x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MAX;
	static int8_t x254 = INT8_MIN;
	uint64_t x256 = 32195540LLU;
	uint64_t t54 = 118LLU;

	t54 = ((x253==(x254*x255))&x256);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x257 = INT64_MAX;
	uint32_t x258 = 34U;
	static int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;
	static int64_t t55 = 644210095936986920LL;

	t55 = ((x257==(x258*x259))&x260);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = -3088LL;
	int32_t x262 = 251708;
	int64_t x263 = -1LL;
	volatile uint16_t x264 = UINT16_MAX;

	t56 = ((x261==(x262*x263))&x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x269 = 1829422421269510LL;
	int8_t x270 = INT8_MIN;
	static int32_t t57 = -19;

	t57 = ((x269==(x270*x271))&x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = INT32_MAX;
	int16_t x275 = -1;
	int8_t x276 = -2;

	t58 = ((x273==(x274*x275))&x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x301 = -9702LL;
	static uint64_t x302 = 2387LLU;
	int32_t x303 = INT32_MAX;
	uint64_t t59 = 67667261692LLU;

	t59 = ((x301==(x302*x303))&x304);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -1;
	static int64_t x306 = INT64_MAX;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t60 = -47738288089263275LL;

	t60 = ((x305==(x306*x307))&x308);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x310 = 6176;
	int16_t x311 = INT16_MIN;
	volatile uint64_t t61 = 4LLU;

	t61 = ((x309==(x310*x311))&x312);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x313 = 104U;
	int64_t x314 = -77109373LL;
	static int64_t x315 = -1LL;
	int32_t x316 = -1;
	volatile int32_t t62 = -15228427;

	t62 = ((x313==(x314*x315))&x316);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x317 = -13084060893813755LL;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = 111;
	int8_t x320 = INT8_MIN;
	volatile int32_t t63 = -12974114;

	t63 = ((x317==(x318*x319))&x320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = 2179;
	int8_t x323 = INT8_MIN;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t64 = 115868078;

	t64 = ((x321==(x322*x323))&x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x325 = INT32_MIN;
	int8_t x326 = INT8_MIN;
	volatile int64_t t65 = 54586417179192LL;

	t65 = ((x325==(x326*x327))&x328);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x329 = 32;
	uint16_t x331 = UINT16_MAX;
	uint32_t x332 = 93U;
	uint32_t t66 = 3099037U;

	t66 = ((x329==(x330*x331))&x332);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x334 = 2;
	static int16_t x335 = -8;
	volatile uint32_t x336 = UINT32_MAX;
	static volatile uint32_t t67 = 610U;

	t67 = ((x333==(x334*x335))&x336);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = UINT8_MAX;
	volatile uint32_t t68 = 508182712U;

	t68 = ((x341==(x342*x343))&x344);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x346 = UINT32_MAX;
	static uint32_t x347 = 2135084999U;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t69 = -227;

	t69 = ((x345==(x346*x347))&x348);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = -1;
	uint16_t x350 = 5U;
	int8_t x352 = 50;
	static volatile int32_t t70 = -349;

	t70 = ((x349==(x350*x351))&x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x353 = 0U;
	static uint8_t x354 = 0U;
	static int8_t x355 = 0;
	static volatile int32_t x356 = INT32_MIN;
	volatile int32_t t71 = 945489462;

	t71 = ((x353==(x354*x355))&x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t72 = 613278256LL;

	t72 = ((x361==(x362*x363))&x364);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x369 = INT64_MIN;
	volatile int16_t x370 = -178;
	int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile int64_t t73 = -473811159130LL;

	t73 = ((x369==(x370*x371))&x372);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = 323876041U;
	volatile uint8_t x375 = 56U;
	volatile int32_t t74 = 5429;

	t74 = ((x373==(x374*x375))&x376);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x382 = 4;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	int32_t t75 = -2740872;

	t75 = ((x381==(x382*x383))&x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x385 = 1947LLU;
	volatile uint8_t x387 = UINT8_MAX;
	volatile uint8_t x388 = 49U;
	int32_t t76 = 226026659;

	t76 = ((x385==(x386*x387))&x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = 13;
	volatile int64_t x390 = -1LL;
	uint64_t x391 = 89653LLU;
	uint32_t x392 = UINT32_MAX;
	static uint32_t t77 = 726811990U;

	t77 = ((x389==(x390*x391))&x392);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x393 = 2;
	int64_t x394 = INT64_MAX;
	uint8_t x396 = 0U;
	int32_t t78 = -1;

	t78 = ((x393==(x394*x395))&x396);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = 0U;
	uint16_t x402 = UINT16_MAX;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t79 = 141;

	t79 = ((x401==(x402*x403))&x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x406 = 4452634653757LLU;
	int16_t x407 = INT16_MIN;
	int64_t x408 = -419114823846859264LL;
	static int64_t t80 = 1LL;

	t80 = ((x405==(x406*x407))&x408);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x413 = 977U;
	static volatile uint32_t x414 = 284688U;
	int32_t x415 = -1;
	static int32_t x416 = 10967;
	static int32_t t81 = -259619194;

	t81 = ((x413==(x414*x415))&x416);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = 14422336978LL;
	static int16_t x418 = -1;
	static int32_t x419 = -1995;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t82 = 3150638U;

	t82 = ((x417==(x418*x419))&x420);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x422 = INT8_MIN;
	int16_t x423 = 0;
	int16_t x424 = 1;
	volatile int32_t t83 = 543;

	t83 = ((x421==(x422*x423))&x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x434 = -131107004;
	uint16_t x435 = 5U;

	t84 = ((x433==(x434*x435))&x436);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x441 = INT32_MIN;
	uint64_t x442 = 9LLU;
	int32_t x443 = 15952;
	static int32_t t85 = 425245;

	t85 = ((x441==(x442*x443))&x444);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x449 = INT32_MIN;
	static int8_t x450 = -9;
	int8_t x451 = INT8_MIN;
	volatile int8_t x452 = INT8_MIN;
	int32_t t86 = -27;

	t86 = ((x449==(x450*x451))&x452);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MIN;
	int16_t x458 = -1;
	int64_t x460 = 13628695LL;
	volatile int64_t t87 = -1096108003656152LL;

	t87 = ((x457==(x458*x459))&x460);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MIN;
	static volatile uint64_t x463 = 17LLU;
	int8_t x464 = INT8_MAX;
	volatile int32_t t88 = -256361311;

	t88 = ((x461==(x462*x463))&x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x470 = -28528035517LL;
	uint8_t x471 = 22U;
	static uint8_t x472 = 1U;
	volatile int32_t t89 = 1;

	t89 = ((x469==(x470*x471))&x472);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x473 = -1LL;
	int32_t x474 = INT32_MIN;
	int8_t x476 = -1;
	int32_t t90 = 980;

	t90 = ((x473==(x474*x475))&x476);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x485 = UINT8_MAX;
	static volatile uint16_t x486 = UINT16_MAX;
	volatile uint64_t x487 = UINT64_MAX;
	int32_t t91 = 24767;

	t91 = ((x485==(x486*x487))&x488);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = -9;
	static int16_t x494 = -1;
	int8_t x496 = -54;
	int32_t t92 = 23;

	t92 = ((x493==(x494*x495))&x496);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x497 = INT64_MIN;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = 8030U;

	t93 = ((x497==(x498*x499))&x500);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x505 = 3;
	volatile uint8_t x506 = UINT8_MAX;
	static uint32_t x507 = 14003U;
	volatile int16_t x508 = INT16_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x505==(x506*x507))&x508);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x509 = -33086LL;
	int16_t x510 = -1;
	volatile uint64_t x511 = 75LLU;
	static int32_t x512 = INT32_MAX;
	volatile int32_t t95 = 198925280;

	t95 = ((x509==(x510*x511))&x512);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x513 = 79;
	int16_t x514 = INT16_MIN;
	static volatile int64_t x515 = 104850793425821LL;
	static uint32_t x516 = UINT32_MAX;
	uint32_t t96 = 13306U;

	t96 = ((x513==(x514*x515))&x516);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x517 = -1;
	int64_t x518 = 1LL;
	uint16_t x519 = UINT16_MAX;
	uint32_t t97 = 2808023U;

	t97 = ((x517==(x518*x519))&x520);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x522 = -1;
	int64_t x523 = INT64_MAX;
	uint64_t t98 = 342678230389024791LLU;

	t98 = ((x521==(x522*x523))&x524);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x529 = 9U;
	volatile uint16_t x530 = 388U;
	uint8_t x531 = UINT8_MAX;
	uint8_t x532 = 3U;

	t99 = ((x529==(x530*x531))&x532);

	if (t99 != 0) { NG(); } else { ; }
	
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


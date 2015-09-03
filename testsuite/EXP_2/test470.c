#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int32_t x11 = INT32_MAX;
int64_t x12 = INT64_MIN;
volatile int8_t x19 = INT8_MIN;
int16_t x25 = -1;
static int16_t x30 = INT16_MIN;
static int8_t x34 = INT8_MIN;
static uint8_t x38 = 26U;
int16_t x39 = 208;
static int8_t x57 = 0;
int32_t x78 = INT32_MAX;
volatile int16_t x84 = INT16_MIN;
static int64_t x90 = -6764054810569346LL;
uint32_t x97 = UINT32_MAX;
static volatile int16_t x101 = INT16_MIN;
int32_t x111 = 32108181;
int64_t t19 = -2LL;
int8_t x115 = 1;
int32_t t20 = 61365469;
volatile uint16_t x121 = 0U;
int16_t x122 = -1;
uint32_t x131 = 911328106U;
int64_t t24 = -632149949LL;
uint8_t x145 = 12U;
int32_t x146 = -1;
int64_t t27 = -8610LL;
static int32_t x157 = INT32_MAX;
static volatile int32_t t29 = 23;
int16_t x167 = INT16_MIN;
static uint32_t x169 = 18U;
volatile int8_t x171 = 0;
uint32_t x172 = 239408119U;
volatile uint32_t t31 = 999745U;
int32_t t32 = 779905106;
int32_t t34 = -53871;
int32_t x193 = 0;
int32_t x194 = INT32_MIN;
int32_t x201 = INT32_MIN;
int32_t x205 = INT32_MIN;
int16_t x208 = INT16_MIN;
int64_t t39 = -16111LL;
static volatile uint16_t x214 = 212U;
static volatile uint16_t x234 = 3999U;
volatile uint64_t x252 = 7586228493446213LLU;
int32_t x260 = INT32_MIN;
uint64_t x262 = UINT64_MAX;
int32_t x270 = -1;
static uint8_t x272 = 8U;
static int8_t x273 = -1;
int64_t x276 = INT64_MAX;
int64_t t50 = -1061972471842961027LL;
volatile int8_t x281 = INT8_MIN;
uint8_t x284 = 0U;
uint16_t x290 = 25U;
volatile uint64_t x291 = 1501LLU;
uint64_t t53 = 1447LLU;
static int8_t x311 = INT8_MIN;
static volatile uint16_t x313 = 2U;
uint64_t x326 = 1LLU;
uint32_t x328 = 547U;
uint16_t x335 = 887U;
static int32_t x339 = INT32_MIN;
int16_t x354 = INT16_MAX;
int8_t x370 = 0;
volatile int16_t x385 = INT16_MIN;
int64_t x387 = -1LL;
volatile int8_t x388 = INT8_MIN;
static uint32_t t65 = 160U;
volatile int16_t x401 = INT16_MIN;
uint8_t x416 = UINT8_MAX;
volatile uint64_t t69 = 3033040731486643LLU;
int16_t x422 = 123;
int16_t x423 = INT16_MIN;
volatile uint64_t t70 = 29201466374477LLU;
int16_t x430 = -1;
static uint32_t x432 = UINT32_MAX;
int64_t t72 = -49029LL;
int64_t x437 = 733LL;
uint32_t x440 = 184827U;
static uint32_t x447 = 208U;
int64_t x457 = 90LL;
int8_t x467 = INT8_MIN;
int64_t t77 = 43230829LL;
volatile int32_t x470 = INT32_MAX;
int8_t x473 = INT8_MAX;
static volatile uint16_t x475 = UINT16_MAX;
volatile int32_t t79 = 2026222;
uint8_t x488 = 45U;
uint64_t x508 = UINT64_MAX;
volatile int8_t x522 = 7;
int8_t x540 = -20;
int64_t t89 = 141LL;
static int8_t x547 = INT8_MIN;
int64_t t90 = -5LL;
int16_t x551 = INT16_MAX;
int16_t x558 = -1;
static int32_t x561 = INT32_MIN;
static int64_t x562 = 46606153LL;
int16_t x579 = INT16_MIN;
static volatile uint32_t x588 = UINT32_MAX;
int64_t t99 = -150320261503110666LL;


void f0(void) {
	int8_t x1 = 0;
	int8_t x3 = -4;
	int32_t x4 = 25712179;
	static volatile int32_t t0 = 611;

	t0 = ((x1&(x2*x3))-x4);

	if (t0 != -25712179) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	static uint32_t x10 = 35610U;
	static uint64_t t1 = 413894219910LLU;

	t1 = ((x9&(x10*x11))-x12);

	if (t1 != 9223372041149707494LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t2 = 536680103U;

	t2 = ((x13&(x14*x15))-x16);

	if (t2 != 128U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	static uint64_t x18 = UINT64_MAX;
	int16_t x20 = INT16_MAX;
	volatile uint64_t t3 = 2666980746714199LLU;

	t3 = ((x17&(x18*x19))-x20);

	if (t3 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 46U;
	uint64_t x23 = 15608589246LLU;
	int8_t x24 = -1;
	static uint64_t t4 = 1541286525LLU;

	t4 = ((x21&(x22*x23))-x24);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x26 = UINT8_MAX;
	volatile uint64_t x27 = 115706LLU;
	static int64_t x28 = INT64_MAX;
	volatile uint64_t t5 = 4674634152976867LLU;

	t5 = ((x25&(x26*x27))-x28);

	if (t5 != 9223372036884280839LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int16_t x31 = INT16_MAX;
	int8_t x32 = -1;
	int32_t t6 = -1;

	t6 = ((x29&(x30*x31))-x32);

	if (t6 != -1073709055) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -60538116766LL;
	static volatile int32_t x35 = -1;
	volatile uint32_t x36 = 1722955410U;
	volatile int64_t t7 = -228314224251LL;

	t7 = ((x33&(x34*x35))-x36);

	if (t7 != -1722955410LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -14;
	uint32_t x40 = UINT32_MAX;
	static volatile uint32_t t8 = 5687088U;

	t8 = ((x37&(x38*x39))-x40);

	if (t8 != 5409U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = 1166U;
	volatile int8_t x46 = INT8_MIN;
	volatile int64_t x47 = 339312LL;
	static int32_t x48 = INT32_MAX;
	int64_t t9 = 10347LL;

	t9 = ((x45&(x46*x47))-x48);

	if (t9 != -2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x58 = UINT16_MAX;
	uint16_t x59 = 105U;
	int32_t x60 = -1;
	volatile int32_t t10 = 5354;

	t10 = ((x57&(x58*x59))-x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 53379LLU;
	int8_t x66 = 27;
	uint32_t x67 = 236U;
	static int8_t x68 = 0;
	uint64_t t11 = 135246353822LLU;

	t11 = ((x65&(x66*x67))-x68);

	if (t11 != 4224LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = 31412084328664LL;
	uint32_t x79 = 519786U;
	static int8_t x80 = 15;
	int64_t t12 = 618106LL;

	t12 = ((x77&(x78*x79))-x80);

	if (t12 != 2988441729LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	volatile int8_t x82 = INT8_MAX;
	uint8_t x83 = UINT8_MAX;
	int64_t t13 = 23550737022LL;

	t13 = ((x81&(x82*x83))-x84);

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = -1LL;
	uint8_t x86 = 1U;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 51U;
	volatile int64_t t14 = 0LL;

	t14 = ((x85&(x86*x87))-x88);

	if (t14 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = 0LL;
	int8_t x91 = -11;
	static volatile int32_t x92 = 30968429;
	int64_t t15 = 19049863LL;

	t15 = ((x89&(x90*x91))-x92);

	if (t15 != -30968429LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x98 = INT16_MAX;
	int32_t x99 = 7;
	uint32_t x100 = 1498059U;
	static volatile uint32_t t16 = 343121531U;

	t16 = ((x97&(x98*x99))-x100);

	if (t16 != 4293698606U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;
	uint64_t t17 = 129752743060898LLU;

	t17 = ((x101&(x102*x103))-x104);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x105 = INT8_MIN;
	uint8_t x106 = 3U;
	int16_t x107 = INT16_MAX;
	volatile int16_t x108 = INT16_MAX;
	int32_t t18 = -873;

	t18 = ((x105&(x106*x107))-x108);

	if (t18 != 65409) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MIN;
	volatile uint32_t x110 = 508U;
	uint8_t x112 = 59U;

	t19 = ((x109&(x110*x111))-x112);

	if (t19 != -59LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = -243;
	int16_t x114 = INT16_MIN;
	int16_t x116 = 4;

	t20 = ((x113&(x114*x115))-x116);

	if (t20 != -32772) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = 1;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = 31015623U;
	uint32_t t21 = 254U;

	t21 = ((x117&(x118*x119))-x120);

	if (t21 != 4264017081U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x123 = 251000965U;
	int16_t x124 = INT16_MAX;
	uint32_t t22 = 18287U;

	t22 = ((x121&(x122*x123))-x124);

	if (t22 != 4294934529U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 435879431982178639LLU;
	static volatile int8_t x130 = INT8_MAX;
	int8_t x132 = -38;
	volatile uint64_t t23 = 70463966LLU;

	t23 = ((x129&(x130*x131))-x132);

	if (t23 != 2952945964LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = 26343955186LL;
	int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = UINT16_MAX;

	t24 = ((x137&(x138*x139))-x140);

	if (t24 != 26340163713LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x147 = -1LL;
	static int64_t x148 = INT64_MAX;
	int64_t t25 = -221LL;

	t25 = ((x145&(x146*x147))-x148);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x149 = UINT32_MAX;
	uint64_t x150 = UINT64_MAX;
	uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 1U;
	static uint64_t t26 = 19201252152589LLU;

	t26 = ((x149&(x150*x151))-x152);

	if (t26 != 4294967040LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x153 = 13860U;
	static int32_t x154 = -1;
	static volatile int64_t x155 = -5133294LL;
	uint16_t x156 = 1949U;

	t27 = ((x153&(x154*x155))-x156);

	if (t27 != 2695LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x158 = -1;
	volatile uint64_t x159 = 711167427529LLU;
	int32_t x160 = INT32_MIN;
	uint64_t t28 = 2180690299844897951LLU;

	t28 = ((x157&(x158*x159))-x160);

	if (t28 != 3944627255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = INT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	volatile uint8_t x163 = 46U;
	static int32_t x164 = -1;

	t29 = ((x161&(x162*x163))-x164);

	if (t29 != 26881) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x165 = 12U;
	uint16_t x166 = 1U;
	uint32_t x168 = UINT32_MAX;
	uint32_t t30 = 32U;

	t30 = ((x165&(x166*x167))-x168);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x170 = -1;

	t31 = ((x169&(x170*x171))-x172);

	if (t31 != 4055559177U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = INT16_MIN;
	volatile uint16_t x179 = 205U;
	int8_t x180 = -2;

	t32 = ((x177&(x178*x179))-x180);

	if (t32 != -2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x181 = 84169376U;
	volatile uint8_t x182 = UINT8_MAX;
	static volatile int16_t x183 = INT16_MIN;
	volatile int8_t x184 = INT8_MAX;
	uint32_t t33 = 2583138U;

	t33 = ((x181&(x182*x183))-x184);

	if (t33 != 83885953U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x185 = 2U;
	int32_t x186 = 27;
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = -1;

	t34 = ((x185&(x186*x187))-x188);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = 1;
	uint64_t x191 = 4945141703691508233LLU;
	int64_t x192 = -2673863850LL;
	static volatile uint64_t t35 = 1019701750469LLU;

	t35 = ((x189&(x190*x191))-x192);

	if (t35 != 4945141706365365418LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x195 = UINT32_MAX;
	volatile uint8_t x196 = 17U;
	volatile uint32_t t36 = 717U;

	t36 = ((x193&(x194*x195))-x196);

	if (t36 != 4294967279U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x197 = 60U;
	int16_t x198 = INT16_MIN;
	static uint8_t x199 = UINT8_MAX;
	volatile int16_t x200 = INT16_MAX;
	volatile int32_t t37 = -3696269;

	t37 = ((x197&(x198*x199))-x200);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x202 = 0LL;
	static int8_t x203 = INT8_MIN;
	volatile uint32_t x204 = 17U;
	int64_t t38 = 1853975785LL;

	t38 = ((x201&(x202*x203))-x204);

	if (t38 != -17LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x206 = INT16_MAX;
	int64_t x207 = -3LL;

	t39 = ((x205&(x206*x207))-x208);

	if (t39 != -2147450880LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = INT64_MIN;
	int8_t x215 = 0;
	volatile uint8_t x216 = 2U;
	int64_t t40 = 6489086177738755LL;

	t40 = ((x213&(x214*x215))-x216);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = -3868;
	int8_t x222 = 12;
	int8_t x223 = -16;
	uint8_t x224 = UINT8_MAX;
	int32_t t41 = 230222429;

	t41 = ((x221&(x222*x223))-x224);

	if (t41 != -4287) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MAX;
	uint16_t x231 = UINT16_MAX;
	uint8_t x232 = UINT8_MAX;
	static int32_t t42 = 1659;

	t42 = ((x229&(x230*x231))-x232);

	if (t42 != 8322689) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = 1U;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;
	static uint32_t t43 = 44915U;

	t43 = ((x233&(x234*x235))-x236);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile int32_t x238 = INT32_MIN;
	static uint32_t x239 = 420975733U;
	uint8_t x240 = 0U;
	uint64_t t44 = 354111LLU;

	t44 = ((x237&(x238*x239))-x240);

	if (t44 != 2147483648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = 12274;
	static volatile int8_t x247 = 3;
	int64_t x248 = INT64_MAX;
	volatile int64_t t45 = 3LL;

	t45 = ((x245&(x246*x247))-x248);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x250 = 165410198829648LL;
	volatile int16_t x251 = -249;
	volatile uint64_t t46 = 4602506482126199793LLU;

	t46 = ((x249&(x250*x251))-x252);

	if (t46 != 18397970705707523003LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x257 = 61282737U;
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 1191205698595LLU;
	uint64_t t47 = 247LLU;

	t47 = ((x257&(x258*x259))-x260);

	if (t47 != 2147483648LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x261 = 10;
	static int64_t x263 = 259LL;
	uint8_t x264 = 26U;
	static volatile uint64_t t48 = 13065LLU;

	t48 = ((x261&(x262*x263))-x264);

	if (t48 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x269 = INT64_MAX;
	int16_t x271 = -181;
	int64_t t49 = -4163221321963563LL;

	t49 = ((x269&(x270*x271))-x272);

	if (t49 != 173LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;

	t50 = ((x273&(x274*x275))-x276);

	if (t50 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x282 = 7U;
	int16_t x283 = -1;
	static volatile int32_t t51 = 12688110;

	t51 = ((x281&(x282*x283))-x284);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = 6;
	uint64_t x286 = 983220031LLU;
	uint32_t x287 = 78872U;
	uint16_t x288 = 2728U;
	volatile uint64_t t52 = 2489611LLU;

	t52 = ((x285&(x286*x287))-x288);

	if (t52 != 18446744073709548888LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x289 = -1LL;
	static volatile int8_t x292 = INT8_MIN;

	t53 = ((x289&(x290*x291))-x292);

	if (t53 != 37653LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 1234U;
	int8_t x308 = -1;
	static volatile int32_t t54 = 84605;

	t54 = ((x305&(x306*x307))-x308);

	if (t54 != -157951) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = -1;
	uint16_t x312 = UINT16_MAX;
	int32_t t55 = 127467;

	t55 = ((x309&(x310*x311))-x312);

	if (t55 != -65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x314 = -97988LL;
	int64_t x315 = -1LL;
	int8_t x316 = INT8_MAX;
	volatile int64_t t56 = 484713984LL;

	t56 = ((x313&(x314*x315))-x316);

	if (t56 != -127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x325 = INT64_MAX;
	static volatile uint8_t x327 = UINT8_MAX;
	uint64_t t57 = 12912467320215877LLU;

	t57 = ((x325&(x326*x327))-x328);

	if (t57 != 18446744073709551324LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x333 = 0U;
	static volatile int8_t x334 = -40;
	uint8_t x336 = 6U;
	volatile int32_t t58 = -8513522;

	t58 = ((x333&(x334*x335))-x336);

	if (t58 != -6) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x337 = 0;
	int64_t x338 = 1617663672LL;
	static int16_t x340 = INT16_MAX;
	int64_t t59 = 8037763438064672LL;

	t59 = ((x337&(x338*x339))-x340);

	if (t59 != -32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x353 = 46511LLU;
	static uint64_t x355 = 813489LLU;
	int64_t x356 = INT64_MAX;
	uint64_t t60 = 10353061LLU;

	t60 = ((x353&(x354*x355))-x356);

	if (t60 != 9223372036854780944LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x361 = -895370450LL;
	int8_t x362 = 17;
	static volatile int32_t x363 = 122;
	int8_t x364 = INT8_MAX;
	volatile int64_t t61 = 1LL;

	t61 = ((x361&(x362*x363))-x364);

	if (t61 != 1931LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x365 = -1;
	volatile int32_t x366 = -2358;
	uint8_t x367 = 18U;
	static int32_t x368 = -13463735;
	volatile int32_t t62 = 65;

	t62 = ((x365&(x366*x367))-x368);

	if (t62 != 13421291) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x369 = 1U;
	uint16_t x371 = 879U;
	static uint8_t x372 = 62U;
	volatile uint32_t t63 = 9U;

	t63 = ((x369&(x370*x371))-x372);

	if (t63 != 4294967234U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x386 = INT8_MIN;
	int64_t t64 = 179629848164LL;

	t64 = ((x385&(x386*x387))-x388);

	if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = -6698069;
	static uint8_t x394 = 1U;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 1590080U;

	t65 = ((x393&(x394*x395))-x396);

	if (t65 != 4293377259U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x402 = 15U;
	volatile int64_t x403 = 3555757435915LL;
	int32_t x404 = 91;
	volatile int64_t t66 = -1056752665LL;

	t66 = ((x401&(x402*x403))-x404);

	if (t66 != 53336361533349LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x409 = 6213327;
	int16_t x410 = INT16_MAX;
	static int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MAX;
	volatile int32_t t67 = -765403;

	t67 = ((x409&(x410*x411))-x412);

	if (t67 != 4194305) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x413 = 20519U;
	static int64_t x414 = -1LL;
	static int8_t x415 = INT8_MIN;
	volatile int64_t t68 = 34610475711LL;

	t68 = ((x413&(x414*x415))-x416);

	if (t68 != -255LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x417 = 7426610U;
	int32_t x418 = INT32_MIN;
	static volatile int64_t x419 = -1LL;
	uint64_t x420 = 7356230660LLU;

	t69 = ((x417&(x418*x419))-x420);

	if (t69 != 18446744066353320956LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x421 = UINT64_MAX;
	volatile int64_t x424 = INT64_MIN;

	t70 = ((x421&(x422*x423))-x424);

	if (t70 != 9223372036850745344LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x429 = -9142;
	uint32_t x431 = 2629U;
	uint32_t t71 = 9115U;

	t71 = ((x429&(x430*x431))-x432);

	if (t71 != 4294956043U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MAX;
	static int64_t x435 = -1174536484LL;
	static volatile int32_t x436 = INT32_MAX;

	t72 = ((x433&(x434*x435))-x436);

	if (t72 != -2147483355LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x438 = 24164LLU;
	int16_t x439 = -2;
	uint64_t t73 = 6162LLU;

	t73 = ((x437&(x438*x439))-x440);

	if (t73 != 18446744073709367325LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x445 = INT64_MIN;
	int32_t x446 = -50;
	uint64_t x448 = 5896LLU;
	volatile uint64_t t74 = 5869153095362LLU;

	t74 = ((x445&(x446*x447))-x448);

	if (t74 != 18446744073709545720LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x449 = INT64_MIN;
	static int8_t x450 = INT8_MIN;
	int8_t x451 = -6;
	int16_t x452 = -1;
	volatile int64_t t75 = -19968438LL;

	t75 = ((x449&(x450*x451))-x452);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x458 = 92187637401938481LLU;
	int64_t x459 = INT64_MAX;
	volatile int32_t x460 = 5495657;
	uint64_t t76 = 0LLU;

	t76 = ((x457&(x458*x459))-x460);

	if (t76 != 18446744073704056033LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x465 = -1;
	uint16_t x466 = UINT16_MAX;
	int64_t x468 = INT64_MIN;

	t77 = ((x465&(x466*x467))-x468);

	if (t77 != 9223372036846387328LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x469 = 3304U;
	int8_t x471 = -1;
	volatile int8_t x472 = INT8_MIN;
	static uint32_t t78 = 280035U;

	t78 = ((x469&(x470*x471))-x472);

	if (t78 != 128U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x474 = 1;
	static volatile uint8_t x476 = 0U;

	t79 = ((x473&(x474*x475))-x476);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x477 = INT32_MAX;
	int64_t x478 = INT64_MIN;
	int8_t x479 = 1;
	int32_t x480 = -121;
	volatile int64_t t80 = 21765LL;

	t80 = ((x477&(x478*x479))-x480);

	if (t80 != 121LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x485 = -1;
	static volatile uint64_t x486 = 3405LLU;
	volatile uint16_t x487 = 3622U;
	uint64_t t81 = 598884685207LLU;

	t81 = ((x485&(x486*x487))-x488);

	if (t81 != 12332865LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x493 = 32;
	static volatile int32_t x494 = 2025835;
	uint8_t x495 = 101U;
	int64_t x496 = -7448654109LL;
	int64_t t82 = -130284457583871345LL;

	t82 = ((x493&(x494*x495))-x496);

	if (t82 != 7448654141LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x497 = 4269U;
	int16_t x498 = INT16_MAX;
	static uint64_t x499 = 856900371773202LLU;
	uint8_t x500 = 55U;
	uint64_t t83 = 28LLU;

	t83 = ((x497&(x498*x499))-x500);

	if (t83 != 117LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x505 = 1047918;
	int16_t x506 = -1;
	volatile uint32_t x507 = UINT32_MAX;
	volatile uint64_t t84 = 242021871358037589LLU;

	t84 = ((x505&(x506*x507))-x508);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x513 = -1;
	uint64_t x514 = UINT64_MAX;
	volatile int16_t x515 = -303;
	uint8_t x516 = 0U;
	uint64_t t85 = 1089977715LLU;

	t85 = ((x513&(x514*x515))-x516);

	if (t85 != 303LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x521 = INT8_MAX;
	static volatile uint8_t x523 = 0U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t86 = 376730165;

	t86 = ((x521&(x522*x523))-x524);

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x533 = UINT64_MAX;
	int16_t x534 = INT16_MAX;
	static int8_t x535 = INT8_MIN;
	volatile uint64_t x536 = 7525148679881465527LLU;
	volatile uint64_t t87 = 312363596617665507LLU;

	t87 = ((x533&(x534*x535))-x536);

	if (t87 != 10921595393823891913LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x537 = 1;
	static int8_t x538 = 2;
	int8_t x539 = -1;
	int32_t t88 = 110983;

	t88 = ((x537&(x538*x539))-x540);

	if (t88 != 20) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x541 = 98U;
	static uint16_t x542 = 31024U;
	static uint8_t x543 = UINT8_MAX;
	int64_t x544 = INT64_MAX;

	t89 = ((x541&(x542*x543))-x544);

	if (t89 != -9223372036854775743LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x545 = -414462LL;
	int16_t x546 = INT16_MIN;
	static uint16_t x548 = 16379U;

	t90 = ((x545&(x546*x547))-x548);

	if (t90 != 4177925LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x549 = 3009;
	int8_t x550 = INT8_MAX;
	int8_t x552 = INT8_MAX;
	int32_t t91 = 1614277;

	t91 = ((x549&(x550*x551))-x552);

	if (t91 != 2818) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x553 = INT8_MIN;
	uint64_t x554 = 31416567LLU;
	int16_t x555 = -384;
	static int8_t x556 = INT8_MIN;
	volatile uint64_t t92 = 64254588LLU;

	t92 = ((x553&(x554*x555))-x556);

	if (t92 != 18446744061645590016LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x557 = -1;
	int16_t x559 = INT16_MAX;
	static volatile int32_t x560 = -1;
	volatile int32_t t93 = -1;

	t93 = ((x557&(x558*x559))-x560);

	if (t93 != -32766) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x563 = 40U;
	static volatile uint16_t x564 = 2U;
	int64_t t94 = 149450154558LL;

	t94 = ((x561&(x562*x563))-x564);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MIN;
	int8_t x566 = -1;
	int8_t x567 = -1;
	int16_t x568 = INT16_MAX;
	static volatile int32_t t95 = 477;

	t95 = ((x565&(x566*x567))-x568);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x569 = 0;
	static uint8_t x570 = UINT8_MAX;
	volatile int16_t x571 = 172;
	uint32_t x572 = 570U;
	uint32_t t96 = 5U;

	t96 = ((x569&(x570*x571))-x572);

	if (t96 != 4294966726U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = INT8_MIN;
	static uint32_t x578 = 10U;
	int8_t x580 = INT8_MIN;
	uint32_t t97 = 5U;

	t97 = ((x577&(x578*x579))-x580);

	if (t97 != 4294639744U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x585 = INT16_MIN;
	uint8_t x586 = 3U;
	int32_t x587 = 2312;
	static volatile uint32_t t98 = 127901U;

	t98 = ((x585&(x586*x587))-x588);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x589 = INT32_MAX;
	int64_t x590 = 408185180014080LL;
	uint16_t x591 = 1112U;
	static uint8_t x592 = 2U;

	t99 = ((x589&(x590*x591))-x592);

	if (t99 != 988811262LL) { NG(); } else { ; }
	
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


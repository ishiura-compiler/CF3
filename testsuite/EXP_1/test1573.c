#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
uint32_t x7 = 256399907U;
uint32_t t1 = 1011864U;
uint32_t x19 = UINT32_MAX;
volatile uint64_t x28 = 41553LLU;
static volatile int64_t x29 = INT64_MIN;
volatile int64_t t8 = 35244906422582LL;
volatile int8_t x38 = -2;
uint8_t x39 = UINT8_MAX;
uint32_t x40 = 35264U;
static volatile uint32_t t9 = 20222U;
static int16_t x41 = INT16_MIN;
static uint64_t x48 = 2129284407013974LLU;
static uint64_t t11 = 4982LLU;
uint8_t x58 = 115U;
static uint32_t x61 = 45039128U;
volatile uint8_t x67 = 109U;
volatile uint32_t t15 = UINT32_MAX;
uint64_t x73 = UINT64_MAX;
static volatile int16_t x75 = 2;
uint8_t x81 = 13U;
volatile uint8_t x83 = 58U;
int8_t x86 = INT8_MAX;
int32_t x90 = INT32_MIN;
static uint32_t t21 = 7U;
uint64_t x95 = 50LLU;
int16_t x96 = INT16_MIN;
int32_t x110 = -1;
uint64_t x111 = 1666035229181930LLU;
int32_t x113 = INT32_MIN;
int16_t x120 = -1;
static int32_t x121 = 15753;
int16_t x123 = -12597;
int64_t x126 = INT64_MIN;
volatile int32_t x132 = 155809;
uint32_t x133 = 626U;
uint32_t x136 = UINT32_MAX;
volatile int16_t x138 = -15;
static volatile int32_t x150 = INT32_MAX;
uint16_t x156 = UINT16_MAX;
volatile uint32_t t37 = 743884U;
int8_t x158 = INT8_MIN;
volatile int8_t x163 = INT8_MIN;
static int8_t x164 = INT8_MIN;
int64_t x177 = -27862LL;
uint32_t t43 = UINT32_MAX;
int8_t x190 = INT8_MIN;
int64_t x191 = INT64_MIN;
uint8_t x192 = UINT8_MAX;
int64_t t46 = -242327527339LL;
int8_t x193 = INT8_MIN;
uint64_t x202 = 3847559074LLU;
int64_t x218 = -1727LL;
volatile uint64_t t52 = 692826478501LLU;
uint8_t x225 = UINT8_MAX;
volatile int32_t t56 = 454708311;
uint32_t x238 = 13U;
static int32_t x239 = INT32_MAX;
int8_t x243 = INT8_MIN;
int64_t x249 = INT64_MAX;
volatile int16_t x253 = INT16_MIN;
uint64_t x257 = 1005772LLU;
static int32_t t62 = -6002;
volatile uint32_t x261 = UINT32_MAX;
volatile int32_t x262 = INT32_MAX;
volatile uint16_t x264 = 7268U;
volatile int8_t x266 = -61;
int32_t x267 = INT32_MAX;
static int64_t x270 = -1497590631LL;
int32_t x271 = 65041;
uint64_t x276 = UINT64_MAX;
volatile int8_t x287 = 7;
uint16_t x293 = 3622U;
int8_t x301 = INT8_MIN;
volatile int64_t t73 = -225556428LL;
uint64_t x308 = 24754LLU;
int16_t x315 = INT16_MIN;
volatile int32_t t76 = 65413305;
int32_t t77 = -872;
int32_t x328 = INT32_MIN;
volatile int32_t x329 = INT32_MIN;
uint64_t x331 = 38208665LLU;
int16_t x333 = -1;
static int32_t x340 = 170594098;
static volatile uint16_t x341 = 3U;
static volatile int64_t t83 = -877251322391LL;
volatile uint8_t x346 = UINT8_MAX;
int32_t x353 = 2;
volatile uint64_t x355 = 58372484LLU;
volatile int8_t x359 = 1;
int16_t x360 = 2961;
int8_t x374 = -1;
int64_t t91 = -790LL;
static volatile uint32_t x379 = 428U;
int8_t x380 = INT8_MIN;
volatile int32_t x383 = -1;
int8_t x386 = INT8_MAX;
static uint16_t x390 = UINT16_MAX;
volatile int32_t t95 = -126744855;
int64_t x398 = INT64_MAX;
int8_t x403 = INT8_MIN;
int32_t x407 = INT32_MIN;


void f0(void) {
	int64_t x1 = -80716881319793LL;
	int16_t x2 = INT16_MAX;
	int8_t x3 = INT8_MAX;
	volatile int16_t x4 = -121;
	int32_t t0 = 4976668;

	t0 = (((x1<=x2)/x3)^x4);

	if (t0 != -121) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	uint32_t x8 = 14U;

	t1 = (((x5<=x6)/x7)^x8);

	if (t1 != 14U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 5439350U;
	int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;
	int8_t x12 = 0;
	int32_t t2 = 208;

	t2 = (((x9<=x10)/x11)^x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	volatile int32_t x15 = INT32_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -22;

	t3 = (((x13<=x14)/x15)^x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = INT64_MIN;

	t4 = (((x17<=x18)/x19)^x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 36U;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -533;

	t5 = (((x21<=x22)/x23)^x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int16_t x26 = -8697;
	uint64_t x27 = 234693731093424605LLU;
	uint64_t t6 = 2303951526449LLU;

	t6 = (((x25<=x26)/x27)^x28);

	if (t6 != 41553LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = -24;
	volatile int8_t x31 = INT8_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 1;

	t7 = (((x29<=x30)/x31)^x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 6995U;
	volatile int32_t x34 = INT32_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	int64_t x36 = -47488663850745LL;

	t8 = (((x33<=x34)/x35)^x36);

	if (t8 != -47488663850745LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;

	t9 = (((x37<=x38)/x39)^x40);

	if (t9 != 35264U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MAX;
	static int8_t x43 = -1;
	volatile int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = INT64_MAX;

	t10 = (((x41<=x42)/x43)^x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;

	t11 = (((x45<=x46)/x47)^x48);

	if (t11 != 2129284407013974LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MAX;
	uint32_t x51 = UINT32_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x49<=x50)/x51)^x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 39993678876950LL;
	static int16_t x59 = 769;
	int16_t x60 = INT16_MAX;
	int32_t t13 = 320;

	t13 = (((x57<=x58)/x59)^x60);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -1;
	uint32_t x63 = UINT32_MAX;
	uint16_t x64 = UINT16_MAX;
	static uint32_t t14 = 1294U;

	t14 = (((x61<=x62)/x63)^x64);

	if (t14 != 65535U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 14774386U;
	uint16_t x66 = 18U;
	static uint32_t x68 = UINT32_MAX;

	t15 = (((x65<=x66)/x67)^x68);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 198U;
	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = 70372;

	t16 = (((x69<=x70)/x71)^x72);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x74 = UINT16_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -3;

	t17 = (((x73<=x74)/x75)^x76);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 1941;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = INT64_MAX;
	int8_t x80 = -21;
	int64_t t18 = -42391394LL;

	t18 = (((x77<=x78)/x79)^x80);

	if (t18 != -21LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 133756203LLU;
	static volatile uint64_t t19 = 29LLU;

	t19 = (((x81<=x82)/x83)^x84);

	if (t19 != 133756203LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -4LL;
	volatile int64_t x87 = -1LL;
	volatile int16_t x88 = -1;
	volatile int64_t t20 = 22084202186198LL;

	t20 = (((x85<=x86)/x87)^x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = 90U;
	volatile uint32_t x91 = 115614U;
	int8_t x92 = INT8_MIN;

	t21 = (((x89<=x90)/x91)^x92);

	if (t21 != 4294967168U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int32_t x94 = -1;
	volatile uint64_t t22 = 424182825800LLU;

	t22 = (((x93<=x94)/x95)^x96);

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 4662LLU;
	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = -1;
	volatile int32_t t23 = 9216304;

	t23 = (((x97<=x98)/x99)^x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	static uint16_t x102 = UINT16_MAX;
	static int64_t x103 = 159500474621434LL;
	volatile int32_t x104 = 3365932;
	volatile int64_t t24 = -564043832578198830LL;

	t24 = (((x101<=x102)/x103)^x104);

	if (t24 != 3365932LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MAX;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = 42;
	volatile int32_t t25 = 1881;

	t25 = (((x105<=x106)/x107)^x108);

	if (t25 != 42) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -25;
	volatile int8_t x112 = -1;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (((x109<=x110)/x111)^x112);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = 7709;
	volatile int8_t x115 = INT8_MAX;
	static int64_t x116 = 100630981510LL;
	int64_t t27 = 35086LL;

	t27 = (((x113<=x114)/x115)^x116);

	if (t27 != 100630981510LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = 812815210;
	static int32_t x118 = -1;
	volatile int16_t x119 = -6143;
	int32_t t28 = -374664023;

	t28 = (((x117<=x118)/x119)^x120);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x122 = UINT16_MAX;
	int32_t x124 = 482498367;
	volatile int32_t t29 = 34679500;

	t29 = (((x121<=x122)/x123)^x124);

	if (t29 != 482498367) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int16_t x127 = -1;
	int16_t x128 = -2578;
	volatile int32_t t30 = 20396;

	t30 = (((x125<=x126)/x127)^x128);

	if (t30 != -2578) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	volatile uint32_t x130 = UINT32_MAX;
	static int8_t x131 = INT8_MAX;
	volatile int32_t t31 = -20221877;

	t31 = (((x129<=x130)/x131)^x132);

	if (t31 != 155809) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x134 = UINT8_MAX;
	uint8_t x135 = 5U;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x133<=x134)/x135)^x136);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 6464;
	int32_t x139 = -1;
	volatile uint8_t x140 = UINT8_MAX;
	volatile int32_t t33 = 106;

	t33 = (((x137<=x138)/x139)^x140);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int32_t x142 = INT32_MIN;
	volatile int32_t x143 = -59930979;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (((x141<=x142)/x143)^x144);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 1322U;
	static int8_t x146 = INT8_MAX;
	int16_t x147 = -256;
	int16_t x148 = -2;
	int32_t t35 = 1;

	t35 = (((x145<=x146)/x147)^x148);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MAX;
	static int32_t x151 = INT32_MIN;
	static int32_t x152 = -1;
	static int32_t t36 = 1310;

	t36 = (((x149<=x150)/x151)^x152);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = 6181958551LL;
	uint32_t x155 = UINT32_MAX;

	t37 = (((x153<=x154)/x155)^x156);

	if (t37 != 65535U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -63633430842LL;
	int8_t x159 = INT8_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x157<=x158)/x159)^x160);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -295;
	uint32_t x162 = 1522342470U;
	int32_t t39 = -1989426;

	t39 = (((x161<=x162)/x163)^x164);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -14354;
	uint64_t x166 = UINT64_MAX;
	volatile int16_t x167 = 252;
	int32_t x168 = 1;
	volatile int32_t t40 = -37503418;

	t40 = (((x165<=x166)/x167)^x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -181;
	static volatile int64_t x170 = -1LL;
	int16_t x171 = -1;
	uint32_t x172 = 160071U;
	volatile uint32_t t41 = 59041347U;

	t41 = (((x169<=x170)/x171)^x172);

	if (t41 != 4294807224U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	static int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	volatile int32_t x176 = INT32_MIN;
	static volatile int32_t t42 = INT32_MIN;

	t42 = (((x173<=x174)/x175)^x176);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x178 = 3;
	int8_t x179 = -1;
	uint32_t x180 = 0U;

	t43 = (((x177<=x178)/x179)^x180);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 81LL;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = INT8_MAX;
	static int8_t x184 = 54;
	volatile int32_t t44 = 1785;

	t44 = (((x181<=x182)/x183)^x184);

	if (t44 != 54) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (((x185<=x186)/x187)^x188);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = -9LL;

	t46 = (((x189<=x190)/x191)^x192);

	if (t46 != 255LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = 258;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	uint64_t t47 = 93992082108751821LLU;

	t47 = (((x193<=x194)/x195)^x196);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	static uint64_t x199 = 67LLU;
	int8_t x200 = 1;
	volatile uint64_t t48 = 158LLU;

	t48 = (((x197<=x198)/x199)^x200);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = UINT8_MAX;
	int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t49 = 337115478012LLU;

	t49 = (((x201<=x202)/x203)^x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -32151066133565417LL;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile int64_t t50 = 58710933579LL;

	t50 = (((x205<=x206)/x207)^x208);

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x209 = 7U;
	volatile int32_t x210 = INT32_MAX;
	volatile uint32_t x211 = 504141U;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t51 = 6511742U;

	t51 = (((x209<=x210)/x211)^x212);

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -6673492653LL;
	volatile uint8_t x219 = 96U;
	uint64_t x220 = 19364LLU;

	t52 = (((x217<=x218)/x219)^x220);

	if (t52 != 19364LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x221 = 1U;
	volatile uint16_t x222 = 111U;
	static uint32_t x223 = 1941U;
	uint64_t x224 = UINT64_MAX;
	static uint64_t t53 = UINT64_MAX;

	t53 = (((x221<=x222)/x223)^x224);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x226 = 164217U;
	uint16_t x227 = 39U;
	int64_t x228 = -523842454LL;
	int64_t t54 = 50LL;

	t54 = (((x225<=x226)/x227)^x228);

	if (t54 != -523842454LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x229 = INT16_MIN;
	uint32_t x230 = 411292U;
	static uint8_t x231 = 2U;
	int32_t x232 = INT32_MAX;
	volatile int32_t t55 = INT32_MAX;

	t55 = (((x229<=x230)/x231)^x232);

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	static uint16_t x234 = 52U;
	uint8_t x235 = 64U;
	int16_t x236 = INT16_MAX;

	t56 = (((x233<=x234)/x235)^x236);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = UINT32_MAX;
	static int64_t x240 = -179573203LL;
	static volatile int64_t t57 = -4049465769242291LL;

	t57 = (((x237<=x238)/x239)^x240);

	if (t57 != -179573203LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -14LL;
	volatile uint64_t x242 = 146234LLU;
	volatile uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x241<=x242)/x243)^x244);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = 2;
	int16_t x247 = -1;
	uint16_t x248 = 92U;
	static int32_t t59 = 10440172;

	t59 = (((x245<=x246)/x247)^x248);

	if (t59 != -93) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = INT64_MIN;
	static int16_t x251 = INT16_MAX;
	static volatile uint64_t x252 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

	t60 = (((x249<=x250)/x251)^x252);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	static uint8_t x256 = 58U;
	int64_t t61 = 119113827LL;

	t61 = (((x253<=x254)/x255)^x256);

	if (t61 != 58LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 1241U;
	volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = 3168;

	t62 = (((x257<=x258)/x259)^x260);

	if (t62 != 3168) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x263 = UINT16_MAX;
	volatile int32_t t63 = -8895847;

	t63 = (((x261<=x262)/x263)^x264);

	if (t63 != 7268) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x268 = 8U;
	static volatile uint32_t t64 = 40066996U;

	t64 = (((x265<=x266)/x267)^x268);

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	uint8_t x272 = 0U;
	static int32_t t65 = 74273197;

	t65 = (((x269<=x270)/x271)^x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = 4;
	uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MAX;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x273<=x274)/x275)^x276);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 15479754685964612LLU;
	static uint16_t x280 = 12691U;
	uint64_t t67 = 0LLU;

	t67 = (((x277<=x278)/x279)^x280);

	if (t67 != 12691LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x281 = -7362;
	uint16_t x282 = 2U;
	int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	int32_t t68 = -8;

	t68 = (((x281<=x282)/x283)^x284);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 64U;
	uint32_t x286 = UINT32_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static volatile int32_t t69 = 4018;

	t69 = (((x285<=x286)/x287)^x288);

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 3637U;
	int32_t x290 = -105779016;
	volatile int64_t x291 = -1LL;
	int8_t x292 = INT8_MAX;
	int64_t t70 = 119589LL;

	t70 = (((x289<=x290)/x291)^x292);

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 2U;
	volatile int8_t x296 = -1;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (((x293<=x294)/x295)^x296);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	volatile int64_t x298 = -254745LL;
	volatile int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MAX;
	int64_t t72 = INT64_MAX;

	t72 = (((x297<=x298)/x299)^x300);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x302 = -1;
	volatile int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MIN;

	t73 = (((x301<=x302)/x303)^x304);

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x305 = UINT8_MAX;
	int16_t x306 = -561;
	static int8_t x307 = INT8_MIN;
	static volatile uint64_t t74 = 1833187717516278017LLU;

	t74 = (((x305<=x306)/x307)^x308);

	if (t74 != 24754LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = 4;
	int64_t x310 = -1LL;
	static volatile int64_t x311 = 52250438922LL;
	int8_t x312 = -1;
	int64_t t75 = -4LL;

	t75 = (((x309<=x310)/x311)^x312);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 48U;
	static uint32_t x314 = 19487365U;
	static int8_t x316 = 5;

	t76 = (((x313<=x314)/x315)^x316);

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x317 = 31856288767522LLU;
	volatile uint64_t x318 = 5056963460043216LLU;
	int8_t x319 = -1;
	static uint16_t x320 = UINT16_MAX;

	t77 = (((x317<=x318)/x319)^x320);

	if (t77 != -65536) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = -810;
	uint64_t x322 = UINT64_MAX;
	volatile int64_t x323 = INT64_MIN;
	int32_t x324 = 105556;
	int64_t t78 = 319LL;

	t78 = (((x321<=x322)/x323)^x324);

	if (t78 != 105556LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = 1554202U;
	volatile uint32_t t79 = 1290542U;

	t79 = (((x325<=x326)/x327)^x328);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x330 = UINT32_MAX;
	uint16_t x332 = 2U;
	static uint64_t t80 = 1368052645449LLU;

	t80 = (((x329<=x330)/x331)^x332);

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = (((x333<=x334)/x335)^x336);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 7765192032LLU;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	volatile int64_t t82 = -534766805020088536LL;

	t82 = (((x337<=x338)/x339)^x340);

	if (t82 != 170594098LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x342 = INT8_MIN;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1254576LL;

	t83 = (((x341<=x342)/x343)^x344);

	if (t83 != -1254576LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = 484;
	uint32_t x347 = 104U;
	static volatile int32_t x348 = INT32_MIN;
	uint32_t t84 = 130215U;

	t84 = (((x345<=x346)/x347)^x348);

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x350 = UINT32_MAX;
	volatile int32_t x351 = INT32_MIN;
	uint32_t x352 = 188481U;
	uint32_t t85 = 423956U;

	t85 = (((x349<=x350)/x351)^x352);

	if (t85 != 188481U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x354 = UINT8_MAX;
	uint16_t x356 = 21516U;
	volatile uint64_t t86 = 218345793LLU;

	t86 = (((x353<=x354)/x355)^x356);

	if (t86 != 21516LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = -1;
	volatile int8_t x358 = -1;
	int32_t t87 = 918;

	t87 = (((x357<=x358)/x359)^x360);

	if (t87 != 2960) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x361 = -5851;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	static volatile int8_t x364 = -1;
	static int32_t t88 = 326781;

	t88 = (((x361<=x362)/x363)^x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 271278981475675260LLU;
	uint8_t x366 = 83U;
	int64_t x367 = INT64_MIN;
	int64_t x368 = 8LL;
	volatile int64_t t89 = 67007LL;

	t89 = (((x365<=x366)/x367)^x368);

	if (t89 != 8LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MAX;
	uint64_t x370 = 188113914682533LLU;
	int16_t x371 = 7801;
	int32_t x372 = INT32_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (((x369<=x370)/x371)^x372);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x373 = 156142U;
	volatile int64_t x375 = -135018LL;
	int16_t x376 = -74;

	t91 = (((x373<=x374)/x375)^x376);

	if (t91 != -74LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x377 = INT16_MIN;
	uint16_t x378 = 31U;
	volatile uint32_t t92 = 1036U;

	t92 = (((x377<=x378)/x379)^x380);

	if (t92 != 4294967168U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MAX;
	int32_t x384 = -1;
	volatile int32_t t93 = -962949;

	t93 = (((x381<=x382)/x383)^x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -1;
	volatile int32_t x387 = 251769742;
	volatile int32_t x388 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x385<=x386)/x387)^x388);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	static int32_t x391 = -1;
	int8_t x392 = INT8_MIN;

	t95 = (((x389<=x390)/x391)^x392);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = 8;
	static volatile int16_t x395 = -1;
	uint16_t x396 = 5U;
	volatile int32_t t96 = 65341;

	t96 = (((x393<=x394)/x395)^x396);

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x397 = -317294;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t97 = -7;

	t97 = (((x397<=x398)/x399)^x400);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = 0U;
	int64_t x402 = INT64_MAX;
	int64_t x404 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = (((x401<=x402)/x403)^x404);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x405 = 14079893787323605LLU;
	int64_t x406 = INT64_MAX;
	int8_t x408 = -1;
	int32_t t99 = -108834740;

	t99 = (((x405<=x406)/x407)^x408);

	if (t99 != -1) { NG(); } else { ; }
	
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


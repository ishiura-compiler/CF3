#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
volatile int32_t x9 = 7366;
uint64_t t2 = 6514814455533277LLU;
uint8_t x13 = UINT8_MAX;
volatile int8_t x15 = INT8_MIN;
uint64_t x18 = 3286LLU;
int64_t x32 = INT64_MAX;
int64_t t6 = 0LL;
volatile int16_t x41 = INT16_MIN;
uint32_t t8 = UINT32_MAX;
static volatile int32_t x51 = -39;
int64_t x57 = -18891756053247260LL;
int64_t t11 = -41439461338LL;
uint64_t t12 = 31090839678LLU;
volatile int16_t x81 = INT16_MIN;
uint64_t x82 = 1944LLU;
int8_t x83 = INT8_MIN;
uint16_t x84 = 24490U;
volatile uint64_t t13 = 3945257420428395156LLU;
int32_t x89 = -2050832;
static int8_t x90 = INT8_MIN;
int32_t x96 = 0;
volatile int64_t x99 = -1LL;
int64_t t20 = 26651755878103244LL;
volatile int32_t t21 = 561;
int8_t x129 = INT8_MAX;
volatile uint32_t x161 = 3279201U;
uint16_t x162 = UINT16_MAX;
uint64_t x166 = UINT64_MAX;
volatile uint64_t t28 = 96099539293LLU;
uint64_t x170 = 21LLU;
static volatile int8_t x188 = 8;
volatile int16_t x194 = -12054;
uint32_t x197 = 20618589U;
static int8_t x200 = -6;
int16_t x205 = -1;
static uint16_t x206 = UINT16_MAX;
volatile int16_t x207 = INT16_MIN;
volatile int16_t x217 = INT16_MAX;
int8_t x218 = -1;
uint32_t x221 = 2844652U;
int64_t x225 = -1LL;
int8_t x227 = -6;
volatile int8_t x228 = INT8_MIN;
uint16_t x229 = UINT16_MAX;
int16_t x235 = 6;
uint32_t x237 = 549627989U;
static volatile int32_t x246 = -1;
int8_t x247 = -1;
volatile int8_t x251 = INT8_MIN;
uint8_t x257 = UINT8_MAX;
static int16_t x265 = 1601;
uint8_t x281 = 1U;
int32_t x284 = -1;
static int8_t x286 = INT8_MAX;
int16_t x288 = INT16_MAX;
int16_t x289 = INT16_MIN;
uint64_t t56 = 6975084915LLU;
int8_t x317 = INT8_MAX;
int64_t x323 = -14776641LL;
uint32_t t62 = 1882140456U;
static uint64_t x341 = 0LLU;
static uint64_t x349 = 104547492LLU;
uint8_t x354 = UINT8_MAX;
volatile int64_t t69 = 641964LL;
int32_t t70 = -2;
int8_t x390 = INT8_MIN;
int8_t x391 = -1;
int32_t t71 = INT32_MIN;
int8_t x398 = 11;
uint8_t x404 = 3U;
int64_t t74 = -86951161790LL;
int16_t x405 = INT16_MIN;
volatile int16_t x407 = INT16_MAX;
volatile uint64_t x408 = 76LLU;
volatile int64_t x427 = -67LL;
int8_t x428 = INT8_MIN;
volatile int64_t t77 = 2341843127639LL;
volatile int64_t t79 = 3833283741006LL;
static int32_t x441 = -251;
static int8_t x453 = -39;
uint8_t x457 = 0U;
uint32_t x461 = UINT32_MAX;
int16_t x463 = -1;
volatile uint64_t t85 = 858630619180639LLU;
int32_t x475 = -1;
int32_t x476 = -7992;
int64_t t87 = 1082763558705354181LL;
int64_t t92 = -46458649532481339LL;
uint64_t x508 = UINT64_MAX;
volatile int64_t x512 = INT64_MIN;
volatile int64_t t94 = 1045624985033487LL;
int8_t x531 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint8_t x2 = 28U;
	int16_t x3 = -4897;
	uint8_t x4 = 12U;
	volatile int64_t t0 = 1752816928LL;

	t0 = ((x1%(x2&x3))+x4);

	if (t0 != 19LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 8544;
	int64_t x7 = INT64_MAX;
	int8_t x8 = -45;
	int64_t t1 = 64642684932LL;

	t1 = ((x5%(x6&x7))+x8);

	if (t1 != 8499LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = -1LL;
	static int16_t x11 = 4813;
	uint64_t x12 = 583LLU;

	t2 = ((x9%(x10&x11))+x12);

	if (t2 != 3136LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = 228;

	t3 = ((x13%(x14&x15))+x16);

	if (t3 != 32894) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = -12;
	static uint64_t t4 = 0LLU;

	t4 = ((x17%(x18&x19))+x20);

	if (t4 != 3095LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x29 = -369;
	uint16_t x30 = 4174U;
	int32_t x31 = -1;
	volatile int64_t t5 = -2752032LL;

	t5 = ((x29%(x30&x31))+x32);

	if (t5 != 9223372036854775438LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = 10720004867193LL;
	static int16_t x35 = INT16_MAX;
	volatile uint32_t x36 = UINT32_MAX;

	t6 = ((x33%(x34&x35))+x36);

	if (t6 != 4294966357LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = UINT64_MAX;
	int8_t x38 = -9;
	int16_t x39 = 14;
	int16_t x40 = -243;
	uint64_t t7 = 137LLU;

	t7 = ((x37%(x38&x39))+x40);

	if (t7 != 18446744073709551376LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x42 = 1;
	volatile uint32_t x43 = UINT32_MAX;
	int16_t x44 = -1;

	t8 = ((x41%(x42&x43))+x44);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = INT8_MIN;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = INT8_MAX;
	volatile int32_t x48 = -1;
	int32_t t9 = -3498;

	t9 = ((x45%(x46&x47))+x48);

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	static uint8_t x50 = UINT8_MAX;
	static int8_t x52 = -4;
	volatile int32_t t10 = -1372066;

	t10 = ((x49%(x50&x51))+x52);

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x58 = UINT16_MAX;
	volatile int16_t x59 = -1;
	int32_t x60 = INT32_MIN;

	t11 = ((x57%(x58&x59))+x60);

	if (t11 != -2147519503LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = 1;
	int16_t x75 = -3;
	static uint64_t x76 = 2029389LLU;

	t12 = ((x73%(x74&x75))+x76);

	if (t12 != 2029389LLU) { NG(); } else { ; }
	
}

void f13(void) {


	t13 = ((x81%(x82&x83))+x84);

	if (t13 != 24618LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 12273453802LLU;
	volatile int32_t x86 = 6374445;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = -1;
	uint64_t t14 = 1222LLU;

	t14 = ((x85%(x86&x87))+x88);

	if (t14 != 2733801LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x91 = INT64_MIN;
	int8_t x92 = -1;
	int64_t t15 = -109246619984486LL;

	t15 = ((x89%(x90&x91))+x92);

	if (t15 != -2050833LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x93 = INT64_MAX;
	volatile int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	volatile uint64_t t16 = 60313525882064127LLU;

	t16 = ((x93%(x94&x95))+x96);

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint16_t x100 = UINT16_MAX;
	uint64_t t17 = 756430LLU;

	t17 = ((x97%(x98&x99))+x100);

	if (t17 != 65535LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	uint64_t t18 = 2249669719497LLU;

	t18 = ((x101%(x102&x103))+x104);

	if (t18 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x105 = 18;
	static int8_t x106 = INT8_MAX;
	volatile int64_t x107 = -1LL;
	int8_t x108 = -1;
	static volatile int64_t t19 = -5551748404500176LL;

	t19 = ((x105%(x106&x107))+x108);

	if (t19 != 17LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MAX;
	static int16_t x110 = -13787;
	int8_t x111 = 20;
	int64_t x112 = 39713275LL;

	t20 = ((x109%(x110&x111))+x112);

	if (t20 != 39713278LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = INT32_MAX;
	static volatile int16_t x127 = -1;
	int8_t x128 = -1;

	t21 = ((x125%(x126&x127))+x128);

	if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x130 = -1990136;
	uint32_t x131 = 2609602U;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t22 = -3704136LL;

	t22 = ((x129%(x130&x131))+x132);

	if (t22 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = INT16_MAX;
	volatile int64_t x134 = -1LL;
	static uint16_t x135 = UINT16_MAX;
	int8_t x136 = -1;
	volatile int64_t t23 = -213241LL;

	t23 = ((x133%(x134&x135))+x136);

	if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = -1;
	static uint8_t x142 = 19U;
	static int16_t x143 = -166;
	volatile int8_t x144 = INT8_MAX;
	int32_t t24 = -132319;

	t24 = ((x141%(x142&x143))+x144);

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -50135;
	volatile int32_t x150 = 95;
	static uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 582886U;
	volatile uint32_t t25 = 497860U;

	t25 = ((x149%(x150&x151))+x152);

	if (t25 != 582917U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -1;
	volatile int64_t x159 = -1LL;
	int32_t x160 = -379;
	volatile int64_t t26 = 1030416971194935156LL;

	t26 = ((x157%(x158&x159))+x160);

	if (t26 != -379LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x163 = -1;
	static volatile int16_t x164 = -506;
	volatile uint32_t t27 = 520495145U;

	t27 = ((x161%(x162&x163))+x164);

	if (t27 != 1945U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x165 = 41678917LLU;
	uint8_t x167 = 1U;
	uint8_t x168 = UINT8_MAX;

	t28 = ((x165%(x166&x167))+x168);

	if (t28 != 255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = 825235266654352541LLU;
	int32_t x171 = INT32_MAX;
	int32_t x172 = INT32_MIN;
	uint64_t t29 = 1995111LLU;

	t29 = ((x169%(x170&x171))+x172);

	if (t29 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = INT64_MIN;
	static uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 11341351U;
	int8_t x176 = INT8_MIN;
	static volatile int64_t t30 = 797261289668LL;

	t30 = ((x173%(x174&x175))+x176);

	if (t30 != -136LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x185 = 4U;
	static int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	int64_t t31 = 114215575647LL;

	t31 = ((x185%(x186&x187))+x188);

	if (t31 != 12LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = INT64_MIN;
	int32_t x195 = INT32_MAX;
	int32_t x196 = -1;
	int64_t t32 = -50251155885080LL;

	t32 = ((x193%(x194&x195))+x196);

	if (t32 != -290597833LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MIN;
	uint32_t t33 = 143566U;

	t33 = ((x197%(x198&x199))+x200);

	if (t33 != 20618583U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = -11810956268343LL;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -50;
	volatile uint8_t x204 = 35U;
	volatile int64_t t34 = 3406533549279LL;

	t34 = ((x201%(x202&x203))+x204);

	if (t34 != -11810956268308LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x208 = -30;
	static int32_t t35 = 4177674;

	t35 = ((x205%(x206&x207))+x208);

	if (t35 != -31) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x209 = 105062642LL;
	uint32_t x210 = 688U;
	volatile int8_t x211 = -55;
	int16_t x212 = 1;
	int64_t t36 = 51476177264963286LL;

	t36 = ((x209%(x210&x211))+x212);

	if (t36 != 243LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = -1;
	int8_t x215 = -1;
	uint32_t x216 = 1203856981U;
	uint32_t t37 = 3714790U;

	t37 = ((x213%(x214&x215))+x216);

	if (t37 != 1203856981U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x219 = -5;
	uint16_t x220 = UINT16_MAX;
	int32_t t38 = 121;

	t38 = ((x217%(x218&x219))+x220);

	if (t38 != 65537) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x222 = UINT16_MAX;
	uint8_t x223 = 51U;
	int16_t x224 = 57;
	volatile uint32_t t39 = 7329589U;

	t39 = ((x221%(x222&x223))+x224);

	if (t39 != 82U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x226 = -27;
	int64_t t40 = 3858LL;

	t40 = ((x225%(x226&x227))+x228);

	if (t40 != -129LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x230 = INT32_MAX;
	static uint16_t x231 = 797U;
	int32_t x232 = -1;
	volatile int32_t t41 = 4233;

	t41 = ((x229%(x230&x231))+x232);

	if (t41 != 180) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x233 = -1;
	int32_t x234 = -1;
	int64_t x236 = INT64_MAX;
	static volatile int64_t t42 = -4070619390074LL;

	t42 = ((x233%(x234&x235))+x236);

	if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 8926597459LLU;
	static volatile int64_t x240 = INT64_MAX;
	uint64_t t43 = 46LLU;

	t43 = ((x237%(x238&x239))+x240);

	if (t43 != 9223372036854775887LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x245 = INT16_MAX;
	static volatile uint32_t x248 = 7155481U;
	volatile uint32_t t44 = 51882U;

	t44 = ((x245%(x246&x247))+x248);

	if (t44 != 7155481U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x249 = 771U;
	static volatile int32_t x250 = -1;
	volatile int16_t x252 = -1;
	static volatile int32_t t45 = 1;

	t45 = ((x249%(x250&x251))+x252);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 1LLU;
	uint32_t x260 = 1363158105U;
	volatile uint64_t t46 = 50579468936143871LLU;

	t46 = ((x257%(x258&x259))+x260);

	if (t46 != 1363158105LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x266 = -1LL;
	static uint8_t x267 = 65U;
	int8_t x268 = INT8_MAX;
	volatile int64_t t47 = 933793LL;

	t47 = ((x265%(x266&x267))+x268);

	if (t47 != 168LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x273 = INT16_MAX;
	int64_t x274 = -2898617794072859458LL;
	int16_t x275 = -1;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t48 = 71756LL;

	t48 = ((x273%(x274&x275))+x276);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x282 = 2041U;
	uint32_t x283 = 583207761U;
	uint32_t t49 = 40359U;

	t49 = ((x281%(x282&x283))+x284);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = INT64_MAX;
	volatile int8_t x287 = 1;
	volatile int64_t t50 = 22LL;

	t50 = ((x285%(x286&x287))+x288);

	if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x290 = INT8_MIN;
	uint16_t x291 = 431U;
	static uint64_t x292 = 538LLU;
	volatile uint64_t t51 = 21LLU;

	t51 = ((x289%(x290&x291))+x292);

	if (t51 != 410LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = -1;
	volatile int32_t x296 = 1;
	static int64_t t52 = 756LL;

	t52 = ((x293%(x294&x295))+x296);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int64_t x298 = INT64_MIN;
	static volatile int16_t x299 = -3;
	int8_t x300 = -1;
	static int64_t t53 = 28385448717152LL;

	t53 = ((x297%(x298&x299))+x300);

	if (t53 != 65534LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = -1;
	static uint64_t x304 = 7498001LLU;
	static uint64_t t54 = 1180029044958142LLU;

	t54 = ((x301%(x302&x303))+x304);

	if (t54 != 9223372036862273809LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = 2707025257700LL;
	int64_t x306 = -21LL;
	int32_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int64_t t55 = -24110717316941181LL;

	t55 = ((x305%(x306&x307))+x308);

	if (t55 != -120LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x309 = -1;
	int32_t x310 = 57884013;
	uint64_t x311 = 14612LLU;
	int32_t x312 = INT32_MAX;

	t56 = ((x309%(x310&x311))+x312);

	if (t56 != 2147496618LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x313 = 0;
	int8_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x313%(x314&x315))+x316);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x318 = UINT64_MAX;
	volatile int64_t x319 = -17130LL;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t58 = 2986LLU;

	t58 = ((x317%(x318&x319))+x320);

	if (t58 != 382LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = INT64_MAX;
	int64_t x324 = -1LL;
	int64_t t59 = 26202655924244LL;

	t59 = ((x321%(x322&x323))+x324);

	if (t59 != 254LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x325 = -1;
	static int16_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	uint64_t t60 = 1475196LLU;

	t60 = ((x325%(x326&x327))+x328);

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 1U;
	uint32_t x331 = UINT32_MAX;
	volatile uint16_t x332 = 12U;
	uint32_t t61 = 12108U;

	t61 = ((x329%(x330&x331))+x332);

	if (t61 != 12U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	uint32_t x336 = 487794081U;

	t62 = ((x333%(x334&x335))+x336);

	if (t62 != 487794208U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x337 = 25LLU;
	int8_t x338 = INT8_MAX;
	static volatile int32_t x339 = -1;
	uint8_t x340 = 30U;
	volatile uint64_t t63 = 441090LLU;

	t63 = ((x337%(x338&x339))+x340);

	if (t63 != 55LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	int64_t x344 = -24887288293LL;
	uint64_t t64 = 200167882082045LLU;

	t64 = ((x341%(x342&x343))+x344);

	if (t64 != 18446744048822263323LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = 2;
	uint32_t x346 = 1U;
	static uint32_t x347 = UINT32_MAX;
	int8_t x348 = INT8_MAX;
	volatile uint32_t t65 = 11768091U;

	t65 = ((x345%(x346&x347))+x348);

	if (t65 != 127U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	volatile uint32_t x352 = 23891U;
	uint64_t t66 = 38855402207121833LLU;

	t66 = ((x349%(x350&x351))+x352);

	if (t66 != 104571383LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = INT8_MAX;
	static int8_t x355 = -12;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t67 = 644;

	t67 = ((x353%(x354&x355))+x356);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = -1LL;
	volatile int32_t x362 = INT32_MAX;
	int16_t x363 = -433;
	volatile uint8_t x364 = 0U;
	volatile int64_t t68 = -284108406128019979LL;

	t68 = ((x361%(x362&x363))+x364);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = 1;
	uint32_t x370 = 11U;
	int64_t x371 = -1LL;
	int16_t x372 = -1;

	t69 = ((x369%(x370&x371))+x372);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MAX;
	uint16_t x387 = 28835U;
	uint8_t x388 = 15U;

	t70 = ((x385%(x386&x387))+x388);

	if (t70 != -113) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x389 = INT32_MIN;
	volatile int32_t x392 = INT32_MIN;

	t71 = ((x389%(x390&x391))+x392);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x393 = 13119U;
	static volatile uint64_t x394 = 178LLU;
	static uint16_t x395 = UINT16_MAX;
	int32_t x396 = 2;
	static volatile uint64_t t72 = 2785848LLU;

	t72 = ((x393%(x394&x395))+x396);

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x399 = 3U;
	uint32_t x400 = 60693U;
	uint32_t t73 = 15967U;

	t73 = ((x397%(x398&x399))+x400);

	if (t73 != 60691U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x401 = 22U;
	int64_t x402 = INT64_MAX;
	uint8_t x403 = 3U;

	t74 = ((x401%(x402&x403))+x404);

	if (t74 != 4LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x406 = -1;
	volatile uint64_t t75 = 1968096LLU;

	t75 = ((x405%(x406&x407))+x408);

	if (t75 != 75LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x409 = -96;
	int64_t x410 = -2033233579LL;
	int32_t x411 = INT32_MIN;
	volatile int16_t x412 = INT16_MIN;
	volatile int64_t t76 = -87410024LL;

	t76 = ((x409%(x410&x411))+x412);

	if (t76 != -32864LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x425 = UINT32_MAX;
	int64_t x426 = 7037034094465232LL;

	t77 = ((x425%(x426&x427))+x428);

	if (t77 != 4294967167LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = -905410794;
	uint16_t x430 = 3005U;
	static volatile uint64_t x431 = 453LLU;
	int64_t x432 = INT64_MIN;
	uint64_t t78 = 52LLU;

	t78 = ((x429%(x430&x431))+x432);

	if (t78 != 9223372036854775909LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x433 = 1541197LL;
	uint32_t x434 = 72989U;
	static uint8_t x435 = 42U;
	uint8_t x436 = 7U;

	t79 = ((x433%(x434&x435))+x436);

	if (t79 != 12LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = 1;
	uint8_t x438 = UINT8_MAX;
	uint16_t x439 = UINT16_MAX;
	uint32_t x440 = 6991U;
	volatile uint32_t t80 = 4U;

	t80 = ((x437%(x438&x439))+x440);

	if (t80 != 6992U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x442 = 12585;
	uint8_t x443 = UINT8_MAX;
	volatile int16_t x444 = -8;
	static volatile int32_t t81 = -1;

	t81 = ((x441%(x442&x443))+x444);

	if (t81 != -13) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = -1;
	uint64_t x446 = UINT64_MAX;
	static int32_t x447 = INT32_MIN;
	int32_t x448 = -22785610;
	uint64_t t82 = 1302858699915471LLU;

	t82 = ((x445%(x446&x447))+x448);

	if (t82 != 2124698037LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x454 = INT16_MAX;
	uint32_t x455 = UINT32_MAX;
	int32_t x456 = -637277;
	volatile uint32_t t83 = 266621U;

	t83 = ((x453%(x454&x455))+x456);

	if (t83 != 4294362751U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x458 = 48888813641553LLU;
	int16_t x459 = -62;
	int8_t x460 = -3;
	volatile uint64_t t84 = 338443664083519757LLU;

	t84 = ((x457%(x458&x459))+x460);

	if (t84 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x462 = UINT64_MAX;
	uint8_t x464 = 94U;

	t85 = ((x461%(x462&x463))+x464);

	if (t85 != 4294967389LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x469 = 4462U;
	int64_t x470 = INT64_MIN;
	static int8_t x471 = INT8_MIN;
	uint16_t x472 = 1U;
	volatile int64_t t86 = 535LL;

	t86 = ((x469%(x470&x471))+x472);

	if (t86 != 4463LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x473 = INT64_MIN;
	int32_t x474 = INT32_MIN;

	t87 = ((x473%(x474&x475))+x476);

	if (t87 != -7992LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x481 = -700594627659490309LL;
	uint64_t x482 = 6LLU;
	volatile int16_t x483 = -46;
	int8_t x484 = -1;
	uint64_t t88 = 142LLU;

	t88 = ((x481%(x482&x483))+x484);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x485 = INT8_MAX;
	uint64_t x486 = 4456382857875849LLU;
	int32_t x487 = INT32_MIN;
	int16_t x488 = INT16_MIN;
	uint64_t t89 = 202186755400LLU;

	t89 = ((x485%(x486&x487))+x488);

	if (t89 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x489 = 63797693U;
	uint8_t x490 = 6U;
	static int32_t x491 = 37710;
	int8_t x492 = -17;
	static volatile uint32_t t90 = 160U;

	t90 = ((x489%(x490&x491))+x492);

	if (t90 != 4294967284U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x493 = INT32_MIN;
	static int64_t x494 = 655439191037334334LL;
	static int32_t x495 = INT32_MIN;
	int32_t x496 = INT32_MIN;
	int64_t t91 = -32567649602527LL;

	t91 = ((x493%(x494&x495))+x496);

	if (t91 != -4294967296LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x497 = 7763684U;
	int64_t x498 = 1747010LL;
	int8_t x499 = -1;
	uint32_t x500 = 315141221U;

	t92 = ((x497%(x498&x499))+x500);

	if (t92 != 315916865LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MIN;
	uint64_t t93 = 55014457LLU;

	t93 = ((x505%(x506&x507))+x508);

	if (t93 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x509 = UINT8_MAX;
	int16_t x510 = -31;
	volatile int16_t x511 = INT16_MIN;

	t94 = ((x509%(x510&x511))+x512);

	if (t94 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = -1LL;
	static int64_t x522 = -754813399150759LL;
	uint64_t x523 = 13887LLU;
	int64_t x524 = INT64_MIN;
	volatile uint64_t t95 = 8LLU;

	t95 = ((x521%(x522&x523))+x524);

	if (t95 != 9223372036854776971LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x525 = INT16_MIN;
	uint8_t x526 = 20U;
	uint64_t x527 = 1698425059398861LLU;
	volatile uint16_t x528 = 63U;
	volatile uint64_t t96 = 30527475449082LLU;

	t96 = ((x525%(x526&x527))+x528);

	if (t96 != 63LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x529 = 202U;
	int16_t x530 = -2;
	uint32_t x532 = 354127U;
	volatile uint32_t t97 = 29843728U;

	t97 = ((x529%(x530&x531))+x532);

	if (t97 != 354201U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = -6;
	int64_t x534 = -911LL;
	static volatile int32_t x535 = -20041956;
	uint64_t x536 = 53168LLU;
	volatile uint64_t t98 = 17567913061LLU;

	t98 = ((x533%(x534&x535))+x536);

	if (t98 != 53162LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x537 = -41LL;
	uint32_t x538 = 5053U;
	volatile int16_t x539 = -717;
	int64_t x540 = -1LL;
	volatile int64_t t99 = 44698140790LL;

	t99 = ((x537%(x538&x539))+x540);

	if (t99 != -42LL) { NG(); } else { ; }
	
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


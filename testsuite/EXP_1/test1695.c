#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
uint16_t x4 = 148U;
int64_t x6 = INT64_MAX;
volatile int64_t x8 = 10140677LL;
int16_t x17 = -1;
uint64_t x24 = UINT64_MAX;
static uint32_t x25 = UINT32_MAX;
static int16_t x26 = INT16_MIN;
int64_t x27 = -1LL;
uint64_t x28 = 108247715188740LLU;
int32_t x29 = INT32_MIN;
static int32_t t8 = 7;
static uint16_t x38 = 18U;
int64_t x46 = INT64_MAX;
int8_t x47 = INT8_MIN;
int64_t t11 = 26692LL;
int64_t x51 = INT64_MAX;
static volatile int32_t x52 = INT32_MIN;
uint64_t t12 = 419553012LLU;
volatile int32_t t13 = -131616460;
static int8_t x57 = INT8_MAX;
int32_t x61 = INT32_MIN;
volatile uint32_t x77 = 14U;
int32_t x79 = -1;
int64_t x85 = INT64_MIN;
volatile int32_t t22 = 9980206;
uint16_t x95 = UINT16_MAX;
uint64_t x103 = 163LLU;
int8_t x104 = INT8_MIN;
uint64_t t25 = 5LLU;
int8_t x107 = INT8_MAX;
int32_t t26 = 17275446;
volatile uint8_t x110 = UINT8_MAX;
uint16_t x111 = UINT16_MAX;
volatile int16_t x115 = INT16_MIN;
uint32_t x124 = UINT32_MAX;
static uint16_t x125 = 821U;
volatile uint64_t t30 = 1801856LLU;
static uint64_t t31 = 698169408682LLU;
int32_t x143 = INT32_MAX;
static uint32_t x144 = 2960301U;
int32_t x146 = INT32_MIN;
int32_t t35 = 910232643;
uint8_t x166 = 126U;
volatile int32_t t38 = -1318;
int16_t x175 = 1;
int16_t x176 = INT16_MIN;
int64_t t40 = 28586645962367LL;
uint64_t x179 = UINT64_MAX;
uint16_t x194 = UINT16_MAX;
volatile int8_t x196 = INT8_MIN;
static uint32_t t45 = 146907U;
int16_t x197 = INT16_MIN;
static int16_t x204 = 15814;
static volatile int16_t x211 = INT16_MAX;
volatile uint32_t x220 = 16498U;
int64_t t53 = 51057971296876156LL;
uint64_t x233 = 18908523912533139LLU;
uint8_t x235 = 30U;
uint64_t x237 = 16700819LLU;
volatile int16_t x239 = -1;
volatile int32_t t57 = -19888956;
static volatile uint64_t x250 = UINT64_MAX;
int32_t x255 = INT32_MIN;
volatile int16_t x258 = INT16_MIN;
uint64_t t61 = 4LLU;
uint64_t x265 = 18LLU;
volatile uint64_t t63 = 21LLU;
int64_t x279 = INT64_MIN;
int32_t x288 = -1;
int16_t x292 = INT16_MAX;
int32_t x296 = -1;
volatile uint32_t x299 = UINT32_MAX;
uint8_t x301 = UINT8_MAX;
int32_t x305 = INT32_MIN;
static int32_t x310 = -557;
uint64_t x317 = 1LLU;
volatile uint64_t t75 = 5585636453909517LLU;
static uint64_t x323 = UINT64_MAX;
int8_t x326 = 22;
static int64_t t77 = 12638LL;
int64_t x332 = -126649469LL;
uint64_t t79 = 6855228075674760752LLU;
volatile uint64_t x338 = UINT64_MAX;
volatile int32_t x348 = INT32_MAX;
uint32_t x350 = 3999U;
volatile uint64_t t83 = 29267533LLU;
int32_t x356 = 479410;
uint64_t t84 = 3989LLU;
int16_t x358 = 119;
int32_t t85 = 84;
int64_t x364 = -2638LL;
int8_t x365 = INT8_MAX;
static int16_t x376 = INT16_MIN;
uint64_t x378 = UINT64_MAX;
uint16_t x379 = 239U;
uint64_t t89 = 1039070424046127LLU;
int8_t x394 = 1;
uint32_t x395 = UINT32_MAX;
uint32_t x396 = 2U;
uint32_t x398 = UINT32_MAX;
volatile int64_t x406 = INT64_MAX;
volatile int64_t x407 = 0LL;
int32_t x409 = INT32_MAX;
volatile int16_t x410 = 14129;
static uint16_t x418 = 1170U;
volatile int32_t t99 = -18135;


void f0(void) {
	uint32_t x2 = 13823U;
	volatile int16_t x3 = 0;
	uint64_t t0 = 22946173735LLU;

	t0 = (((x1&x2)+x3)%x4);

	if (t0 != 59LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 12177U;
	int64_t x7 = -1LL;
	volatile int64_t t1 = -1778LL;

	t1 = (((x5&x6)+x7)%x8);

	if (t1 != 12176LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MAX;
	int8_t x11 = -1;
	static int8_t x12 = -1;
	volatile int64_t t2 = -3348743902LL;

	t2 = (((x9&x10)+x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -13955101LL;
	static int8_t x16 = -1;
	int64_t t3 = 40573493797LL;

	t3 = (((x13&x14)+x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -1;
	volatile uint8_t x19 = UINT8_MAX;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -86;

	t4 = (((x17&x18)+x19)%x20);

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = INT16_MIN;
	uint16_t x23 = 687U;
	static uint64_t t5 = 7556337181424614163LLU;

	t5 = (((x21&x22)+x23)%x24);

	if (t5 != 18446744073709519535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t t6 = 15LLU;

	t6 = (((x25&x26)+x27)%x28);

	if (t6 != 4294934527LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	uint8_t x31 = UINT8_MAX;
	int16_t x32 = -48;
	volatile int64_t t7 = -131903833562LL;

	t7 = (((x29&x30)+x31)%x32);

	if (t7 != 15LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 37;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;

	t8 = (((x33&x34)+x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	int64_t x39 = -5731183637406LL;
	uint16_t x40 = 2872U;
	int64_t t9 = 100802LL;

	t9 = (((x37&x38)+x39)%x40);

	if (t9 != -590LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MAX;
	int64_t t10 = 10497509889LL;

	t10 = (((x41&x42)+x43)%x44);

	if (t10 != -32513LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int64_t x48 = -5772LL;

	t11 = (((x45&x46)+x47)%x48);

	if (t11 != 1780LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 6929113177503520253LLU;
	int64_t x50 = INT64_MIN;

	t12 = (((x49&x50)+x51)%x52);

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3555U;
	int16_t x54 = INT16_MIN;
	static int32_t x55 = 191942;
	int8_t x56 = INT8_MAX;

	t13 = (((x53&x54)+x55)%x56);

	if (t13 != 45) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = -1LL;
	int64_t x59 = -1LL;
	uint32_t x60 = UINT32_MAX;
	int64_t t14 = -197379037368LL;

	t14 = (((x57&x58)+x59)%x60);

	if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = 2U;
	int32_t x63 = INT32_MAX;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 189216;

	t15 = (((x61&x62)+x63)%x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 316224735LLU;
	static int64_t x66 = INT64_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MAX;
	static volatile uint64_t t16 = 466535240067LLU;

	t16 = (((x65&x66)+x67)%x68);

	if (t16 != 70LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = -42;
	int64_t x71 = 615797LL;
	static volatile int16_t x72 = INT16_MIN;
	int64_t t17 = -7068LL;

	t17 = (((x69&x70)+x71)%x72);

	if (t17 != 25931LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 0U;
	static int8_t x74 = INT8_MIN;
	static int64_t x75 = 1LL;
	int64_t x76 = -1LL;
	volatile int64_t t18 = 2847LL;

	t18 = (((x73&x74)+x75)%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = 2575649059242428LL;

	t19 = (((x77&x78)+x79)%x80);

	if (t19 != 13LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 508379501U;
	static int16_t x83 = -484;
	int16_t x84 = INT16_MIN;
	volatile int64_t t20 = 16275767439LL;

	t20 = (((x81&x82)+x83)%x84);

	if (t20 != 16265LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x86 = 818U;
	int64_t x87 = INT64_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int64_t t21 = -6048157232164760LL;

	t21 = (((x85&x86)+x87)%x88);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MIN;
	int32_t x90 = 2;
	int8_t x91 = INT8_MIN;
	volatile uint16_t x92 = UINT16_MAX;

	t22 = (((x89&x90)+x91)%x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 7440U;
	int8_t x94 = INT8_MIN;
	static volatile int32_t x96 = -1;
	int32_t t23 = 720910;

	t23 = (((x93&x94)+x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 20U;
	int32_t x98 = INT32_MIN;
	int64_t x99 = -241709817302341216LL;
	int32_t x100 = -895;
	int64_t t24 = -40487738446LL;

	t24 = (((x97&x98)+x99)%x100);

	if (t24 != -826LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 1U;

	t25 = (((x101&x102)+x103)%x104);

	if (t25 != 164LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	volatile uint16_t x106 = 1957U;
	int32_t x108 = -7346451;

	t26 = (((x105&x106)+x107)%x108);

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int64_t x112 = -570556305997478567LL;
	volatile int64_t t27 = -14379969LL;

	t27 = (((x109&x110)+x111)%x112);

	if (t27 != 65790LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 9U;
	volatile uint8_t x114 = UINT8_MAX;
	uint8_t x116 = 26U;
	volatile int32_t t28 = -218850;

	t28 = (((x113&x114)+x115)%x116);

	if (t28 != -25) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	volatile uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 207433207903LLU;
	static uint64_t t29 = 92LLU;

	t29 = (((x121&x122)+x123)%x124);

	if (t29 != 1274810511LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = 0U;
	uint64_t x127 = 7661813578223423LLU;
	uint16_t x128 = 100U;

	t30 = (((x125&x126)+x127)%x128);

	if (t30 != 23LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x134 = 130U;
	volatile uint16_t x135 = 476U;
	uint64_t x136 = UINT64_MAX;

	t31 = (((x133&x134)+x135)%x136);

	if (t31 != 476LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MAX;
	static int16_t x142 = INT16_MIN;
	uint32_t t32 = 601U;

	t32 = (((x141&x142)+x143)%x144);

	if (t32 != 1265422U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x147 = 1U;
	uint64_t x148 = 1423815704016593LLU;
	uint64_t t33 = 313623895LLU;

	t33 = (((x145&x146)+x147)%x148);

	if (t33 != 2147483649LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x149 = -14;
	int64_t x150 = INT64_MIN;
	static int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MAX;
	volatile int64_t t34 = 26012219LL;

	t34 = (((x149&x150)+x151)%x152);

	if (t34 != -2147483522LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -1536;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;

	t35 = (((x153&x154)+x155)%x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1108;
	int16_t x158 = 0;
	static uint16_t x159 = 5U;
	int8_t x160 = 11;
	volatile int32_t t36 = 240;

	t36 = (((x157&x158)+x159)%x160);

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t37 = 108773593;

	t37 = (((x161&x162)+x163)%x164);

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MAX;
	volatile uint8_t x167 = UINT8_MAX;
	volatile int16_t x168 = 1261;

	t38 = (((x165&x166)+x167)%x168);

	if (t38 != 381) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x169 = 119U;
	int64_t x170 = INT64_MIN;
	volatile uint64_t x171 = 41376409379758190LLU;
	uint64_t x172 = 1621099238296LLU;
	uint64_t t39 = 1995508243686339LLU;

	t39 = (((x169&x170)+x171)%x172);

	if (t39 != 1093520729382LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;

	t40 = (((x173&x174)+x175)%x176);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int8_t x178 = INT8_MAX;
	int16_t x180 = -1;
	static volatile uint64_t t41 = 5186663049771LLU;

	t41 = (((x177&x178)+x179)%x180);

	if (t41 != 126LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MAX;
	int16_t x183 = -3;
	int16_t x184 = 384;
	int64_t t42 = 45LL;

	t42 = (((x181&x182)+x183)%x184);

	if (t42 != 381LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	volatile uint16_t x187 = 42U;
	uint32_t x188 = 213345398U;
	volatile uint32_t t43 = 1447U;

	t43 = (((x185&x186)+x187)%x188);

	if (t43 != 41U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x190 = 368U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -1;
	int32_t t44 = 118;

	t44 = (((x189&x190)+x191)%x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 1760470337U;
	int16_t x195 = INT16_MIN;

	t45 = (((x193&x194)+x195)%x196);

	if (t45 != 9537U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = INT8_MIN;
	volatile uint16_t x199 = 1674U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = -299;

	t46 = (((x197&x198)+x199)%x200);

	if (t46 != -31094) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	uint16_t x202 = 2352U;
	uint16_t x203 = 1U;
	int32_t t47 = -1877384;

	t47 = (((x201&x202)+x203)%x204);

	if (t47 != 2353) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = -27;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -4436894LL;
	static int64_t t48 = -137547198391003890LL;

	t48 = (((x205&x206)+x207)%x208);

	if (t48 != 228LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = -156;
	uint32_t x210 = 40U;
	uint64_t x212 = 16LLU;
	static volatile uint64_t t49 = 59924LLU;

	t49 = (((x209&x210)+x211)%x212);

	if (t49 != 15LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = -1LL;
	int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MIN;
	int64_t t50 = -52635LL;

	t50 = (((x217&x218)+x219)%x220);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	volatile uint8_t x222 = 64U;
	uint64_t x223 = 5LLU;
	static int32_t x224 = -1;
	volatile uint64_t t51 = 1070736376425425629LLU;

	t51 = (((x221&x222)+x223)%x224);

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 1U;
	int16_t x227 = INT16_MIN;
	static int32_t x228 = 20;
	static int64_t t52 = 121415334LL;

	t52 = (((x225&x226)+x227)%x228);

	if (t52 != -8LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = 52;
	int8_t x231 = INT8_MIN;
	static volatile int16_t x232 = -1;

	t53 = (((x229&x230)+x231)%x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x234 = INT16_MIN;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t54 = 1124017LLU;

	t54 = (((x233&x234)+x235)%x236);

	if (t54 != 18908523912527902LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = -1;
	uint64_t x240 = 13646LLU;
	static volatile uint64_t t55 = 16782008174094LLU;

	t55 = (((x237&x238)+x239)%x240);

	if (t55 != 11760LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	uint16_t x242 = 52U;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t56 = 2LL;

	t56 = (((x241&x242)+x243)%x244);

	if (t56 != -2147483596LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 30U;
	int32_t x246 = -817397;
	volatile int16_t x247 = -1;
	int16_t x248 = INT16_MIN;

	t57 = (((x245&x246)+x247)%x248);

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = INT16_MAX;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = 1;
	volatile uint64_t t58 = 47869234432276758LLU;

	t58 = (((x249&x250)+x251)%x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x253 = 86U;
	uint64_t x254 = 34631LLU;
	static int8_t x256 = -9;
	volatile uint64_t t59 = 301182756537464068LLU;

	t59 = (((x253&x254)+x255)%x256);

	if (t59 != 18446744071562068038LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 0U;
	static uint16_t x259 = UINT16_MAX;
	int32_t x260 = INT32_MAX;
	int32_t t60 = -30057;

	t60 = (((x257&x258)+x259)%x260);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 44U;
	int64_t x262 = 25349967838858LL;
	uint8_t x263 = 6U;
	static uint64_t x264 = 31035039590LLU;

	t61 = (((x261&x262)+x263)%x264);

	if (t61 != 14LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x266 = INT8_MAX;
	uint8_t x267 = 0U;
	int8_t x268 = INT8_MAX;
	uint64_t t62 = 3452577464301LLU;

	t62 = (((x265&x266)+x267)%x268);

	if (t62 != 18LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x269 = 102485LLU;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = INT64_MIN;

	t63 = (((x269&x270)+x271)%x272);

	if (t63 != 4294967380LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = -1;
	int16_t x274 = 773;
	int32_t x275 = -13133812;
	int32_t x276 = INT32_MAX;
	volatile int32_t t64 = -2853;

	t64 = (((x273&x274)+x275)%x276);

	if (t64 != -13133039) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x277 = INT16_MIN;
	volatile uint8_t x278 = 0U;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t65 = 302944067LL;

	t65 = (((x277&x278)+x279)%x280);

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -21682145LL;
	int64_t x282 = -75699144375448676LL;
	volatile int32_t x283 = INT32_MIN;
	uint32_t x284 = 34161U;
	int64_t t66 = 181LL;

	t66 = (((x281&x282)+x283)%x284);

	if (t66 != -17800LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = 6762LLU;
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MAX;
	volatile uint64_t t67 = 26486706434LLU;

	t67 = (((x285&x286)+x287)%x288);

	if (t67 != 127LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	uint64_t x290 = UINT64_MAX;
	uint16_t x291 = 26U;
	volatile uint64_t t68 = 1394LLU;

	t68 = (((x289&x290)+x291)%x292);

	if (t68 != 25LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	volatile int32_t t69 = -329773;

	t69 = (((x293&x294)+x295)%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x297 = -1;
	int8_t x298 = -1;
	static volatile int8_t x300 = -1;
	uint32_t t70 = 1694528747U;

	t70 = (((x297&x298)+x299)%x300);

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x302 = -1;
	uint32_t x303 = 186416U;
	int8_t x304 = INT8_MIN;
	uint32_t t71 = 35348U;

	t71 = (((x301&x302)+x303)%x304);

	if (t71 != 186671U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x306 = 600U;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t72 = 1605;

	t72 = (((x305&x306)+x307)%x308);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int8_t x311 = 55;
	volatile uint32_t x312 = 132315320U;
	volatile uint64_t t73 = 170995LLU;

	t73 = (((x309&x310)+x311)%x312);

	if (t73 != 118806234LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 355108LL;
	static uint16_t x314 = UINT16_MAX;
	int32_t x315 = 95544368;
	int16_t x316 = -1;
	volatile int64_t t74 = -2LL;

	t74 = (((x313&x314)+x315)%x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x318 = INT64_MIN;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int8_t x320 = -1;

	t75 = (((x317&x318)+x319)%x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MIN;
	int64_t x324 = INT64_MAX;
	volatile uint64_t t76 = 4041373958243829LLU;

	t76 = (((x321&x322)+x323)%x324);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int64_t x327 = -1LL;
	int8_t x328 = -1;

	t77 = (((x325&x326)+x327)%x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = UINT8_MAX;
	static int32_t x330 = -1;
	int16_t x331 = -1;
	int64_t t78 = -3LL;

	t78 = (((x329&x330)+x331)%x332);

	if (t78 != 254LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x333 = 26872U;
	static volatile uint64_t x334 = 27518936LLU;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = 53;

	t79 = (((x333&x334)+x335)%x336);

	if (t79 != 35LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x337 = INT64_MIN;
	static volatile int8_t x339 = -1;
	volatile int64_t x340 = -1LL;
	volatile uint64_t t80 = 2041734951622267LLU;

	t80 = (((x337&x338)+x339)%x340);

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = -141;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t81 = 85;

	t81 = (((x341&x342)+x343)%x344);

	if (t81 != -32909) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = 0;
	int16_t x346 = INT16_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	static int32_t t82 = 507760;

	t82 = (((x345&x346)+x347)%x348);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	volatile int8_t x351 = INT8_MIN;
	uint64_t x352 = 131952075905455LLU;

	t83 = (((x349&x350)+x351)%x352);

	if (t83 != 3871LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;

	t84 = (((x353&x354)+x355)%x356);

	if (t84 != 476557LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MIN;
	static uint8_t x359 = 0U;
	static int16_t x360 = INT16_MIN;

	t85 = (((x357&x358)+x359)%x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 3667425LLU;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	uint64_t t86 = 59725911959503762LLU;

	t86 = (((x361&x362)+x363)%x364);

	if (t86 != 65535LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x366 = 7;
	volatile uint8_t x367 = 0U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = -38;

	t87 = (((x365&x366)+x367)%x368);

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -1;
	int16_t x374 = -1;
	int32_t x375 = 598378969;
	volatile int32_t t88 = -2306230;

	t88 = (((x373&x374)+x375)%x376);

	if (t88 != 2520) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x377 = 12U;
	volatile uint32_t x380 = 5585U;

	t89 = (((x377&x378)+x379)%x380);

	if (t89 != 251LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x381 = -1490;
	static int8_t x382 = INT8_MIN;
	int8_t x383 = 0;
	static uint64_t x384 = 1LLU;
	volatile uint64_t t90 = 11042272LLU;

	t90 = (((x381&x382)+x383)%x384);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x385 = 200U;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = -225;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t91 = 1U;

	t91 = (((x385&x386)+x387)%x388);

	if (t91 != 103U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = -1;
	uint64_t x390 = 445521932473816299LLU;
	static uint32_t x391 = UINT32_MAX;
	int64_t x392 = INT64_MIN;
	uint64_t t92 = 17166877417755305LLU;

	t92 = (((x389&x390)+x391)%x392);

	if (t92 != 445521936768783594LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x393 = 44U;
	volatile uint32_t t93 = 14U;

	t93 = (((x393&x394)+x395)%x396);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = INT64_MIN;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	int64_t t94 = -1LL;

	t94 = (((x397&x398)+x399)%x400);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = UINT8_MAX;
	volatile int8_t x403 = -4;
	int8_t x404 = 3;
	int32_t t95 = 1676037;

	t95 = (((x401&x402)+x403)%x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = UINT32_MAX;
	uint16_t x408 = UINT16_MAX;
	static volatile int64_t t96 = 41197393365172050LL;

	t96 = (((x405&x406)+x407)%x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t97 = -13373642;

	t97 = (((x409&x410)+x411)%x412);

	if (t97 != -18639) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -10682995655785LL;
	int64_t x414 = -15108230893LL;
	int16_t x415 = INT16_MAX;
	uint64_t x416 = 57627217657056241LLU;
	static uint64_t t98 = 214848LLU;

	t98 = (((x413&x414)+x415)%x416);

	if (t98 != 6023738299794386LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = UINT16_MAX;
	volatile uint16_t x419 = 1143U;
	static int32_t x420 = INT32_MIN;

	t99 = (((x417&x418)+x419)%x420);

	if (t99 != 2313) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
int32_t x23 = -9957;
volatile int16_t x24 = -1;
int8_t x30 = 1;
int8_t x37 = INT8_MIN;
int32_t t5 = 646736095;
int16_t x45 = INT16_MIN;
int16_t x56 = -363;
int16_t x72 = 0;
int32_t x73 = -1;
uint32_t x87 = 329833U;
int8_t x88 = INT8_MIN;
int32_t x89 = -1908164;
volatile uint64_t x93 = 101432436043777LLU;
static uint32_t x99 = 6U;
volatile int64_t t20 = -434835014752643LL;
int16_t x125 = 53;
int64_t x129 = 188543555669777LL;
uint16_t x137 = 2U;
int16_t x141 = -1;
int64_t x145 = -51505652210LL;
int8_t x148 = -5;
int8_t x150 = 1;
uint32_t x153 = 5U;
static int8_t x158 = INT8_MIN;
int32_t t32 = 186763930;
int32_t x168 = -1;
static volatile int64_t x171 = -1LL;
int8_t x173 = INT8_MIN;
static uint16_t x199 = 33U;
uint64_t x202 = 7285202685791631041LLU;
volatile uint8_t x210 = 0U;
uint8_t x211 = 119U;
int8_t x212 = 0;
int64_t x213 = 94710227738311LL;
int32_t x214 = -1;
int64_t x220 = INT64_MAX;
volatile int64_t t46 = -37LL;
volatile uint16_t x231 = UINT16_MAX;
static uint16_t x238 = UINT16_MAX;
static volatile int8_t x239 = -8;
int8_t x242 = -1;
uint32_t t51 = 17184U;
volatile int32_t x254 = INT32_MIN;
static volatile uint64_t t53 = 1713LLU;
uint64_t x280 = 4LLU;
uint16_t x287 = 0U;
uint32_t x288 = 8U;
volatile uint32_t x301 = 3U;
static volatile uint64_t x304 = 13LLU;
volatile int8_t x312 = INT8_MIN;
int64_t x339 = -141139008060825916LL;
volatile int32_t x341 = -189;
static volatile uint8_t x343 = UINT8_MAX;
int16_t x349 = -991;
uint32_t x366 = UINT32_MAX;
uint8_t x367 = 0U;
int32_t t66 = -5;
uint32_t x377 = 1U;
int32_t x380 = -1;
int32_t x381 = INT32_MIN;
static int8_t x395 = INT8_MIN;
uint8_t x417 = UINT8_MAX;
int16_t x436 = INT16_MAX;
static int8_t x442 = INT8_MIN;
static volatile int16_t x444 = INT16_MIN;
int8_t x446 = -1;
int64_t x462 = 0LL;
volatile int16_t x477 = INT16_MAX;
uint32_t x487 = UINT32_MAX;
uint16_t x488 = 64U;
int16_t x514 = 2353;
uint32_t x515 = 1U;
int32_t t87 = -1;
static volatile int8_t x525 = -1;
int16_t x528 = INT16_MIN;
volatile int32_t t89 = 25736447;
uint16_t x532 = 0U;
static int8_t x553 = INT8_MAX;
uint8_t x564 = UINT8_MAX;
static volatile int64_t t96 = -599152275027083LL;
int8_t x573 = INT8_MIN;
uint16_t x576 = 0U;
uint8_t x578 = UINT8_MAX;


void f0(void) {
	int32_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	static int8_t x12 = 1;
	volatile int32_t t0 = 279161;

	t0 = ((x9<=(x10*x11))-x12);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x13 = UINT32_MAX;
	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	static int64_t x16 = 74592054644LL;
	volatile int64_t t1 = -1271791394995827LL;

	t1 = ((x13<=(x14*x15))-x16);

	if (t1 != -74592054644LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = 109317LL;
	int8_t x22 = INT8_MIN;
	static int32_t t2 = 376699814;

	t2 = ((x21<=(x22*x23))-x24);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = UINT8_MAX;
	int32_t t3 = 1;

	t3 = ((x29<=(x30*x31))-x32);

	if (t3 != -254) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = -1LL;
	volatile int32_t x34 = 9;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MAX;
	volatile int64_t t4 = -101352901LL;

	t4 = ((x33<=(x34*x35))-x36);

	if (t4 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x38 = INT8_MIN;
	int8_t x39 = -5;
	uint8_t x40 = UINT8_MAX;

	t5 = ((x37<=(x38*x39))-x40);

	if (t5 != -254) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	static uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 12905U;
	uint16_t x44 = UINT16_MAX;
	static int32_t t6 = -251112082;

	t6 = ((x41<=(x42*x43))-x44);

	if (t6 != -65535) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x46 = INT8_MIN;
	int16_t x47 = -72;
	static int8_t x48 = INT8_MIN;
	static volatile int32_t t7 = 13986127;

	t7 = ((x45<=(x46*x47))-x48);

	if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	static uint64_t x50 = UINT64_MAX;
	int64_t x51 = -1LL;
	int64_t x52 = INT64_MAX;
	int64_t t8 = 7123LL;

	t8 = ((x49<=(x50*x51))-x52);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -6331;
	uint8_t x54 = 10U;
	uint8_t x55 = UINT8_MAX;
	int32_t t9 = 28564;

	t9 = ((x53<=(x54*x55))-x56);

	if (t9 != 364) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MAX;
	uint32_t x58 = 31400U;
	int16_t x59 = INT16_MIN;
	volatile uint16_t x60 = 25U;
	static volatile int32_t t10 = 88832;

	t10 = ((x57<=(x58*x59))-x60);

	if (t10 != -24) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 1;
	volatile int8_t x62 = -23;
	static uint32_t x63 = 7U;
	int16_t x64 = -1;
	volatile int32_t t11 = 386064;

	t11 = ((x61<=(x62*x63))-x64);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 14U;
	static int16_t x66 = 590;
	static int16_t x67 = -27;
	volatile uint16_t x68 = 752U;
	volatile int32_t t12 = 7;

	t12 = ((x65<=(x66*x67))-x68);

	if (t12 != -752) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	volatile int32_t t13 = 1931;

	t13 = ((x69<=(x70*x71))-x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x74 = UINT8_MAX;
	volatile int8_t x75 = INT8_MAX;
	uint8_t x76 = 28U;
	static volatile int32_t t14 = -428;

	t14 = ((x73<=(x74*x75))-x76);

	if (t14 != -27) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = 121137275;
	volatile int8_t x86 = INT8_MIN;
	volatile int32_t t15 = -216;

	t15 = ((x85<=(x86*x87))-x88);

	if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x90 = 1520U;
	int16_t x91 = INT16_MAX;
	int16_t x92 = 1;
	volatile int32_t t16 = 1;

	t16 = ((x89<=(x90*x91))-x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = INT16_MIN;
	static uint32_t x95 = 218120U;
	static int64_t x96 = -1LL;
	static int64_t t17 = 40LL;

	t17 = ((x93<=(x94*x95))-x96);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = 2;
	static int8_t x100 = -1;
	int32_t t18 = 255994;

	t18 = ((x97<=(x98*x99))-x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = 0;
	int64_t x102 = -60003LL;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = -1;
	volatile int32_t t19 = -1507112;

	t19 = ((x101<=(x102*x103))-x104);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = 2;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 457619LLU;
	static int64_t x112 = 2130LL;

	t20 = ((x109<=(x110*x111))-x112);

	if (t20 != -2129LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = 1063060882019LL;
	uint64_t x114 = 100973023LLU;
	static int64_t x115 = -2348LL;
	int8_t x116 = -1;
	volatile int32_t t21 = 518796;

	t21 = ((x113<=(x114*x115))-x116);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = 95554;
	static int32_t x118 = -986966;
	uint16_t x119 = 123U;
	int8_t x120 = INT8_MIN;
	int32_t t22 = 326543533;

	t22 = ((x117<=(x118*x119))-x120);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 10LLU;
	volatile uint16_t x122 = 55U;
	int8_t x123 = INT8_MAX;
	volatile int16_t x124 = 13461;
	static int32_t t23 = 22220;

	t23 = ((x121<=(x122*x123))-x124);

	if (t23 != -13460) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x126 = 40U;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	volatile int64_t t24 = -78241837LL;

	t24 = ((x125<=(x126*x127))-x128);

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x130 = INT32_MIN;
	static uint64_t x131 = UINT64_MAX;
	int8_t x132 = 0;
	static volatile int32_t t25 = -2289783;

	t25 = ((x129<=(x130*x131))-x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	static int32_t x134 = 4106485;
	int16_t x135 = 420;
	uint8_t x136 = 52U;
	int32_t t26 = 4050;

	t26 = ((x133<=(x134*x135))-x136);

	if (t26 != -51) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x138 = -40;
	int8_t x139 = -1;
	volatile int32_t x140 = INT32_MAX;
	volatile int32_t t27 = -218;

	t27 = ((x137<=(x138*x139))-x140);

	if (t27 != -2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x142 = 1U;
	int8_t x143 = INT8_MIN;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t28 = 129U;

	t28 = ((x141<=(x142*x143))-x144);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x146 = 3815LLU;
	int8_t x147 = -38;
	int32_t t29 = -121;

	t29 = ((x145<=(x146*x147))-x148);

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -9632;
	int16_t x151 = 1;
	int16_t x152 = INT16_MAX;
	volatile int32_t t30 = -5;

	t30 = ((x149<=(x150*x151))-x152);

	if (t30 != -32766) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = 38064953445LL;
	int64_t x155 = -1LL;
	uint64_t x156 = 1757147173544LLU;
	uint64_t t31 = 27346791680LLU;

	t31 = ((x153<=(x154*x155))-x156);

	if (t31 != 18446742316562378072LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = 81LL;
	static int8_t x159 = -1;
	int8_t x160 = INT8_MIN;

	t32 = ((x157<=(x158*x159))-x160);

	if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = -660538793403951333LL;
	int64_t x162 = 1978661101768597944LL;
	uint64_t x163 = 4144353LLU;
	static int8_t x164 = -49;
	volatile int32_t t33 = -833631753;

	t33 = ((x161<=(x162*x163))-x164);

	if (t33 != 49) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 61U;
	static uint64_t x166 = 10962641LLU;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t t34 = 24;

	t34 = ((x165<=(x166*x167))-x168);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 390024289U;
	int32_t x170 = -3071021;
	static volatile int16_t x172 = INT16_MIN;
	int32_t t35 = 348;

	t35 = ((x169<=(x170*x171))-x172);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x174 = -3;
	int8_t x175 = -1;
	int16_t x176 = -8;
	int32_t t36 = 3442;

	t36 = ((x173<=(x174*x175))-x176);

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = -1LL;
	volatile uint64_t x178 = 534896904084LLU;
	int32_t x179 = -1;
	uint64_t x180 = 14332LLU;
	volatile uint64_t t37 = 213696193834LLU;

	t37 = ((x177<=(x178*x179))-x180);

	if (t37 != 18446744073709537284LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x185 = 3U;
	uint32_t x186 = 20392685U;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int64_t x188 = -1LL;
	int64_t t38 = -27544965290565167LL;

	t38 = ((x185<=(x186*x187))-x188);

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = UINT64_MAX;
	static int32_t x190 = INT32_MAX;
	int16_t x191 = -1;
	int64_t x192 = -15823673861777491LL;
	int64_t t39 = -1014384709389773545LL;

	t39 = ((x189<=(x190*x191))-x192);

	if (t39 != 15823673861777491LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = 0U;
	static uint64_t x194 = UINT64_MAX;
	uint64_t x195 = UINT64_MAX;
	int32_t x196 = 175425489;
	static volatile int32_t t40 = 7;

	t40 = ((x193<=(x194*x195))-x196);

	if (t40 != -175425488) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x197 = -13348;
	uint32_t x198 = UINT32_MAX;
	static int64_t x200 = 32578336818644564LL;
	static int64_t t41 = 53193217974327LL;

	t41 = ((x197<=(x198*x199))-x200);

	if (t41 != -32578336818644563LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MIN;
	int64_t x203 = 406268164599338LL;
	volatile int16_t x204 = 1;
	int32_t t42 = -8544735;

	t42 = ((x201<=(x202*x203))-x204);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = -1;
	volatile int32_t t43 = 3847;

	t43 = ((x209<=(x210*x211))-x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x215 = INT16_MAX;
	static int64_t x216 = -1LL;
	int64_t t44 = -44156663984610466LL;

	t44 = ((x213<=(x214*x215))-x216);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = -10;
	int16_t x219 = INT16_MIN;
	static volatile int64_t t45 = -785194504230604LL;

	t45 = ((x217<=(x218*x219))-x220);

	if (t45 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = -384;
	uint8_t x227 = 26U;
	int64_t x228 = INT64_MAX;

	t46 = ((x225<=(x226*x227))-x228);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = -2069941;
	int16_t x230 = INT16_MIN;
	uint64_t x232 = 95183LLU;
	uint64_t t47 = 44054864308564LLU;

	t47 = ((x229<=(x230*x231))-x232);

	if (t47 != 18446744073709456433LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x233 = 8LLU;
	int8_t x234 = 4;
	uint8_t x235 = 11U;
	uint8_t x236 = 1U;
	volatile int32_t t48 = -297;

	t48 = ((x233<=(x234*x235))-x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x237 = 14;
	uint8_t x240 = 47U;
	static volatile int32_t t49 = -316957;

	t49 = ((x237<=(x238*x239))-x240);

	if (t49 != -47) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = 20U;
	uint16_t x243 = 66U;
	int16_t x244 = 29;
	int32_t t50 = -2594;

	t50 = ((x241<=(x242*x243))-x244);

	if (t50 != -29) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1;
	int8_t x250 = -1;
	static uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 22480U;

	t51 = ((x249<=(x250*x251))-x252);

	if (t51 != 4294944816U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = -50;
	uint32_t x255 = 16U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t52 = 38;

	t52 = ((x253<=(x254*x255))-x256);

	if (t52 != -255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x269 = 79673U;
	volatile int16_t x270 = INT16_MIN;
	uint8_t x271 = 45U;
	uint64_t x272 = 12502993651454LLU;

	t53 = ((x269<=(x270*x271))-x272);

	if (t53 != 18446731570715900163LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x277 = 77U;
	volatile int32_t x278 = -1;
	int16_t x279 = -1;
	volatile uint64_t t54 = 661LLU;

	t54 = ((x277<=(x278*x279))-x280);

	if (t54 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = UINT16_MAX;
	static uint32_t t55 = 129U;

	t55 = ((x285<=(x286*x287))-x288);

	if (t55 != 4294967288U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = -1697;
	static uint64_t x294 = 2285626644496657846LLU;
	static int64_t x295 = INT64_MIN;
	static int64_t x296 = INT64_MAX;
	volatile int64_t t56 = -12LL;

	t56 = ((x293<=(x294*x295))-x296);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x302 = 1U;
	int32_t x303 = 27557;
	static volatile uint64_t t57 = 255684679784529LLU;

	t57 = ((x301<=(x302*x303))-x304);

	if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x305 = 57U;
	uint8_t x306 = 1U;
	int16_t x307 = 609;
	int32_t x308 = INT32_MAX;
	volatile int32_t t58 = 6253903;

	t58 = ((x305<=(x306*x307))-x308);

	if (t58 != -2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x309 = 10U;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = UINT64_MAX;
	int32_t t59 = 324795;

	t59 = ((x309<=(x310*x311))-x312);

	if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x325 = 845;
	static int16_t x326 = INT16_MIN;
	uint8_t x327 = UINT8_MAX;
	int16_t x328 = 0;
	volatile int32_t t60 = -304363001;

	t60 = ((x325<=(x326*x327))-x328);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x337 = -1;
	static int16_t x338 = -1;
	static uint64_t x340 = 4613942884216659226LLU;
	uint64_t t61 = 331370LLU;

	t61 = ((x337<=(x338*x339))-x340);

	if (t61 != 13832801189492892391LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x342 = 35U;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t62 = -452;

	t62 = ((x341<=(x342*x343))-x344);

	if (t62 != -254) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x345 = 3320U;
	uint32_t x346 = 62U;
	int64_t x347 = 101297608971LL;
	int64_t x348 = INT64_MAX;
	static volatile int64_t t63 = 284090189796LL;

	t63 = ((x345<=(x346*x347))-x348);

	if (t63 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x350 = -1LL;
	int8_t x351 = INT8_MIN;
	static uint64_t x352 = 133907165LLU;
	static uint64_t t64 = 3169992762403LLU;

	t64 = ((x349<=(x350*x351))-x352);

	if (t64 != 18446744073575644452LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x361 = -1;
	int16_t x362 = -1;
	uint16_t x363 = 482U;
	int16_t x364 = INT16_MIN;
	int32_t t65 = 20637224;

	t65 = ((x361<=(x362*x363))-x364);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = -164613939829LL;
	static int32_t x368 = INT32_MAX;

	t66 = ((x365<=(x366*x367))-x368);

	if (t66 != -2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x378 = -1;
	uint32_t x379 = 1U;
	volatile int32_t t67 = 178;

	t67 = ((x377<=(x378*x379))-x380);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x382 = INT8_MIN;
	int16_t x383 = -1;
	static int64_t x384 = -44029808LL;
	int64_t t68 = 15756910322380727LL;

	t68 = ((x381<=(x382*x383))-x384);

	if (t68 != 44029809LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x385 = 150U;
	volatile uint32_t x386 = 60U;
	volatile int16_t x387 = 54;
	static int16_t x388 = -1;
	int32_t t69 = -3950304;

	t69 = ((x385<=(x386*x387))-x388);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x393 = 87617867U;
	int8_t x394 = -1;
	volatile uint16_t x396 = 352U;
	volatile int32_t t70 = 1;

	t70 = ((x393<=(x394*x395))-x396);

	if (t70 != -352) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x397 = 83U;
	static uint32_t x398 = 2943U;
	uint64_t x399 = UINT64_MAX;
	static int8_t x400 = INT8_MAX;
	int32_t t71 = -142;

	t71 = ((x397<=(x398*x399))-x400);

	if (t71 != -126) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x418 = 12867573248852LLU;
	int64_t x419 = INT64_MAX;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t72 = 133916431;

	t72 = ((x417<=(x418*x419))-x420);

	if (t72 != -32766) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = 11831LL;
	int64_t x423 = -53164235211205LL;
	int16_t x424 = INT16_MAX;
	int32_t t73 = -36269;

	t73 = ((x421<=(x422*x423))-x424);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x429 = 13739653688535364LLU;
	uint32_t x430 = UINT32_MAX;
	static int64_t x431 = 13880841LL;
	uint8_t x432 = 31U;
	static volatile int32_t t74 = -53;

	t74 = ((x429<=(x430*x431))-x432);

	if (t74 != -30) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x433 = INT16_MIN;
	uint32_t x434 = 0U;
	static uint32_t x435 = 53561944U;
	volatile int32_t t75 = -245;

	t75 = ((x433<=(x434*x435))-x436);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x441 = 5U;
	uint64_t x443 = UINT64_MAX;
	int32_t t76 = 2;

	t76 = ((x441<=(x442*x443))-x444);

	if (t76 != 32769) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x445 = 1U;
	uint8_t x447 = 124U;
	static int8_t x448 = -1;
	int32_t t77 = -309713;

	t77 = ((x445<=(x446*x447))-x448);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x457 = -1LL;
	uint8_t x458 = UINT8_MAX;
	uint32_t x459 = 253482U;
	int32_t x460 = -1;
	int32_t t78 = -346364283;

	t78 = ((x457<=(x458*x459))-x460);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x461 = -2;
	volatile int64_t x463 = INT64_MIN;
	static uint64_t x464 = 349LLU;
	volatile uint64_t t79 = 886548524LLU;

	t79 = ((x461<=(x462*x463))-x464);

	if (t79 != 18446744073709551268LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int8_t x475 = 0;
	uint32_t x476 = 47510U;
	volatile uint32_t t80 = 3523293U;

	t80 = ((x473<=(x474*x475))-x476);

	if (t80 != 4294919787U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x478 = 1U;
	volatile int8_t x479 = INT8_MIN;
	static uint16_t x480 = 163U;
	volatile int32_t t81 = 39077;

	t81 = ((x477<=(x478*x479))-x480);

	if (t81 != -163) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x481 = INT32_MIN;
	uint8_t x482 = 0U;
	static int8_t x483 = -57;
	static int16_t x484 = INT16_MIN;
	int32_t t82 = 452210;

	t82 = ((x481<=(x482*x483))-x484);

	if (t82 != 32769) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x485 = -1;
	int16_t x486 = 249;
	int32_t t83 = 1461995;

	t83 = ((x485<=(x486*x487))-x488);

	if (t83 != -64) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x493 = INT64_MAX;
	uint16_t x494 = 31714U;
	int8_t x495 = 12;
	static uint64_t x496 = 95695233130273LLU;
	volatile uint64_t t84 = 163361LLU;

	t84 = ((x493<=(x494*x495))-x496);

	if (t84 != 18446648378476421343LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x501 = INT8_MAX;
	int8_t x502 = -1;
	int32_t x503 = INT32_MAX;
	uint16_t x504 = UINT16_MAX;
	static int32_t t85 = 3;

	t85 = ((x501<=(x502*x503))-x504);

	if (t85 != -65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x509 = 37U;
	int32_t x510 = -4848;
	int16_t x511 = -1;
	static uint8_t x512 = 2U;
	int32_t t86 = 2239;

	t86 = ((x509<=(x510*x511))-x512);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x513 = -1;
	volatile uint16_t x516 = UINT16_MAX;

	t87 = ((x513<=(x514*x515))-x516);

	if (t87 != -65535) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x517 = INT16_MIN;
	uint32_t x518 = 25630745U;
	volatile uint16_t x519 = 3252U;
	uint64_t x520 = 8398890286162LLU;
	uint64_t t88 = 13LLU;

	t88 = ((x517<=(x518*x519))-x520);

	if (t88 != 18446735674819265454LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x526 = 906LL;
	volatile int8_t x527 = INT8_MIN;

	t89 = ((x525<=(x526*x527))-x528);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x529 = 4380544147930663277LLU;
	int8_t x530 = -1;
	int8_t x531 = -1;
	int32_t t90 = -147169;

	t90 = ((x529<=(x530*x531))-x532);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x537 = -1;
	volatile uint32_t x538 = 55481156U;
	static volatile int32_t x539 = -1;
	static int16_t x540 = INT16_MIN;
	int32_t t91 = 721791999;

	t91 = ((x537<=(x538*x539))-x540);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x541 = 8710115624451LLU;
	static volatile int16_t x542 = INT16_MIN;
	uint8_t x543 = 0U;
	volatile int64_t x544 = 714655LL;
	volatile int64_t t92 = 101812568608LL;

	t92 = ((x541<=(x542*x543))-x544);

	if (t92 != -714655LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x545 = UINT32_MAX;
	int64_t x546 = -1LL;
	static volatile int8_t x547 = INT8_MIN;
	static int8_t x548 = 23;
	int32_t t93 = 3573862;

	t93 = ((x545<=(x546*x547))-x548);

	if (t93 != -23) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x554 = INT8_MIN;
	int8_t x555 = -1;
	static int8_t x556 = 0;
	int32_t t94 = 6229935;

	t94 = ((x553<=(x554*x555))-x556);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x561 = -3646;
	int64_t x562 = -811496805404268983LL;
	int32_t x563 = -1;
	int32_t t95 = 950;

	t95 = ((x561<=(x562*x563))-x564);

	if (t95 != -254) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x565 = -1;
	int8_t x566 = -2;
	int32_t x567 = -247812831;
	int64_t x568 = -19340186LL;

	t96 = ((x565<=(x566*x567))-x568);

	if (t96 != 19340187LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x569 = -107;
	static uint64_t x570 = 10LLU;
	volatile int64_t x571 = 349316207343853930LL;
	int8_t x572 = INT8_MIN;
	static int32_t t97 = -127603;

	t97 = ((x569<=(x570*x571))-x572);

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x574 = UINT64_MAX;
	int16_t x575 = -724;
	volatile int32_t t98 = 6726;

	t98 = ((x573<=(x574*x575))-x576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x577 = INT8_MIN;
	volatile int8_t x579 = INT8_MAX;
	uint16_t x580 = UINT16_MAX;
	static int32_t t99 = -10359;

	t99 = ((x577<=(x578*x579))-x580);

	if (t99 != -65534) { NG(); } else { ; }
	
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


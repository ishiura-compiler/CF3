#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = 0;
volatile int32_t x4 = -1;
uint8_t x5 = 38U;
int16_t x6 = INT16_MIN;
volatile uint64_t t1 = 628770822LLU;
volatile int32_t t2 = -353912040;
static volatile int8_t x16 = INT8_MIN;
uint64_t x20 = 454186694529630769LLU;
int8_t x21 = -1;
int8_t x22 = INT8_MIN;
volatile int32_t t6 = -5;
int32_t x32 = INT32_MIN;
uint32_t x34 = 40U;
int64_t t8 = 1514960070020LL;
int32_t x56 = 92;
static int16_t x59 = -1;
static int32_t t14 = -774850403;
int64_t x65 = -178963990LL;
int16_t x68 = INT16_MAX;
uint8_t x73 = 15U;
static volatile int8_t x79 = -37;
int32_t x80 = INT32_MIN;
static volatile int32_t t19 = -7011120;
int8_t x86 = 57;
uint16_t x89 = 445U;
int32_t x91 = -2957;
volatile int32_t t21 = 11;
int16_t x95 = 4906;
int8_t x96 = INT8_MIN;
static volatile uint8_t x97 = UINT8_MAX;
int16_t x101 = 332;
static volatile int32_t t24 = 28125;
static int16_t x105 = INT16_MAX;
static int8_t x107 = -57;
int8_t x124 = INT8_MIN;
uint8_t x129 = UINT8_MAX;
static int32_t x130 = 37;
static uint32_t x133 = 2410U;
int8_t x138 = -28;
uint8_t x143 = 96U;
static int32_t x154 = -1;
int16_t x162 = INT16_MAX;
volatile int32_t t39 = 151;
int16_t x168 = -1;
volatile int64_t x174 = 130254226353LL;
int8_t x178 = 0;
volatile int32_t t43 = -6;
static volatile uint32_t x181 = 90900691U;
volatile int8_t x182 = INT8_MAX;
int8_t x183 = -1;
uint32_t x191 = 76277U;
volatile int64_t t48 = 12415LL;
static int64_t t49 = 39773476142192LL;
volatile int64_t t50 = -1856905349156269360LL;
uint64_t x213 = 218334955LLU;
int8_t x214 = -1;
uint8_t x218 = UINT8_MAX;
static int64_t x221 = INT64_MIN;
uint8_t x222 = 117U;
volatile uint16_t x226 = 13U;
static int32_t x227 = -1;
volatile int32_t x232 = INT32_MIN;
volatile int32_t t56 = 15455;
volatile int16_t x237 = 92;
static volatile int32_t x240 = -7;
int64_t x250 = -12LL;
volatile uint32_t x252 = 51U;
static uint64_t x256 = 3236716150774LLU;
static uint32_t x264 = 199U;
uint32_t t64 = 54220823U;
volatile int32_t t65 = 2078;
int32_t x272 = INT32_MIN;
volatile int32_t t67 = -431412238;
int64_t x299 = INT64_MIN;
int32_t x300 = -446;
int16_t x302 = INT16_MIN;
int16_t x306 = INT16_MIN;
uint16_t x309 = 14970U;
uint32_t x314 = 11983944U;
volatile int32_t x316 = INT32_MAX;
int64_t x326 = INT64_MIN;
static volatile int32_t t81 = -24279;
uint32_t x333 = 1547U;
static uint32_t t82 = 0U;
int32_t x338 = INT32_MIN;
volatile int16_t x340 = 2;
int32_t x341 = INT32_MIN;
int64_t x342 = INT64_MIN;
uint32_t x343 = 429900U;
uint16_t x346 = UINT16_MAX;
int64_t x349 = -226899LL;
int32_t x350 = -1;
int64_t x352 = -240747LL;
int32_t t87 = 16554;
int32_t x368 = INT32_MIN;
static int32_t t90 = 459774531;
int64_t x371 = -1LL;
volatile int64_t t92 = -4089009946576411457LL;
volatile int32_t x379 = -104452;
volatile uint64_t x384 = 25125246LLU;
static volatile uint64_t t94 = 229LLU;
uint8_t x389 = 23U;
uint8_t x397 = UINT8_MAX;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x3 = INT8_MIN;
	int32_t t0 = -7269;

	t0 = ((x1<x2)*(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x7 = 1LLU;
	int16_t x8 = INT16_MAX;

	t1 = ((x5<x6)*(x7%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 43;
	int32_t x10 = 765;
	static int8_t x11 = INT8_MIN;
	volatile uint16_t x12 = UINT16_MAX;

	t2 = ((x9<x10)*(x11%x12));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = -7LL;
	volatile uint32_t x15 = 335859U;
	uint32_t t3 = 644U;

	t3 = ((x13<x14)*(x15%x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -103;
	static volatile int16_t x18 = -1;
	static int32_t x19 = INT32_MIN;
	uint64_t t4 = 1048542937614023011LLU;

	t4 = ((x17<x18)*(x19%x20));

	if (t4 != 279276290376837208LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = UINT64_MAX;
	static volatile int64_t x24 = INT64_MIN;
	volatile uint64_t t5 = 5270105LLU;

	t5 = ((x21<x22)*(x23%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	uint64_t x26 = 42298LLU;
	int32_t x27 = INT32_MAX;
	uint8_t x28 = UINT8_MAX;

	t6 = ((x25<x26)*(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 72369175630068LLU;
	static uint32_t x30 = 23575U;
	int16_t x31 = -1;
	int32_t t7 = 195;

	t7 = ((x29<x30)*(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -1;

	t8 = ((x33<x34)*(x35%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 2671;
	int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static uint32_t x40 = 308U;
	int64_t t9 = -112935641LL;

	t9 = ((x37<x38)*(x39%x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1999087704U;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = 434;
	volatile int16_t x44 = -1;
	int32_t t10 = 3158;

	t10 = ((x41<x42)*(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 12012;
	int8_t x46 = -45;
	int64_t x47 = 54081LL;
	uint8_t x48 = 46U;
	static int64_t t11 = 1724627999140LL;

	t11 = ((x45<x46)*(x47%x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1U;
	static uint8_t x50 = 1U;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 1275;

	t12 = ((x49<x50)*(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 2141646892117377LL;
	int32_t x54 = -8035;
	uint16_t x55 = UINT16_MAX;
	static int32_t t13 = -1;

	t13 = ((x53<x54)*(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 129021234U;
	uint32_t x58 = 14618U;
	int8_t x60 = INT8_MIN;

	t14 = ((x57<x58)*(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = 26186LLU;
	volatile int64_t x67 = INT64_MIN;
	static volatile int64_t t15 = 146585687LL;

	t15 = ((x65<x66)*(x67%x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 35LL;
	uint16_t x70 = 116U;
	static uint16_t x71 = 32022U;
	static volatile uint64_t x72 = 208LLU;
	uint64_t t16 = 46783LLU;

	t16 = ((x69<x70)*(x71%x72));

	if (t16 != 198LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 48141616LLU;
	int32_t x76 = 114458772;
	uint64_t t17 = 5448538695906401910LLU;

	t17 = ((x73<x74)*(x75%x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	static int16_t x78 = -8;
	volatile int32_t t18 = 47460662;

	t18 = ((x77<x78)*(x79%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x81 = 161U;
	uint32_t x82 = 5093701U;
	int32_t x83 = -1;
	static volatile uint8_t x84 = 22U;

	t19 = ((x81<x82)*(x83%x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	static int8_t x87 = INT8_MAX;
	static uint64_t x88 = 15LLU;
	volatile uint64_t t20 = 3545047LLU;

	t20 = ((x85<x86)*(x87%x88));

	if (t20 != 7LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MIN;
	int16_t x92 = -1;

	t21 = ((x89<x90)*(x91%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 7920392875531LLU;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t t22 = -178899559;

	t22 = ((x93<x94)*(x95%x96));

	if (t22 != 42) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x98 = INT8_MIN;
	int8_t x99 = -1;
	static int16_t x100 = -1;
	volatile int32_t t23 = -648549229;

	t23 = ((x97<x98)*(x99%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;

	t24 = ((x101<x102)*(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = -1;
	volatile int8_t x108 = INT8_MIN;
	int32_t t25 = -22110638;

	t25 = ((x105<x106)*(x107%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = 85649064933118LLU;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = -1;
	volatile int32_t t26 = -229;

	t26 = ((x109<x110)*(x111%x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -257153471;
	int8_t x114 = -1;
	uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	static int32_t t27 = 37591649;

	t27 = ((x113<x114)*(x115%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MIN;
	int32_t x118 = -388420;
	int32_t x119 = INT32_MIN;
	int32_t x120 = -13318;
	volatile int32_t t28 = 798;

	t28 = ((x117<x118)*(x119%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x121 = 1706133308794LLU;
	int64_t x122 = INT64_MIN;
	volatile int16_t x123 = INT16_MAX;
	static int32_t t29 = 3512958;

	t29 = ((x121<x122)*(x123%x124));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 7U;
	uint16_t x126 = 17U;
	static int8_t x127 = -1;
	volatile uint32_t x128 = UINT32_MAX;
	volatile uint32_t t30 = 2U;

	t30 = ((x125<x126)*(x127%x128));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t31 = 7;

	t31 = ((x129<x130)*(x131%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x134 = -16275201;
	static volatile int16_t x135 = -1;
	int32_t x136 = -1;
	int32_t t32 = 2;

	t32 = ((x133<x134)*(x135%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = 204;
	int64_t x139 = 1210688369502603422LL;
	static volatile int8_t x140 = INT8_MAX;
	volatile int64_t t33 = 38734274LL;

	t33 = ((x137<x138)*(x139%x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t34 = 1;

	t34 = ((x141<x142)*(x143%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	volatile uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	static uint32_t x148 = 1326U;
	static volatile int64_t t35 = 0LL;

	t35 = ((x145<x146)*(x147%x148));

	if (t35 != -944LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t36 = -290958637;

	t36 = ((x149<x150)*(x151%x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	volatile uint32_t x155 = 9060U;
	int32_t x156 = -193;
	volatile uint32_t t37 = 2168957U;

	t37 = ((x153<x154)*(x155%x156));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x158 = 754U;
	static uint64_t x159 = UINT64_MAX;
	uint32_t x160 = 1943U;
	volatile uint64_t t38 = 8354202624693LLU;

	t38 = ((x157<x158)*(x159%x160));

	if (t38 != 284LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = 6;
	static int16_t x163 = INT16_MAX;
	uint8_t x164 = 109U;

	t39 = ((x161<x162)*(x163%x164));

	if (t39 != 67) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -264981500325261LL;
	uint64_t x166 = 104299LLU;
	volatile int32_t x167 = INT32_MIN;
	volatile int32_t t40 = 99877;

	t40 = ((x165<x166)*(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile uint16_t x170 = 12862U;
	static int64_t x171 = -584573441671LL;
	int32_t x172 = INT32_MAX;
	int64_t t41 = 49342909919195046LL;

	t41 = ((x169<x170)*(x171%x172));

	if (t41 != -457889687LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 1;
	volatile uint16_t x175 = 1U;
	int64_t x176 = INT64_MAX;
	volatile int64_t t42 = 1729323465123208LL;

	t42 = ((x173<x174)*(x175%x176));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = 37;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = 1;

	t43 = ((x177<x178)*(x179%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t44 = -3077455;

	t44 = ((x181<x182)*(x183%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t45 = 186;

	t45 = ((x185<x186)*(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	volatile int64_t x190 = 17386LL;
	int16_t x192 = 1801;
	volatile uint32_t t46 = 123217U;

	t46 = ((x189<x190)*(x191%x192));

	if (t46 != 635U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = INT64_MAX;
	uint64_t x194 = 600283593394978349LLU;
	static uint16_t x195 = 8U;
	int8_t x196 = -39;
	volatile int32_t t47 = 946028;

	t47 = ((x193<x194)*(x195%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	int8_t x198 = -8;
	int64_t x199 = 218854875919231911LL;
	uint8_t x200 = 12U;

	t48 = ((x197<x198)*(x199%x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MIN;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	volatile int64_t x204 = INT64_MIN;

	t49 = ((x201<x202)*(x203%x204));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 23935U;
	volatile uint32_t x206 = 179250175U;
	volatile int64_t x207 = INT64_MIN;
	int32_t x208 = -12062;

	t50 = ((x205<x206)*(x207%x208));

	if (t50 != -11846LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -2717898988LL;
	static int32_t x210 = 11565724;
	uint64_t x211 = 244LLU;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t51 = 46113805572189LLU;

	t51 = ((x209<x210)*(x211%x212));

	if (t51 != 244LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x215 = UINT64_MAX;
	static int32_t x216 = -174629;
	uint64_t t52 = 1293124LLU;

	t52 = ((x213<x214)*(x215%x216));

	if (t52 != 174628LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	static uint8_t x219 = 40U;
	uint16_t x220 = 23U;
	int32_t t53 = -1;

	t53 = ((x217<x218)*(x219%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x223 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t54 = 1645;

	t54 = ((x221<x222)*(x223%x224));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = -34626;
	int64_t x228 = -2LL;
	static volatile int64_t t55 = 95954795115711LL;

	t55 = ((x225<x226)*(x227%x228));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -12;
	int32_t x230 = -1;
	static int32_t x231 = -347;

	t56 = ((x229<x230)*(x231%x232));

	if (t56 != -347) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 18709498;
	int64_t x234 = -1LL;
	volatile uint64_t x235 = 118487231LLU;
	uint16_t x236 = 7U;
	static uint64_t t57 = 63LLU;

	t57 = ((x233<x234)*(x235%x236));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x238 = INT16_MIN;
	volatile uint32_t x239 = 146058389U;
	static volatile uint32_t t58 = 114U;

	t58 = ((x237<x238)*(x239%x240));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = 135U;
	uint32_t x242 = 12010532U;
	volatile int32_t x243 = INT32_MAX;
	volatile int64_t x244 = -2LL;
	volatile int64_t t59 = 13743057755LL;

	t59 = ((x241<x242)*(x243%x244));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x245 = -1;
	int16_t x246 = -28;
	volatile int8_t x247 = 39;
	int64_t x248 = -37LL;
	static int64_t t60 = 142585157412487330LL;

	t60 = ((x245<x246)*(x247%x248));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -3;
	static int8_t x251 = -1;
	static uint32_t t61 = 855605U;

	t61 = ((x249<x250)*(x251%x252));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	volatile int64_t x254 = -1LL;
	static uint32_t x255 = UINT32_MAX;
	uint64_t t62 = 13779227LLU;

	t62 = ((x253<x254)*(x255%x256));

	if (t62 != 4294967295LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 3U;
	int64_t x258 = 660318680282936427LL;
	int32_t x259 = INT32_MAX;
	static uint8_t x260 = 19U;
	int32_t t63 = 34695;

	t63 = ((x257<x258)*(x259%x260));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x261 = -1;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MAX;

	t64 = ((x261<x262)*(x263%x264));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 24U;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 35U;
	volatile int32_t x268 = INT32_MIN;

	t65 = ((x265<x266)*(x267%x268));

	if (t65 != 35) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	uint32_t x270 = 9U;
	uint64_t x271 = 3824082010LLU;
	uint64_t t66 = 386LLU;

	t66 = ((x269<x270)*(x271%x272));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int8_t x275 = 0;
	volatile uint8_t x276 = 79U;

	t67 = ((x273<x274)*(x275%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	volatile int8_t x279 = INT8_MAX;
	volatile int16_t x280 = 13558;
	volatile int32_t t68 = 3;

	t68 = ((x277<x278)*(x279%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = -1;
	static int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -1;
	volatile int32_t t69 = -49074842;

	t69 = ((x281<x282)*(x283%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 37U;
	uint64_t x286 = 962041343565529384LLU;
	int64_t x287 = INT64_MIN;
	int64_t x288 = 87825LL;
	volatile int64_t t70 = -946812297033888222LL;

	t70 = ((x285<x286)*(x287%x288));

	if (t70 != -18833LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 68921U;
	static volatile int32_t x290 = -1;
	int64_t x291 = INT64_MIN;
	static int32_t x292 = INT32_MAX;
	volatile int64_t t71 = 17173868623LL;

	t71 = ((x289<x290)*(x291%x292));

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = 290U;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int32_t t72 = 3917420;

	t72 = ((x293<x294)*(x295%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = -40;
	int64_t t73 = -555525893LL;

	t73 = ((x297<x298)*(x299%x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x303 = -1LL;
	uint8_t x304 = 13U;
	static int64_t t74 = -1886LL;

	t74 = ((x301<x302)*(x303%x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MAX;
	volatile uint64_t x307 = 3LLU;
	static int32_t x308 = INT32_MAX;
	uint64_t t75 = 22551LLU;

	t75 = ((x305<x306)*(x307%x308));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x310 = UINT32_MAX;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = 7;
	int32_t t76 = 1655;

	t76 = ((x309<x310)*(x311%x312));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = -1;
	uint32_t x315 = 380207U;
	uint32_t t77 = 7U;

	t77 = ((x313<x314)*(x315%x316));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x317 = INT16_MAX;
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t78 = 2739117743653LL;

	t78 = ((x317<x318)*(x319%x320));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = 85035LLU;
	uint16_t x322 = 5U;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 18030U;
	uint32_t t79 = 1807992055U;

	t79 = ((x321<x322)*(x323%x324));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x325 = 36262663077LLU;
	int16_t x327 = INT16_MIN;
	int16_t x328 = 506;
	volatile int32_t t80 = -608318;

	t80 = ((x325<x326)*(x327%x328));

	if (t80 != -384) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = 6125935;
	volatile int32_t x330 = -1;
	uint16_t x331 = 1272U;
	uint8_t x332 = UINT8_MAX;

	t81 = ((x329<x330)*(x331%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x334 = UINT32_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	static uint8_t x336 = UINT8_MAX;

	t82 = ((x333<x334)*(x335%x336));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = 967063987710LL;
	volatile int64_t x339 = 5128946526265539LL;
	int64_t t83 = 47LL;

	t83 = ((x337<x338)*(x339%x340));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x344 = -669618LL;
	volatile int64_t t84 = -5185973021429LL;

	t84 = ((x341<x342)*(x343%x344));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = 444004617061803LLU;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = 42U;
	volatile int32_t t85 = 35262130;

	t85 = ((x345<x346)*(x347%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x351 = INT8_MAX;
	volatile int64_t t86 = 832366LL;

	t86 = ((x349<x350)*(x351%x352));

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MAX;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;

	t87 = ((x353<x354)*(x355%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 255443LLU;
	int64_t x358 = 121462857085814239LL;
	volatile int8_t x359 = -1;
	static int8_t x360 = INT8_MAX;
	volatile int32_t t88 = 465520733;

	t88 = ((x357<x358)*(x359%x360));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x361 = 53U;
	volatile uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 0U;
	int8_t x364 = INT8_MIN;
	int32_t t89 = -337308;

	t89 = ((x361<x362)*(x363%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = 1LL;
	int16_t x367 = 7738;

	t90 = ((x365<x366)*(x367%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = -1;
	static volatile int16_t x370 = 6929;
	volatile uint16_t x372 = UINT16_MAX;
	int64_t t91 = -57LL;

	t91 = ((x369<x370)*(x371%x372));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -231;
	int32_t x374 = INT32_MAX;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MAX;

	t92 = ((x373<x374)*(x375%x376));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = -1;
	int64_t x378 = 5547735LL;
	uint8_t x380 = 1U;
	volatile int32_t t93 = 179297204;

	t93 = ((x377<x378)*(x379%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x381 = INT8_MIN;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 6171U;

	t94 = ((x381<x382)*(x383%x384));

	if (t94 != 6171LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x390 = 4U;
	int16_t x391 = -15;
	int64_t x392 = 51254460911264LL;
	int64_t t95 = 86118066997618LL;

	t95 = ((x389<x390)*(x391%x392));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = INT64_MAX;
	uint8_t x394 = 0U;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	static int32_t t96 = 263;

	t96 = ((x393<x394)*(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x398 = 406LL;
	static int8_t x399 = INT8_MIN;
	volatile uint64_t x400 = 7208578921LLU;
	static uint64_t t97 = 6019125299682033722LLU;

	t97 = ((x397<x398)*(x399%x400));

	if (t97 != 440306630LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = 194465045316LLU;
	static int64_t x402 = INT64_MAX;
	int16_t x403 = INT16_MAX;
	uint8_t x404 = 12U;
	int32_t t98 = 85524;

	t98 = ((x401<x402)*(x403%x404));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MAX;
	volatile int16_t x407 = INT16_MAX;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t99 = -284;

	t99 = ((x405<x406)*(x407%x408));

	if (t99 != 127) { NG(); } else { ; }
	
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


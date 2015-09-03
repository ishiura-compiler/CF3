#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -10;
volatile uint16_t x8 = 1U;
int8_t x12 = INT8_MIN;
uint32_t x24 = 48U;
volatile int32_t t4 = -64778960;
volatile int32_t t6 = 7631;
int16_t x37 = -1;
int32_t t10 = -17937;
volatile int32_t t11 = -884472302;
static volatile int8_t x55 = INT8_MIN;
int16_t x58 = INT16_MIN;
int32_t x60 = INT32_MAX;
static int32_t t13 = 13;
static volatile int32_t t14 = 29;
int32_t t16 = 2450185;
static int64_t x82 = -1LL;
uint16_t x87 = UINT16_MAX;
int16_t x98 = -1;
int64_t x102 = INT64_MIN;
int8_t x114 = INT8_MIN;
int32_t x117 = 24;
static int64_t x131 = -1LL;
volatile int32_t x133 = 2;
static uint16_t x136 = 8835U;
uint8_t x141 = 0U;
uint64_t x143 = 683728714560821769LLU;
static volatile int32_t t27 = 1;
int64_t x146 = -85540776764LL;
int32_t x149 = 61;
volatile int64_t x150 = INT64_MAX;
static int64_t x151 = 16561189371LL;
int8_t x155 = -3;
static int16_t x156 = INT16_MIN;
int32_t t30 = -1070522407;
uint16_t x159 = UINT16_MAX;
int32_t x163 = INT32_MIN;
volatile int32_t t32 = -2761746;
uint64_t x165 = UINT64_MAX;
int8_t x171 = INT8_MIN;
volatile int8_t x180 = -1;
int32_t x183 = 64772;
uint64_t x185 = UINT64_MAX;
static int16_t x198 = 6;
volatile int16_t x225 = INT16_MAX;
int8_t x227 = INT8_MIN;
int16_t x230 = INT16_MIN;
uint32_t x236 = 43752442U;
uint64_t x244 = 163786267038170407LLU;
static volatile int64_t x246 = INT64_MIN;
volatile uint64_t x251 = UINT64_MAX;
static volatile int16_t x261 = INT16_MIN;
int64_t x267 = -1126958298893LL;
volatile int32_t t58 = -3;
int32_t t59 = 476471669;
volatile uint8_t x282 = 1U;
static int8_t x285 = 9;
static int32_t t61 = 375;
static int32_t x295 = 18382;
int32_t t63 = 1082;
int64_t x314 = -1LL;
uint64_t x319 = 149LLU;
volatile int16_t x323 = -1;
int16_t x325 = -9356;
int32_t x331 = -1;
int16_t x332 = INT16_MAX;
int32_t t70 = -1;
int8_t x359 = INT8_MIN;
int32_t t74 = -32268;
uint32_t x377 = UINT32_MAX;
int8_t x384 = INT8_MIN;
int64_t x386 = -1LL;
int32_t x402 = -397;
int32_t x411 = -1;
int8_t x418 = INT8_MIN;
int16_t x419 = 60;
static uint32_t x421 = 1092U;
volatile int8_t x423 = INT8_MIN;
static volatile uint16_t x424 = 1560U;
int16_t x433 = INT16_MIN;
int64_t x434 = INT64_MIN;
static uint64_t x435 = 80755658467LLU;
uint64_t x447 = UINT64_MAX;
volatile int32_t t90 = -105164;
static int16_t x455 = -7100;
int8_t x462 = 47;
volatile int32_t t95 = 876077807;


void f0(void) {
	int32_t x1 = -103;
	uint16_t x2 = UINT16_MAX;
	uint64_t x4 = 86685279850LLU;
	volatile int32_t t0 = 14739;

	t0 = (x1<(x2==(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -39LL;
	volatile uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	int32_t t1 = 142;

	t1 = (x5<(x6==(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	static uint16_t x10 = UINT16_MAX;
	static int64_t x11 = 12LL;
	static volatile int32_t t2 = -7497552;

	t2 = (x9<(x10==(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int32_t x18 = INT32_MIN;
	uint8_t x19 = 54U;
	volatile int16_t x20 = 3;
	int32_t t3 = 1;

	t3 = (x17<(x18==(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	volatile int64_t x22 = INT64_MAX;
	static volatile uint16_t x23 = 1415U;

	t4 = (x21<(x22==(x23*x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 421U;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = INT32_MAX;
	int8_t x28 = -1;
	int32_t t5 = 376442;

	t5 = (x25<(x26==(x27*x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -130LL;
	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = INT16_MIN;
	int16_t x32 = 12912;

	t6 = (x29<(x30==(x31*x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	static uint64_t x36 = UINT64_MAX;
	int32_t t7 = 117386095;

	t7 = (x33<(x34==(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = 113U;
	int16_t x39 = INT16_MAX;
	static uint8_t x40 = UINT8_MAX;
	int32_t t8 = -1;

	t8 = (x37<(x38==(x39*x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = 9462765734LL;
	static uint64_t x43 = 3021614854261684LLU;
	int64_t x44 = 674179533379LL;
	static volatile int32_t t9 = -8466495;

	t9 = (x41<(x42==(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x46 = INT16_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	volatile uint8_t x48 = 3U;

	t10 = (x45<(x46==(x47*x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	static int64_t x50 = 280877011404LL;
	int8_t x51 = INT8_MAX;
	int16_t x52 = -3163;

	t11 = (x49<(x50==(x51*x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = 0;
	static volatile int64_t x54 = -3037484847499LL;
	uint64_t x56 = UINT64_MAX;
	static volatile int32_t t12 = -116;

	t12 = (x53<(x54==(x55*x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	uint32_t x59 = UINT32_MAX;

	t13 = (x57<(x58==(x59*x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = 2U;
	static int8_t x66 = -1;
	int32_t x67 = -12009170;
	int32_t x68 = -1;

	t14 = (x65<(x66==(x67*x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = 1652146793432LL;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t15 = 418;

	t15 = (x73<(x74==(x75*x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	volatile uint16_t x78 = 778U;
	static int16_t x79 = 1;
	volatile uint64_t x80 = UINT64_MAX;

	t16 = (x77<(x78==(x79*x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	uint8_t x83 = UINT8_MAX;
	static uint64_t x84 = 3946315894338223LLU;
	int32_t t17 = -3082125;

	t17 = (x81<(x82==(x83*x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x85 = INT16_MIN;
	int32_t x86 = -88;
	static volatile int8_t x88 = INT8_MIN;
	static int32_t t18 = -643878110;

	t18 = (x85<(x86==(x87*x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 103U;
	int32_t x90 = INT32_MIN;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	int32_t t19 = -228990;

	t19 = (x89<(x90==(x91*x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 11U;
	static uint64_t x99 = 922141755455LLU;
	int32_t x100 = INT32_MIN;
	volatile int32_t t20 = 28581359;

	t20 = (x97<(x98==(x99*x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	static volatile int64_t x104 = INT64_MAX;
	int32_t t21 = -1461623;

	t21 = (x101<(x102==(x103*x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -1868964422LL;
	int64_t x106 = INT64_MAX;
	volatile int16_t x107 = -1;
	uint8_t x108 = 1U;
	volatile int32_t t22 = 4;

	t22 = (x105<(x106==(x107*x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x113 = 2740914U;
	uint32_t x115 = 7669U;
	uint64_t x116 = 389071LLU;
	volatile int32_t t23 = -2993015;

	t23 = (x113<(x114==(x115*x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x118 = INT64_MAX;
	volatile uint8_t x119 = 3U;
	int8_t x120 = INT8_MAX;
	volatile int32_t t24 = 1;

	t24 = (x117<(x118==(x119*x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MIN;
	int32_t x132 = -1;
	volatile int32_t t25 = 26921;

	t25 = (x129<(x130==(x131*x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x134 = 2731012506890788LL;
	uint8_t x135 = UINT8_MAX;
	int32_t t26 = 772;

	t26 = (x133<(x134==(x135*x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x142 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;

	t27 = (x141<(x142==(x143*x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = 1;
	int8_t x147 = -1;
	int8_t x148 = 0;
	int32_t t28 = -1;

	t28 = (x145<(x146==(x147*x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x152 = UINT64_MAX;
	int32_t t29 = 2333343;

	t29 = (x149<(x150==(x151*x152)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MAX;

	t30 = (x153<(x154==(x155*x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	int64_t x160 = -568230LL;
	static volatile int32_t t31 = -109610;

	t31 = (x157<(x158==(x159*x160)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static int8_t x162 = 6;
	volatile int64_t x164 = -8LL;

	t32 = (x161<(x162==(x163*x164)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MAX;
	volatile uint64_t x168 = 4074229307LLU;
	int32_t t33 = -11057;

	t33 = (x165<(x166==(x167*x168)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x169 = 439U;
	int16_t x170 = INT16_MAX;
	int64_t x172 = 27002224708612LL;
	volatile int32_t t34 = -4;

	t34 = (x169<(x170==(x171*x172)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 31326U;
	uint32_t x174 = 1202313641U;
	volatile int8_t x175 = 23;
	int32_t x176 = -1;
	int32_t t35 = -348629;

	t35 = (x173<(x174==(x175*x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x177 = -1;
	int16_t x178 = 2;
	volatile int32_t x179 = -11603;
	int32_t t36 = 35435136;

	t36 = (x177<(x178==(x179*x180)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x181 = 4U;
	uint8_t x182 = 2U;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = (x181<(x182==(x183*x184)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x186 = 12;
	static int16_t x187 = INT16_MAX;
	static int64_t x188 = -1LL;
	int32_t t38 = 115490666;

	t38 = (x185<(x186==(x187*x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	int32_t x192 = -1;
	volatile int32_t t39 = 2;

	t39 = (x189<(x190==(x191*x192)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = INT8_MAX;
	volatile int16_t x194 = 63;
	int16_t x195 = -55;
	static uint8_t x196 = 2U;
	static volatile int32_t t40 = 68;

	t40 = (x193<(x194==(x195*x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x197 = INT16_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	int32_t x200 = -1;
	int32_t t41 = 195232;

	t41 = (x197<(x198==(x199*x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = 6664373;
	int32_t x202 = -1;
	volatile int64_t x203 = -1LL;
	static uint64_t x204 = UINT64_MAX;
	static volatile int32_t t42 = -98857564;

	t42 = (x201<(x202==(x203*x204)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = -1;
	static uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = -1;
	int8_t x208 = 1;
	int32_t t43 = -15334;

	t43 = (x205<(x206==(x207*x208)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = 1;
	int32_t x210 = INT32_MAX;
	static int16_t x211 = 127;
	static uint64_t x212 = 454855223927LLU;
	volatile int32_t t44 = -8295522;

	t44 = (x209<(x210==(x211*x212)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x217 = 355U;
	int8_t x218 = -1;
	static uint64_t x219 = 26071821077LLU;
	int32_t x220 = INT32_MAX;
	static int32_t t45 = -13389;

	t45 = (x217<(x218==(x219*x220)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	static uint16_t x223 = UINT16_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t46 = 2297;

	t46 = (x221<(x222==(x223*x224)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x226 = INT64_MIN;
	uint64_t x228 = 18915192488122LLU;
	volatile int32_t t47 = 75;

	t47 = (x225<(x226==(x227*x228)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -1;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = 19U;
	volatile int32_t t48 = 935483699;

	t48 = (x229<(x230==(x231*x232)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MAX;
	static int32_t x234 = 8169728;
	int8_t x235 = -1;
	int32_t t49 = 135461;

	t49 = (x233<(x234==(x235*x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x241 = 58;
	uint16_t x242 = 12592U;
	int32_t x243 = INT32_MIN;
	volatile int32_t t50 = 6352;

	t50 = (x241<(x242==(x243*x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x247 = INT8_MAX;
	int64_t x248 = -1LL;
	int32_t t51 = 75801118;

	t51 = (x245<(x246==(x247*x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile int64_t x252 = INT64_MIN;
	int32_t t52 = 83;

	t52 = (x249<(x250==(x251*x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -368121;
	int8_t x254 = INT8_MAX;
	uint64_t x255 = 12LLU;
	int32_t x256 = INT32_MIN;
	int32_t t53 = 0;

	t53 = (x253<(x254==(x255*x256)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 4U;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -1;
	volatile uint32_t x260 = 116501U;
	int32_t t54 = 6;

	t54 = (x257<(x258==(x259*x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x262 = INT8_MAX;
	int32_t x263 = INT32_MAX;
	static int32_t x264 = 0;
	int32_t t55 = 0;

	t55 = (x261<(x262==(x263*x264)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = 3;
	int8_t x268 = INT8_MIN;
	volatile int32_t t56 = 903283483;

	t56 = (x265<(x266==(x267*x268)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = 690476167U;
	int64_t x270 = INT64_MAX;
	int32_t x271 = -1;
	int16_t x272 = INT16_MAX;
	int32_t t57 = 498;

	t57 = (x269<(x270==(x271*x272)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = -217780;
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	uint32_t x276 = 44217847U;

	t58 = (x273<(x274==(x275*x276)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	volatile int16_t x280 = 36;

	t59 = (x277<(x278==(x279*x280)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 12U;
	static volatile int32_t t60 = 12607053;

	t60 = (x281<(x282==(x283*x284)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = INT16_MAX;
	int32_t x287 = 22112360;
	uint64_t x288 = UINT64_MAX;

	t61 = (x285<(x286==(x287*x288)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = 5839;
	uint64_t x291 = 41778821730397466LLU;
	int16_t x292 = -1;
	static volatile int32_t t62 = 269046057;

	t62 = (x289<(x290==(x291*x292)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	static uint32_t x296 = UINT32_MAX;

	t63 = (x293<(x294==(x295*x296)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x305 = INT16_MIN;
	volatile uint64_t x306 = 1034879059752560LLU;
	uint32_t x307 = 2116U;
	int32_t x308 = INT32_MIN;
	int32_t t64 = -1;

	t64 = (x305<(x306==(x307*x308)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x309 = 2208789091266439037LLU;
	uint64_t x310 = 51LLU;
	int8_t x311 = 1;
	static uint8_t x312 = 40U;
	static int32_t t65 = 17;

	t65 = (x309<(x310==(x311*x312)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = -1LL;
	uint8_t x315 = 2U;
	uint32_t x316 = 937925U;
	volatile int32_t t66 = 2;

	t66 = (x313<(x314==(x315*x316)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x317 = 8U;
	int16_t x318 = -1;
	int16_t x320 = -505;
	volatile int32_t t67 = -32104054;

	t67 = (x317<(x318==(x319*x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = 0;
	int32_t x322 = 39170798;
	volatile int8_t x324 = -2;
	int32_t t68 = -100275;

	t68 = (x321<(x322==(x323*x324)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	static uint16_t x328 = 29952U;
	static int32_t t69 = -78;

	t69 = (x325<(x326==(x327*x328)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = 0U;
	uint8_t x330 = 21U;

	t70 = (x329<(x330==(x331*x332)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = 52;
	volatile int64_t x338 = -210877446340LL;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 125919999173LLU;
	static int32_t t71 = -103298499;

	t71 = (x337<(x338==(x339*x340)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x341 = 0U;
	volatile int8_t x342 = INT8_MAX;
	uint16_t x343 = 775U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t72 = -16586559;

	t72 = (x341<(x342==(x343*x344)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x353 = INT8_MIN;
	static int32_t x354 = INT32_MIN;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t73 = 1;

	t73 = (x353<(x354==(x355*x356)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x357 = INT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	uint8_t x360 = 55U;

	t74 = (x357<(x358==(x359*x360)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x361 = UINT64_MAX;
	uint8_t x362 = 1U;
	uint16_t x363 = 1U;
	uint32_t x364 = 1569129132U;
	int32_t t75 = -1050826380;

	t75 = (x361<(x362==(x363*x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MIN;
	static volatile int32_t x366 = -3;
	int32_t x367 = -1;
	uint32_t x368 = 364698979U;
	volatile int32_t t76 = -18222608;

	t76 = (x365<(x366==(x367*x368)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = -22;
	int32_t x370 = 55;
	int32_t x371 = -1061;
	static int64_t x372 = 1LL;
	int32_t t77 = -9357430;

	t77 = (x369<(x370==(x371*x372)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x378 = -64463;
	int32_t x379 = -1142;
	int16_t x380 = 10373;
	volatile int32_t t78 = -9603935;

	t78 = (x377<(x378==(x379*x380)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -1;
	int32_t x382 = -1;
	volatile uint32_t x383 = UINT32_MAX;
	volatile int32_t t79 = -698323334;

	t79 = (x381<(x382==(x383*x384)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MAX;
	static volatile int8_t x387 = 2;
	int32_t x388 = -1;
	int32_t t80 = -31854246;

	t80 = (x385<(x386==(x387*x388)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x393 = 98;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	static uint32_t x396 = UINT32_MAX;
	volatile int32_t t81 = -19;

	t81 = (x393<(x394==(x395*x396)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x397 = 12U;
	int8_t x398 = -1;
	uint32_t x399 = 22U;
	int32_t x400 = -1;
	volatile int32_t t82 = -57;

	t82 = (x397<(x398==(x399*x400)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x401 = -1;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;
	static int32_t t83 = -2879663;

	t83 = (x401<(x402==(x403*x404)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = INT32_MAX;
	int16_t x410 = INT16_MAX;
	int8_t x412 = 10;
	volatile int32_t t84 = 2339;

	t84 = (x409<(x410==(x411*x412)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = INT64_MIN;
	static int64_t x414 = 52169496LL;
	static int32_t x415 = INT32_MIN;
	uint64_t x416 = 27061930002594350LLU;
	static volatile int32_t t85 = -31;

	t85 = (x413<(x414==(x415*x416)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x417 = -33271702063LL;
	int8_t x420 = -1;
	volatile int32_t t86 = -8;

	t86 = (x417<(x418==(x419*x420)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x422 = UINT8_MAX;
	int32_t t87 = 8832713;

	t87 = (x421<(x422==(x423*x424)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MAX;
	uint64_t x427 = 1084LLU;
	uint16_t x428 = 3U;
	static volatile int32_t t88 = 220019498;

	t88 = (x425<(x426==(x427*x428)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x436 = 123U;
	int32_t t89 = 7359533;

	t89 = (x433<(x434==(x435*x436)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x445 = 112672U;
	volatile uint16_t x446 = UINT16_MAX;
	uint16_t x448 = 1187U;

	t90 = (x445<(x446==(x447*x448)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x453 = -1LL;
	volatile uint64_t x454 = UINT64_MAX;
	int16_t x456 = INT16_MIN;
	volatile int32_t t91 = -98;

	t91 = (x453<(x454==(x455*x456)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = -1;
	uint64_t x463 = 127601634940LLU;
	volatile int32_t x464 = INT32_MIN;
	static int32_t t92 = 12358;

	t92 = (x461<(x462==(x463*x464)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x465 = UINT16_MAX;
	int8_t x466 = -30;
	static uint64_t x467 = 939800077454245164LLU;
	int64_t x468 = INT64_MIN;
	volatile int32_t t93 = 68805;

	t93 = (x465<(x466==(x467*x468)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MAX;
	int16_t x471 = INT16_MIN;
	static int64_t x472 = -31127308LL;
	volatile int32_t t94 = -28983622;

	t94 = (x469<(x470==(x471*x472)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x481 = -445;
	volatile uint64_t x482 = UINT64_MAX;
	static int8_t x483 = INT8_MIN;
	uint64_t x484 = 3LLU;

	t95 = (x481<(x482==(x483*x484)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x485 = INT16_MIN;
	static uint8_t x486 = 0U;
	volatile int8_t x487 = INT8_MIN;
	int64_t x488 = 9157920LL;
	volatile int32_t t96 = -5064387;

	t96 = (x485<(x486==(x487*x488)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x493 = INT8_MIN;
	uint16_t x494 = UINT16_MAX;
	volatile int8_t x495 = 1;
	static volatile int16_t x496 = 1;
	int32_t t97 = -33;

	t97 = (x493<(x494==(x495*x496)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x497 = UINT32_MAX;
	int16_t x498 = -16;
	uint32_t x499 = 3U;
	uint16_t x500 = UINT16_MAX;
	static int32_t t98 = 121840342;

	t98 = (x497<(x498==(x499*x500)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x501 = INT8_MAX;
	volatile int8_t x502 = 1;
	static int8_t x503 = INT8_MIN;
	uint64_t x504 = 240LLU;
	int32_t t99 = -1;

	t99 = (x501<(x502==(x503*x504)));

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


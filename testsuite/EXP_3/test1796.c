#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = INT32_MIN;
int32_t t3 = 115;
static volatile int16_t x22 = INT16_MIN;
volatile uint8_t x23 = 28U;
static int8_t x28 = INT8_MIN;
static uint32_t t8 = 13318U;
static int8_t x38 = INT8_MIN;
int16_t x39 = INT16_MIN;
int16_t x40 = -474;
int32_t x45 = 11;
uint32_t x48 = 60U;
uint32_t t11 = 31201467U;
volatile int32_t x49 = INT32_MIN;
int8_t x53 = -2;
int64_t x55 = INT64_MAX;
int32_t x66 = 1410888;
uint32_t t15 = 13287U;
int16_t x69 = -1;
static int64_t x79 = 262488336911LL;
int8_t x90 = -1;
int64_t x95 = INT64_MIN;
volatile int64_t t22 = 561003742408999895LL;
static volatile int16_t x97 = 272;
int64_t x100 = INT64_MAX;
uint32_t x104 = UINT32_MAX;
volatile uint64_t x107 = 45042968325715541LLU;
static int32_t x116 = 104073737;
volatile uint32_t t27 = 83599314U;
static int16_t x123 = -1;
int32_t x129 = INT32_MIN;
static volatile uint16_t x130 = 7334U;
int8_t x137 = -1;
volatile uint8_t x138 = 11U;
uint16_t x144 = 430U;
static int64_t x149 = -1925338215908LL;
volatile uint32_t x151 = 24U;
static volatile uint64_t x154 = UINT64_MAX;
int64_t t34 = 140185488LL;
uint64_t x164 = 12LLU;
uint64_t t36 = 71231326604164509LLU;
uint16_t x165 = 29U;
int16_t x166 = -375;
volatile int32_t t37 = -168036;
volatile int16_t x172 = INT16_MIN;
static uint8_t x176 = 3U;
static uint32_t t40 = 8124395U;
volatile int32_t t42 = -6016;
static uint16_t x192 = UINT16_MAX;
int32_t t43 = 4651;
uint8_t x195 = 61U;
int32_t x196 = INT32_MIN;
uint32_t x201 = 2928227U;
int16_t x223 = 1;
volatile int16_t x224 = INT16_MAX;
volatile uint32_t x226 = 517362663U;
int32_t t50 = -8013;
static int64_t x232 = INT64_MAX;
int8_t x233 = -1;
volatile int64_t x235 = 695112962259LL;
int64_t t53 = -1085224310008LL;
int16_t x244 = -1;
volatile int32_t t54 = -4536;
static uint64_t t55 = 3036691LLU;
uint16_t x252 = 135U;
int64_t x255 = INT64_MAX;
static uint16_t x256 = UINT16_MAX;
volatile int16_t x260 = 332;
int8_t x271 = INT8_MIN;
static uint32_t x276 = 45593U;
static uint64_t x277 = 9220400698720LLU;
static int16_t x278 = 1;
int64_t x282 = -1LL;
static uint64_t x283 = 797468646720622137LLU;
uint16_t x285 = 25U;
volatile int8_t x288 = -1;
volatile int64_t x291 = INT64_MAX;
int8_t x298 = INT8_MIN;
static uint16_t x299 = UINT16_MAX;
int64_t x300 = 358626355940069LL;
int32_t x314 = -1;
uint8_t x318 = 1U;
int16_t x324 = INT16_MIN;
int64_t t72 = -11345630350166LL;
volatile int32_t t73 = -3091;
int64_t x329 = INT64_MAX;
int32_t x336 = INT32_MAX;
uint64_t x338 = UINT64_MAX;
uint8_t x343 = UINT8_MAX;
volatile uint8_t x350 = 3U;
uint64_t x353 = 332902LLU;
static volatile uint32_t x354 = 180U;
int8_t x356 = INT8_MIN;
volatile int64_t x366 = INT64_MIN;
static volatile int8_t x375 = 26;
volatile uint8_t x377 = 21U;
volatile int16_t x379 = INT16_MIN;
static int32_t x380 = INT32_MAX;
int32_t t85 = 278070;
static int64_t x386 = INT64_MIN;
int16_t x388 = INT16_MIN;
volatile int32_t t87 = -389460;
uint16_t x393 = 1U;
volatile int32_t t88 = 5889250;
volatile int8_t x398 = INT8_MAX;
volatile int32_t x399 = -1;
int32_t t89 = 55519416;
uint64_t t90 = 3901658334613698099LLU;
static int16_t x408 = INT16_MAX;
int32_t t91 = 15177;
static int16_t x415 = INT16_MIN;
volatile uint64_t t93 = 1801LLU;
static int64_t x428 = INT64_MIN;
int64_t t96 = 6225513987902945LL;
static int16_t x434 = INT16_MIN;


void f0(void) {
	uint8_t x1 = 16U;
	int64_t x2 = -1LL;
	static int16_t x3 = 43;
	static volatile int16_t x4 = -6393;
	int32_t t0 = -246;

	t0 = ((x1<x2)-(x3&x4));

	if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint32_t x6 = 279U;
	static int32_t x7 = -2313;
	volatile int16_t x8 = -1;
	volatile int32_t t1 = 3723;

	t1 = ((x5<x6)-(x7&x8));

	if (t1 != 2314) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 1U;
	uint32_t x10 = 722328437U;
	static uint16_t x12 = 0U;
	int32_t t2 = 286;

	t2 = ((x9<x10)-(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	static int32_t x14 = INT32_MAX;
	volatile int32_t x15 = INT32_MAX;
	static int8_t x16 = INT8_MAX;

	t3 = ((x13<x14)-(x15&x16));

	if (t3 != -126) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	uint64_t x18 = 114364LLU;
	int32_t x19 = -1;
	static uint32_t x20 = 3385U;
	volatile uint32_t t4 = 2781745U;

	t4 = ((x17<x18)-(x19&x20));

	if (t4 != 4294963912U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int32_t x24 = 492;
	static int32_t t5 = 439036;

	t5 = ((x21<x22)-(x23&x24));

	if (t5 != -12) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 3U;
	int32_t t6 = -26961;

	t6 = ((x25<x26)-(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	uint8_t x30 = 10U;
	int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MAX;
	volatile int64_t t7 = 2639758840289005029LL;

	t7 = ((x29<x30)-(x31&x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = 0U;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = -1;

	t8 = ((x33<x34)-(x35&x36));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 21U;
	volatile int32_t t9 = -7948488;

	t9 = ((x37<x38)-(x39&x40));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 350U;
	int64_t x42 = 247465080LL;
	int16_t x43 = 4656;
	volatile int8_t x44 = -3;
	volatile int32_t t10 = -188;

	t10 = ((x41<x42)-(x43&x44));

	if (t10 != -4655) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	uint32_t x47 = 0U;

	t11 = ((x45<x46)-(x47&x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 63U;
	int16_t x51 = -1;
	static int16_t x52 = -1;
	volatile int32_t t12 = 507;

	t12 = ((x49<x50)-(x51&x52));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	int64_t x56 = 2161083512566978084LL;
	volatile int64_t t13 = -257806407372275421LL;

	t13 = ((x53<x54)-(x55&x56));

	if (t13 != -2161083512566978083LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = 7;
	static int64_t x62 = 229681LL;
	static uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = -1;
	volatile uint64_t t14 = 172342880LLU;

	t14 = ((x61<x62)-(x63&x64));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 411U;
	static uint32_t x67 = UINT32_MAX;
	volatile uint16_t x68 = 4019U;

	t15 = ((x65<x66)-(x67&x68));

	if (t15 != 4294963278U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x70 = INT16_MAX;
	int64_t x71 = 2093563315489468744LL;
	int8_t x72 = INT8_MIN;
	int64_t t16 = -260313986485296106LL;

	t16 = ((x69<x70)-(x71&x72));

	if (t16 != -2093563315489468671LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = -1072549400;
	uint32_t x75 = UINT32_MAX;
	static volatile uint8_t x76 = UINT8_MAX;
	uint32_t t17 = 104U;

	t17 = ((x73<x74)-(x75&x76));

	if (t17 != 4294967041U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 3;
	static uint64_t x78 = 161220016184LLU;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -101447LL;

	t18 = ((x77<x78)-(x79&x80));

	if (t18 != -262488336895LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	static volatile int64_t x82 = INT64_MAX;
	uint8_t x83 = 18U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t19 = -16284803;

	t19 = ((x81<x82)-(x83&x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 887579737414654LLU;
	static uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t20 = -7;

	t20 = ((x85<x86)-(x87&x88));

	if (t20 != -65407) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 491U;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	static uint32_t t21 = 2576U;

	t21 = ((x89<x90)-(x91&x92));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = 25313U;
	int8_t x94 = 0;
	static uint32_t x96 = UINT32_MAX;

	t22 = ((x93<x94)-(x95&x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = 64982294675LLU;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t t23 = 228763342185909238LL;

	t23 = ((x97<x98)-(x99&x100));

	if (t23 != -4294967294LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x101 = 79585U;
	int16_t x102 = INT16_MAX;
	volatile uint64_t x103 = 8585315941LLU;
	volatile uint64_t t24 = 6199405LLU;

	t24 = ((x101<x102)-(x103&x104));

	if (t24 != 18446744069419202971LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x105 = 1038U;
	static volatile int64_t x106 = -814761634LL;
	int16_t x108 = INT16_MIN;
	uint64_t t25 = 10154964995324599LLU;

	t25 = ((x105<x106)-(x107&x108));

	if (t25 != 18401701105383866368LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int32_t x110 = -1;
	int16_t x111 = -1;
	static int64_t x112 = INT64_MAX;
	volatile int64_t t26 = -2LL;

	t26 = ((x109<x110)-(x111&x112));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x113 = UINT16_MAX;
	static volatile uint16_t x114 = 8087U;
	uint32_t x115 = 107153U;

	t27 = ((x113<x114)-(x115&x116));

	if (t27 != 4294966783U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	int8_t x124 = -1;
	int32_t t28 = 14207;

	t28 = ((x121<x122)-(x123&x124));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -1;
	static volatile uint8_t x126 = UINT8_MAX;
	int64_t x127 = 28619788719LL;
	volatile uint64_t x128 = 110LLU;
	volatile uint64_t t29 = 317LLU;

	t29 = ((x125<x126)-(x127&x128));

	if (t29 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x131 = 14U;
	static volatile int64_t x132 = 467666750622957648LL;
	volatile int64_t t30 = 59LL;

	t30 = ((x129<x130)-(x131&x132));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x139 = -1LL;
	static uint32_t x140 = 4U;
	static volatile int64_t t31 = 76LL;

	t31 = ((x137<x138)-(x139&x140));

	if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	static uint32_t x142 = 469762U;
	uint64_t x143 = 244556871495LLU;
	uint64_t t32 = 109235015001LLU;

	t32 = ((x141<x142)-(x143&x144));

	if (t32 != 18446744073709551355LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t33 = 7U;

	t33 = ((x149<x150)-(x151&x152));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = UINT8_MAX;
	int16_t x155 = INT16_MAX;
	static volatile int64_t x156 = -1LL;

	t34 = ((x153<x154)-(x155&x156));

	if (t34 != -32766LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 2503U;
	int32_t x160 = 497;
	static volatile uint32_t t35 = 3U;

	t35 = ((x157<x158)-(x159&x160));

	if (t35 != 4294966847U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1;
	volatile int64_t x163 = INT64_MAX;

	t36 = ((x161<x162)-(x163&x164));

	if (t36 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x167 = INT8_MIN;
	uint16_t x168 = 681U;

	t37 = ((x165<x166)-(x167&x168));

	if (t37 != -640) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = INT8_MAX;
	int64_t x171 = 1611033LL;
	volatile int64_t t38 = -6LL;

	t38 = ((x169<x170)-(x171&x172));

	if (t38 != -1605631LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -1;
	int64_t x174 = -125382506289420LL;
	int32_t x175 = INT32_MIN;
	volatile int32_t t39 = -248;

	t39 = ((x173<x174)-(x175&x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 9141U;
	int16_t x180 = -1;

	t40 = ((x177<x178)-(x179&x180));

	if (t40 != 4294958155U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = -1;
	static volatile int64_t x183 = -1LL;
	static volatile int8_t x184 = INT8_MAX;
	volatile int64_t t41 = 1472LL;

	t41 = ((x181<x182)-(x183&x184));

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 24105613075528956LLU;
	int8_t x186 = INT8_MIN;
	int8_t x187 = 50;
	static volatile int32_t x188 = INT32_MAX;

	t42 = ((x185<x186)-(x187&x188));

	if (t42 != -49) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;

	t43 = ((x189<x190)-(x191&x192));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = -1041581265036128LL;
	int16_t x194 = 12;
	static int32_t t44 = -8;

	t44 = ((x193<x194)-(x195&x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x202 = 2873U;
	int16_t x203 = 190;
	int8_t x204 = INT8_MIN;
	int32_t t45 = 45286495;

	t45 = ((x201<x202)-(x203&x204));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = 49;
	int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	volatile int16_t x208 = INT16_MAX;
	static volatile int64_t t46 = -2047034931LL;

	t46 = ((x205<x206)-(x207&x208));

	if (t46 != -32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 1LLU;
	uint8_t x211 = UINT8_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t47 = -251;

	t47 = ((x209<x210)-(x211&x212));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = -150LL;
	int16_t x215 = INT16_MAX;
	static uint64_t x216 = UINT64_MAX;
	volatile uint64_t t48 = 2844675633667LLU;

	t48 = ((x213<x214)-(x215&x216));

	if (t48 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	volatile int32_t t49 = 1395389;

	t49 = ((x221<x222)-(x223&x224));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int8_t x227 = INT8_MIN;
	int32_t x228 = 384392;

	t50 = ((x225<x226)-(x227&x228));

	if (t50 != -384383) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 86017LLU;
	int32_t x231 = INT32_MAX;
	int64_t t51 = 9889771703819126LL;

	t51 = ((x229<x230)-(x231&x232));

	if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x234 = -2157068;
	uint64_t x236 = 6118755964391981657LLU;
	uint64_t t52 = 249244LLU;

	t52 = ((x233<x234)-(x235&x236));

	if (t52 != 18446743929746227119LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = INT16_MAX;
	static int64_t x238 = INT64_MIN;
	static int64_t x239 = 62361282949851032LL;
	static int16_t x240 = INT16_MAX;

	t53 = ((x237<x238)-(x239&x240));

	if (t53 != -10136LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x241 = -1;
	uint64_t x242 = 37065880510971924LLU;
	uint8_t x243 = UINT8_MAX;

	t54 = ((x241<x242)-(x243&x244));

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 109485U;
	int8_t x246 = -1;
	uint64_t x247 = 183062875060LLU;
	int64_t x248 = 171728498LL;

	t55 = ((x245<x246)-(x247&x248));

	if (t55 != 18446744073539401169LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static volatile uint16_t x250 = 15U;
	volatile int32_t x251 = INT32_MIN;
	static volatile int32_t t56 = -1023299984;

	t56 = ((x249<x250)-(x251&x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x253 = UINT8_MAX;
	uint64_t x254 = UINT64_MAX;
	static int64_t t57 = -1555426846801LL;

	t57 = ((x253<x254)-(x255&x256));

	if (t57 != -65534LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x257 = INT8_MIN;
	int32_t x258 = 38941518;
	int16_t x259 = INT16_MIN;
	volatile int32_t t58 = 215;

	t58 = ((x257<x258)-(x259&x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x265 = 4104688185808518424LLU;
	volatile int64_t x266 = 894253LL;
	uint64_t x267 = 5LLU;
	int64_t x268 = -1LL;
	volatile uint64_t t59 = 43991447758001LLU;

	t59 = ((x265<x266)-(x267&x268));

	if (t59 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	int16_t x272 = INT16_MAX;
	static int32_t t60 = -3164;

	t60 = ((x269<x270)-(x271&x272));

	if (t60 != -32639) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MIN;
	uint16_t x274 = 22U;
	volatile uint32_t x275 = UINT32_MAX;
	static volatile uint32_t t61 = 987U;

	t61 = ((x273<x274)-(x275&x276));

	if (t61 != 4294921704U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x279 = 180;
	uint8_t x280 = 5U;
	volatile int32_t t62 = -7161;

	t62 = ((x277<x278)-(x279&x280));

	if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MAX;
	volatile int64_t x284 = INT64_MIN;
	volatile uint64_t t63 = 114889009429761LLU;

	t63 = ((x281<x282)-(x283&x284));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x286 = INT8_MIN;
	int8_t x287 = 7;
	volatile int32_t t64 = -3;

	t64 = ((x285<x286)-(x287&x288));

	if (t64 != -7) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	uint8_t x292 = 60U;
	int64_t t65 = 1071962222360956LL;

	t65 = ((x289<x290)-(x291&x292));

	if (t65 != -60LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 1422;
	int64_t t66 = 5809915359994727LL;

	t66 = ((x297<x298)-(x299&x300));

	if (t66 != -35557LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = 125293264;
	static int64_t x302 = INT64_MIN;
	volatile int64_t x303 = -4LL;
	uint16_t x304 = 13U;
	int64_t t67 = 283231333771485912LL;

	t67 = ((x301<x302)-(x303&x304));

	if (t67 != -12LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	static volatile int64_t x307 = INT64_MIN;
	uint64_t x308 = 6494311812661LLU;
	static uint64_t t68 = 21365675001892LLU;

	t68 = ((x305<x306)-(x307&x308));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MAX;
	int64_t x311 = 3009877658763695116LL;
	volatile uint32_t x312 = 42787U;
	volatile int64_t t69 = -179689343832452284LL;

	t69 = ((x309<x310)-(x311&x312));

	if (t69 != -33791LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x313 = INT32_MIN;
	static uint16_t x315 = 13U;
	int8_t x316 = INT8_MAX;
	int32_t t70 = -10;

	t70 = ((x313<x314)-(x315&x316));

	if (t70 != -12) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = -1LL;
	int16_t x319 = INT16_MIN;
	volatile int8_t x320 = -24;
	volatile int32_t t71 = -1;

	t71 = ((x317<x318)-(x319&x320));

	if (t71 != 32769) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	int64_t x323 = INT64_MAX;

	t72 = ((x321<x322)-(x323&x324));

	if (t72 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x325 = UINT32_MAX;
	int8_t x326 = -44;
	static int32_t x327 = 58640;
	int8_t x328 = INT8_MAX;

	t73 = ((x325<x326)-(x327&x328));

	if (t73 != -16) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x330 = 7;
	int64_t x331 = INT64_MAX;
	static uint16_t x332 = 2U;
	volatile int64_t t74 = -987209426LL;

	t74 = ((x329<x330)-(x331&x332));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = 1376486U;
	int64_t x334 = -1LL;
	int16_t x335 = -1;
	int32_t t75 = 146670020;

	t75 = ((x333<x334)-(x335&x336));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = UINT64_MAX;
	static volatile uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;
	volatile int64_t t76 = -24473755LL;

	t76 = ((x337<x338)-(x339&x340));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x341 = 1;
	int16_t x342 = INT16_MIN;
	int32_t x344 = 163;
	volatile int32_t t77 = 705;

	t77 = ((x341<x342)-(x343&x344));

	if (t77 != -163) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x349 = -1;
	uint64_t x351 = UINT64_MAX;
	volatile uint32_t x352 = 14489U;
	volatile uint64_t t78 = 12241077LLU;

	t78 = ((x349<x350)-(x351&x352));

	if (t78 != 18446744073709537128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x355 = 0;
	volatile int32_t t79 = -20385051;

	t79 = ((x353<x354)-(x355&x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = -1;
	int64_t x358 = INT64_MAX;
	static int16_t x359 = -11598;
	volatile int8_t x360 = 12;
	int32_t t80 = 43;

	t80 = ((x357<x358)-(x359&x360));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MAX;
	int64_t x362 = -1LL;
	volatile int64_t x363 = 205797236970080178LL;
	uint16_t x364 = UINT16_MAX;
	volatile int64_t t81 = -16402962LL;

	t81 = ((x361<x362)-(x363&x364));

	if (t81 != -51122LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x365 = 24U;
	static volatile int32_t x367 = -1;
	static int32_t x368 = -80467;
	volatile int32_t t82 = 839064652;

	t82 = ((x365<x366)-(x367&x368));

	if (t82 != 80467) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x369 = -839;
	int8_t x370 = INT8_MAX;
	int8_t x371 = 0;
	static int32_t x372 = -1;
	int32_t t83 = 0;

	t83 = ((x369<x370)-(x371&x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x373 = INT32_MIN;
	int16_t x374 = -1;
	int64_t x376 = 503LL;
	volatile int64_t t84 = -2455236849928917LL;

	t84 = ((x373<x374)-(x375&x376));

	if (t84 != -17LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x378 = -1;

	t85 = ((x377<x378)-(x379&x380));

	if (t85 != -2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = 36074460U;
	static uint64_t x384 = UINT64_MAX;
	volatile uint64_t t86 = 1202252099529368881LLU;

	t86 = ((x381<x382)-(x383&x384));

	if (t86 != 18446744073673477156LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = UINT16_MAX;
	static uint16_t x387 = 88U;

	t87 = ((x385<x386)-(x387&x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = 3467;
	volatile uint16_t x396 = 4U;

	t88 = ((x393<x394)-(x395&x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x397 = -5;
	volatile int8_t x400 = -1;

	t89 = ((x397<x398)-(x399&x400));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x401 = INT64_MIN;
	int64_t x402 = -34LL;
	static int32_t x403 = 145275888;
	static volatile uint64_t x404 = 3141651222LLU;

	t90 = ((x401<x402)-(x403&x404));

	if (t90 != 18446744073575298289LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x405 = INT8_MIN;
	static uint32_t x406 = 53U;
	int32_t x407 = INT32_MAX;

	t91 = ((x405<x406)-(x407&x408));

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x409 = -12160;
	uint64_t x410 = 6LLU;
	static volatile int8_t x411 = INT8_MIN;
	volatile int32_t x412 = -1;
	volatile int32_t t92 = 74513;

	t92 = ((x409<x410)-(x411&x412));

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 7U;
	int32_t x414 = INT32_MIN;
	uint64_t x416 = 415666LLU;

	t93 = ((x413<x414)-(x415&x416));

	if (t93 != 18446744073709158400LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = 0;
	volatile int32_t x419 = 1;
	volatile int16_t x420 = 890;
	volatile int32_t t94 = -212114;

	t94 = ((x417<x418)-(x419&x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x421 = -26;
	int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	static uint8_t x424 = 90U;
	int32_t t95 = 12599;

	t95 = ((x421<x422)-(x423&x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -40491LL;
	static int32_t x426 = -29453908;
	uint32_t x427 = 1731U;

	t96 = ((x425<x426)-(x427&x428));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = -159749859LL;
	volatile uint8_t x430 = 6U;
	volatile int16_t x431 = 26;
	int16_t x432 = INT16_MAX;
	volatile int32_t t97 = -1134807;

	t97 = ((x429<x430)-(x431&x432));

	if (t97 != -25) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x433 = 12;
	static int16_t x435 = -1;
	static uint32_t x436 = UINT32_MAX;
	uint32_t t98 = 208U;

	t98 = ((x433<x434)-(x435&x436));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x437 = 132501149401690375LL;
	volatile int32_t x438 = -1;
	uint32_t x439 = 22U;
	static volatile int16_t x440 = INT16_MIN;
	uint32_t t99 = 1U;

	t99 = ((x437<x438)-(x439&x440));

	if (t99 != 0U) { NG(); } else { ; }
	
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


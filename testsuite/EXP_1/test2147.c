#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
static int8_t x13 = INT8_MAX;
static int16_t x23 = INT16_MIN;
int8_t x27 = 1;
int8_t x29 = INT8_MIN;
uint64_t x37 = 21LLU;
volatile uint32_t t8 = 31574789U;
static volatile int16_t x57 = -1;
uint8_t x58 = UINT8_MAX;
int32_t x59 = INT32_MAX;
static int32_t t13 = -21;
volatile int32_t t15 = 2915;
volatile uint64_t t17 = 372647449338882LLU;
volatile uint64_t x98 = UINT64_MAX;
int32_t t19 = 348;
volatile int64_t x106 = INT64_MIN;
volatile int16_t x107 = -1;
volatile int16_t x119 = -1;
int32_t t22 = 27047561;
static int32_t x122 = INT32_MIN;
static volatile uint64_t x124 = 6158312782LLU;
int8_t x127 = -1;
int8_t x131 = -1;
int32_t x145 = INT32_MAX;
int32_t x148 = -1;
uint64_t x150 = 222741519LLU;
volatile int64_t t31 = 31612699521LL;
int8_t x171 = -62;
int64_t t35 = -243248607799953815LL;
int64_t x180 = 60671715LL;
int64_t x187 = INT64_MIN;
int8_t x188 = -1;
uint64_t x189 = 30636173323637797LLU;
volatile uint32_t x191 = 5U;
static int8_t x193 = -1;
int64_t x194 = INT64_MAX;
volatile int8_t x199 = INT8_MAX;
volatile int32_t x202 = INT32_MAX;
static volatile int8_t x203 = 0;
int8_t x206 = 1;
uint32_t x209 = 801U;
int64_t t44 = 100164226LL;
uint16_t x217 = 32575U;
uint64_t x219 = UINT64_MAX;
int8_t x227 = -1;
int32_t t46 = -1118;
int64_t x253 = 4515643607745692944LL;
static uint16_t x254 = UINT16_MAX;
static int32_t t51 = 254073086;
uint16_t x262 = UINT16_MAX;
static uint8_t x267 = 25U;
volatile int32_t t53 = -313835553;
uint8_t x269 = 1U;
int8_t x270 = INT8_MAX;
int8_t x271 = INT8_MAX;
int32_t x273 = INT32_MAX;
int8_t x274 = -1;
int32_t x278 = INT32_MAX;
volatile int16_t x280 = 19;
int32_t x284 = -5720614;
int64_t x288 = 5546920990LL;
volatile int64_t t58 = 426139194628396LL;
int16_t x292 = 0;
volatile uint64_t x301 = 266364804564287LLU;
volatile uint64_t t62 = 14112LLU;
uint64_t x306 = UINT64_MAX;
volatile uint16_t x309 = 102U;
int32_t x313 = -1;
int16_t x314 = -361;
int16_t x337 = -1;
volatile int16_t x342 = 75;
volatile int32_t x346 = 110407323;
static int64_t x347 = INT64_MIN;
static uint64_t x350 = 68393350LLU;
uint64_t t72 = 2649LLU;
int32_t t73 = -63;
int32_t t74 = -18011;
uint8_t x364 = 112U;
uint8_t x365 = UINT8_MAX;
uint16_t x366 = 0U;
int8_t x376 = -11;
uint64_t x380 = UINT64_MAX;
static volatile uint64_t t79 = 6068735013911LLU;
volatile int32_t t80 = 152259765;
uint32_t x391 = 339903U;
volatile int64_t x394 = INT64_MAX;
volatile uint16_t x395 = 7395U;
volatile int16_t x400 = 5;
int64_t x402 = -1LL;
volatile uint64_t t84 = 515894168401LLU;
uint32_t x406 = 1U;
int64_t x411 = 35255561159179741LL;
int16_t x418 = -2082;
int32_t t90 = 606554802;
uint8_t x431 = 0U;
uint16_t x433 = 40U;
uint64_t x437 = 524571067191820948LLU;
int64_t x438 = INT64_MIN;
uint16_t x442 = UINT16_MAX;
uint8_t x447 = UINT8_MAX;
int16_t x448 = INT16_MAX;
uint64_t t96 = 1930641116680075LLU;
int16_t x455 = INT16_MIN;
static int8_t x456 = -2;
int16_t x463 = 592;
volatile uint64_t t99 = 464308782068305778LLU;


void f0(void) {
	int16_t x6 = -1;
	int32_t x7 = INT32_MAX;
	volatile int8_t x8 = INT8_MIN;
	int32_t t0 = -67795398;

	t0 = (((x5^x6)<=x7)-x8);

	if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	static int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -1;
	volatile int32_t t1 = -199697;

	t1 = (((x9^x10)<=x11)-x12);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = 0U;
	uint32_t x15 = 4615U;
	uint8_t x16 = 20U;
	volatile int32_t t2 = -10579941;

	t2 = (((x13^x14)<=x15)-x16);

	if (t2 != -19) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static int32_t x18 = INT32_MAX;
	int8_t x19 = 0;
	int32_t x20 = -1;
	volatile int32_t t3 = -621512948;

	t3 = (((x17^x18)<=x19)-x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x21 = INT16_MIN;
	uint32_t x22 = UINT32_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -76235600;

	t4 = (((x21^x22)<=x23)-x24);

	if (t4 != -126) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 44U;
	static int64_t x26 = -1LL;
	uint16_t x28 = 2262U;
	int32_t t5 = -3484408;

	t5 = (((x25^x26)<=x27)-x28);

	if (t5 != -2261) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -1;
	static uint16_t x31 = 1175U;
	uint64_t x32 = 524399284123217LLU;
	uint64_t t6 = 603994239297567LLU;

	t6 = (((x29^x30)<=x31)-x32);

	if (t6 != 18446219674425428400LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 3795U;
	static uint64_t x36 = 34468242090386664LLU;
	volatile uint64_t t7 = 9089971LLU;

	t7 = (((x33^x34)<=x35)-x36);

	if (t7 != 18412275831619164953LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 2369335054LL;
	uint64_t x39 = UINT64_MAX;
	volatile uint32_t x40 = UINT32_MAX;

	t8 = (((x37^x38)<=x39)-x40);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x42 = -4773829341LL;
	int8_t x43 = 0;
	int64_t x44 = -1LL;
	int64_t t9 = -3613LL;

	t9 = (((x41^x42)<=x43)-x44);

	if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 22U;
	int8_t x46 = 0;
	int16_t x47 = INT16_MIN;
	int16_t x48 = -1;
	static int32_t t10 = 0;

	t10 = (((x45^x46)<=x47)-x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = -1LL;
	uint16_t x54 = UINT16_MAX;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = 157796LL;
	volatile int64_t t11 = -73330668416562LL;

	t11 = (((x53^x54)<=x55)-x56);

	if (t11 != -157795LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x60 = 5690141;
	volatile int32_t t12 = 7;

	t12 = (((x57^x58)<=x59)-x60);

	if (t12 != -5690140) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x62 = -549836LL;
	static int16_t x63 = INT16_MIN;
	int32_t x64 = -1;

	t13 = (((x61^x62)<=x63)-x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 30U;
	uint16_t x70 = 4U;
	int8_t x71 = 0;
	static int16_t x72 = -7;
	int32_t t14 = 1272970;

	t14 = (((x69^x70)<=x71)-x72);

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = -2172;
	static uint8_t x74 = 2U;
	int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MIN;

	t15 = (((x73^x74)<=x75)-x76);

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = 1;
	static int32_t x82 = 15023;
	uint32_t x83 = 1203U;
	uint16_t x84 = 61U;
	static int32_t t16 = 23695927;

	t16 = (((x81^x82)<=x83)-x84);

	if (t16 != -61) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = 107369;
	volatile int32_t x86 = INT32_MIN;
	volatile int32_t x87 = -1;
	static uint64_t x88 = 495675723657LLU;

	t17 = (((x85^x86)<=x87)-x88);

	if (t17 != 18446743578033827960LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x97 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = -1;
	volatile int32_t t18 = -724;

	t18 = (((x97^x98)<=x99)-x100);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = 0;
	uint64_t x102 = 4333LLU;
	int64_t x103 = INT64_MIN;
	volatile uint8_t x104 = UINT8_MAX;

	t19 = (((x101^x102)<=x103)-x104);

	if (t19 != -254) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = 13U;
	int16_t x108 = 1;
	int32_t t20 = 6934725;

	t20 = (((x105^x106)<=x107)-x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = 58;
	volatile int64_t x110 = INT64_MIN;
	volatile int16_t x111 = INT16_MIN;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t21 = -698773;

	t21 = (((x109^x110)<=x111)-x112);

	if (t21 != -65534) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MAX;
	uint16_t x118 = 4U;
	uint8_t x120 = 13U;

	t22 = (((x117^x118)<=x119)-x120);

	if (t22 != -13) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = 1442199301820172LL;
	uint32_t x123 = 147525392U;
	volatile uint64_t t23 = 8868174592797LLU;

	t23 = (((x121^x122)<=x123)-x124);

	if (t23 != 18446744067551238835LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x125 = INT64_MIN;
	int8_t x126 = 22;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t24 = 0;

	t24 = (((x125^x126)<=x127)-x128);

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -4;
	int8_t x130 = INT8_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t25 = 133089762;

	t25 = (((x129^x130)<=x131)-x132);

	if (t25 != -65534) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x133 = 27U;
	uint8_t x134 = 24U;
	int16_t x135 = -1;
	volatile int32_t x136 = -1;
	static int32_t t26 = -28313229;

	t26 = (((x133^x134)<=x135)-x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x137 = INT64_MAX;
	uint8_t x138 = 1U;
	volatile int32_t x139 = -849808;
	int16_t x140 = INT16_MAX;
	volatile int32_t t27 = 77;

	t27 = (((x137^x138)<=x139)-x140);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MAX;
	static int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t28 = -1;

	t28 = (((x141^x142)<=x143)-x144);

	if (t28 != -126) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x146 = UINT16_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t t29 = -77627;

	t29 = (((x145^x146)<=x147)-x148);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x151 = 2621581970965LLU;
	int8_t x152 = -1;
	volatile int32_t t30 = -102;

	t30 = (((x149^x150)<=x151)-x152);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = UINT64_MAX;
	uint16_t x155 = UINT16_MAX;
	static int64_t x156 = -1LL;

	t31 = (((x153^x154)<=x155)-x156);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -1;
	int32_t x158 = 1;
	static int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t32 = 9845381;

	t32 = (((x157^x158)<=x159)-x160);

	if (t32 != 32769) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 17846845313301910LLU;
	int64_t x163 = -1LL;
	uint8_t x164 = 2U;
	volatile int32_t t33 = -939592;

	t33 = (((x161^x162)<=x163)-x164);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 17658U;
	uint8_t x166 = 29U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t34 = 7182;

	t34 = (((x165^x166)<=x167)-x168);

	if (t34 != 32769) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = -7;
	int32_t x170 = -1;
	static int64_t x172 = -28312158LL;

	t35 = (((x169^x170)<=x171)-x172);

	if (t35 != 28312158LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x177 = 66;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	volatile int64_t t36 = 1636763060649LL;

	t36 = (((x177^x178)<=x179)-x180);

	if (t36 != -60671715LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x185 = 45U;
	int16_t x186 = INT16_MIN;
	int32_t t37 = 497297;

	t37 = (((x185^x186)<=x187)-x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x190 = 40;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t38 = 7942;

	t38 = (((x189^x190)<=x191)-x192);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MAX;
	static volatile int32_t t39 = -3634;

	t39 = (((x193^x194)<=x195)-x196);

	if (t39 != -126) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = INT16_MAX;
	uint32_t x198 = UINT32_MAX;
	uint32_t x200 = 461U;
	uint32_t t40 = 14754U;

	t40 = (((x197^x198)<=x199)-x200);

	if (t40 != 4294966835U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x204 = 1181U;
	static int32_t t41 = -34353;

	t41 = (((x201^x202)<=x203)-x204);

	if (t41 != -1180) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = INT64_MAX;
	int64_t x207 = INT64_MAX;
	uint16_t x208 = 825U;
	static int32_t t42 = 964;

	t42 = (((x205^x206)<=x207)-x208);

	if (t42 != -824) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t43 = -462539955;

	t43 = (((x209^x210)<=x211)-x212);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -1;
	int32_t x214 = -1;
	static volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;

	t44 = (((x213^x214)<=x215)-x216);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x218 = INT64_MIN;
	uint64_t x220 = 64250009090LLU;
	volatile uint64_t t45 = 61665520491595409LLU;

	t45 = (((x217^x218)<=x219)-x220);

	if (t45 != 18446744009459542527LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = 1U;
	uint8_t x226 = 6U;
	volatile int16_t x228 = INT16_MIN;

	t46 = (((x225^x226)<=x227)-x228);

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = INT64_MIN;
	int8_t x230 = 0;
	static int16_t x231 = INT16_MIN;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t47 = 0;

	t47 = (((x229^x230)<=x231)-x232);

	if (t47 != 129) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x241 = 3062843LLU;
	int32_t x242 = 3;
	volatile uint16_t x243 = UINT16_MAX;
	static int16_t x244 = 4095;
	volatile int32_t t48 = -43;

	t48 = (((x241^x242)<=x243)-x244);

	if (t48 != -4095) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = 8261541U;
	uint64_t x246 = UINT64_MAX;
	static volatile int8_t x247 = INT8_MAX;
	static int32_t x248 = -1;
	int32_t t49 = 81032531;

	t49 = (((x245^x246)<=x247)-x248);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int32_t x251 = 413645;
	uint16_t x252 = 8974U;
	static volatile int32_t t50 = -6555647;

	t50 = (((x249^x250)<=x251)-x252);

	if (t50 != -8973) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MAX;

	t51 = (((x253^x254)<=x255)-x256);

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x263 = INT8_MIN;
	volatile uint16_t x264 = 245U;
	volatile int32_t t52 = -260645505;

	t52 = (((x261^x262)<=x263)-x264);

	if (t52 != -244) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x266 = 871413LLU;
	int16_t x268 = INT16_MIN;

	t53 = (((x265^x266)<=x267)-x268);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x272 = 7U;
	volatile int32_t t54 = -5;

	t54 = (((x269^x270)<=x271)-x272);

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x275 = 744U;
	static volatile uint8_t x276 = UINT8_MAX;
	int32_t t55 = 1816;

	t55 = (((x273^x274)<=x275)-x276);

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = 17295397001005LLU;
	int64_t x279 = INT64_MIN;
	volatile int32_t t56 = 156;

	t56 = (((x277^x278)<=x279)-x280);

	if (t56 != -18) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = INT16_MIN;
	int32_t t57 = 31499869;

	t57 = (((x281^x282)<=x283)-x284);

	if (t57 != 5720614) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x285 = -1;
	static volatile int64_t x286 = INT64_MAX;
	int8_t x287 = INT8_MIN;

	t58 = (((x285^x286)<=x287)-x288);

	if (t58 != -5546920989LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int32_t t59 = -5473;

	t59 = (((x289^x290)<=x291)-x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x293 = 48U;
	static int32_t x294 = INT32_MAX;
	static volatile uint64_t x295 = UINT64_MAX;
	volatile int64_t x296 = -1LL;
	volatile int64_t t60 = 1017060712LL;

	t60 = (((x293^x294)<=x295)-x296);

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 8230699U;
	int64_t x299 = INT64_MIN;
	static uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t61 = 39056481543LLU;

	t61 = (((x297^x298)<=x299)-x300);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x302 = 53676;
	int16_t x303 = INT16_MAX;
	static volatile uint64_t x304 = 3767951915438LLU;

	t62 = (((x301^x302)<=x303)-x304);

	if (t62 != 18446740305757636178LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = INT16_MIN;
	int32_t x307 = 2779489;
	uint16_t x308 = UINT16_MAX;
	int32_t t63 = 510587;

	t63 = (((x305^x306)<=x307)-x308);

	if (t63 != -65534) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x310 = -1;
	static uint16_t x311 = 1U;
	int64_t x312 = -1LL;
	volatile int64_t t64 = -3373523LL;

	t64 = (((x309^x310)<=x311)-x312);

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x315 = -29683206;
	uint16_t x316 = UINT16_MAX;
	int32_t t65 = -497588;

	t65 = (((x313^x314)<=x315)-x316);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = -1LL;
	int32_t x319 = 58491902;
	uint32_t x320 = UINT32_MAX;
	static volatile uint32_t t66 = 464U;

	t66 = (((x317^x318)<=x319)-x320);

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = INT16_MAX;
	uint16_t x326 = 2951U;
	uint8_t x327 = UINT8_MAX;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t67 = 3472;

	t67 = (((x325^x326)<=x327)-x328);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 2U;
	volatile int32_t x334 = 12899248;
	uint64_t x335 = 9974786LLU;
	static int16_t x336 = INT16_MIN;
	int32_t t68 = 1929382;

	t68 = (((x333^x334)<=x335)-x336);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x338 = -1;
	uint16_t x339 = 17326U;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t69 = -303701;

	t69 = (((x337^x338)<=x339)-x340);

	if (t69 != 32769) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = 604U;
	static int32_t x343 = 1;
	int64_t x344 = INT64_MAX;
	static int64_t t70 = -3365LL;

	t70 = (((x341^x342)<=x343)-x344);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x345 = -1;
	int16_t x348 = INT16_MIN;
	volatile int32_t t71 = -71;

	t71 = (((x345^x346)<=x347)-x348);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x349 = 443;
	volatile uint64_t x351 = UINT64_MAX;
	static uint64_t x352 = 124223741LLU;

	t72 = (((x349^x350)<=x351)-x352);

	if (t72 != 18446744073585327876LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x353 = INT64_MIN;
	int8_t x354 = 10;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 51U;

	t73 = (((x353^x354)<=x355)-x356);

	if (t73 != -50) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x357 = 9041527934561785782LLU;
	int64_t x358 = INT64_MIN;
	uint32_t x359 = 122U;
	uint16_t x360 = 48U;

	t74 = (((x357^x358)<=x359)-x360);

	if (t74 != -48) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = 85U;
	uint16_t x362 = 51U;
	uint16_t x363 = 0U;
	volatile int32_t t75 = 639;

	t75 = (((x361^x362)<=x363)-x364);

	if (t75 != -112) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x367 = 2362;
	uint8_t x368 = 0U;
	static int32_t t76 = 176558;

	t76 = (((x365^x366)<=x367)-x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MAX;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = -1;
	int8_t x372 = INT8_MAX;
	volatile int32_t t77 = 2;

	t77 = (((x369^x370)<=x371)-x372);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x373 = INT16_MIN;
	uint16_t x374 = 0U;
	int32_t x375 = 936745270;
	volatile int32_t t78 = -483957;

	t78 = (((x373^x374)<=x375)-x376);

	if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = 6267432373LLU;
	static uint32_t x378 = 867U;
	uint16_t x379 = 0U;

	t79 = (((x377^x378)<=x379)-x380);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x385 = -1;
	int16_t x386 = -112;
	int32_t x387 = 1414;
	int8_t x388 = -1;

	t80 = (((x385^x386)<=x387)-x388);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x389 = -1LL;
	int16_t x390 = -1;
	int8_t x392 = -31;
	static volatile int32_t t81 = 394981;

	t81 = (((x389^x390)<=x391)-x392);

	if (t81 != 32) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x393 = -1LL;
	volatile int32_t x396 = 340177;
	int32_t t82 = -1935225;

	t82 = (((x393^x394)<=x395)-x396);

	if (t82 != -340176) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x397 = 4U;
	volatile uint32_t x398 = 0U;
	int8_t x399 = INT8_MIN;
	int32_t t83 = -941;

	t83 = (((x397^x398)<=x399)-x400);

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x401 = 36U;
	uint32_t x403 = 18U;
	uint64_t x404 = UINT64_MAX;

	t84 = (((x401^x402)<=x403)-x404);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = INT16_MAX;
	int32_t x407 = INT32_MAX;
	int32_t x408 = 217893;
	volatile int32_t t85 = -100441;

	t85 = (((x405^x406)<=x407)-x408);

	if (t85 != -217892) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = 21;
	int32_t x412 = -21716409;
	static volatile int32_t t86 = 112;

	t86 = (((x409^x410)<=x411)-x412);

	if (t86 != 21716410) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = -1LL;
	volatile uint8_t x414 = 2U;
	static uint8_t x415 = UINT8_MAX;
	volatile int8_t x416 = 0;
	static volatile int32_t t87 = 0;

	t87 = (((x413^x414)<=x415)-x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x417 = INT32_MIN;
	int16_t x419 = -1564;
	volatile int32_t x420 = 50;
	int32_t t88 = 17020624;

	t88 = (((x417^x418)<=x419)-x420);

	if (t88 != -50) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = 1;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	static volatile int32_t x424 = -1;
	volatile int32_t t89 = 628840;

	t89 = (((x421^x422)<=x423)-x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x425 = 126U;
	int8_t x426 = INT8_MAX;
	int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MIN;

	t90 = (((x425^x426)<=x427)-x428);

	if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t91 = 722;

	t91 = (((x429^x430)<=x431)-x432);

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 17U;
	uint16_t x436 = 88U;
	int32_t t92 = 813;

	t92 = (((x433^x434)<=x435)-x436);

	if (t92 != -87) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x439 = INT32_MIN;
	int16_t x440 = 221;
	int32_t t93 = -34;

	t93 = (((x437^x438)<=x439)-x440);

	if (t93 != -220) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = INT16_MIN;
	volatile uint32_t x443 = UINT32_MAX;
	volatile int32_t x444 = 15860173;
	int32_t t94 = -34;

	t94 = (((x441^x442)<=x443)-x444);

	if (t94 != -15860172) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x445 = -57;
	static volatile int64_t x446 = INT64_MIN;
	static volatile int32_t t95 = 57;

	t95 = (((x445^x446)<=x447)-x448);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x449 = UINT8_MAX;
	int32_t x450 = INT32_MAX;
	volatile int16_t x451 = INT16_MIN;
	uint64_t x452 = 22945647762839597LLU;

	t96 = (((x449^x450)<=x451)-x452);

	if (t96 != 18423798425946712019LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x453 = 13U;
	uint32_t x454 = 3335U;
	static volatile int32_t t97 = -927152941;

	t97 = (((x453^x454)<=x455)-x456);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x457 = 1LL;
	int8_t x458 = -1;
	int16_t x459 = INT16_MAX;
	uint64_t x460 = UINT64_MAX;
	uint64_t t98 = 702444LLU;

	t98 = (((x457^x458)<=x459)-x460);

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MAX;
	static uint32_t x462 = 8549367U;
	volatile uint64_t x464 = UINT64_MAX;

	t99 = (((x461^x462)<=x463)-x464);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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


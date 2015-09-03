#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MIN;
static uint16_t x20 = 0U;
uint8_t x21 = 1U;
uint16_t x32 = 107U;
static volatile int8_t x38 = INT8_MAX;
int32_t x41 = 1740212;
uint16_t x43 = 58U;
static uint32_t x53 = UINT32_MAX;
volatile uint32_t x62 = UINT32_MAX;
int32_t x64 = 464;
static uint32_t x72 = 63029381U;
int64_t x73 = INT64_MAX;
static uint32_t x82 = 883U;
static volatile int16_t x88 = -1;
uint8_t x89 = 6U;
volatile uint8_t x90 = 1U;
volatile uint16_t x91 = 27821U;
int64_t x96 = -94431LL;
uint16_t x109 = 5350U;
int64_t x110 = INT64_MIN;
int32_t x115 = INT32_MIN;
int64_t x118 = 376381313931408309LL;
int64_t x120 = -29LL;
int64_t x130 = INT64_MIN;
uint32_t x134 = 959812105U;
int64_t x143 = INT64_MIN;
static int16_t x144 = -1;
int32_t t29 = 58204704;
volatile uint32_t t31 = 1727412U;
int32_t t32 = -453986;
static volatile uint64_t t33 = 1753783LLU;
uint8_t x163 = 2U;
int32_t x164 = -1;
uint32_t x173 = 13170716U;
int32_t x176 = INT32_MAX;
static int64_t t39 = 60LL;
uint64_t x185 = 557615547LLU;
int32_t x186 = INT32_MIN;
int64_t x191 = -1LL;
int8_t x198 = -2;
int16_t x202 = 0;
volatile int64_t t45 = -700489106LL;
volatile int16_t x216 = INT16_MAX;
uint64_t x217 = 273612328392645939LLU;
static int64_t x218 = -1LL;
int64_t x219 = INT64_MAX;
volatile uint16_t x228 = 63U;
static int16_t x234 = -1;
int32_t x237 = INT32_MAX;
static int16_t x242 = -1;
static int64_t x243 = 2747507527378445LL;
int8_t x245 = -1;
uint8_t x246 = 1U;
int32_t x257 = 30573;
int32_t t53 = -2137;
volatile uint16_t x266 = 5U;
int32_t x267 = 1933445;
uint64_t x270 = 205645LLU;
volatile uint16_t x274 = 179U;
static uint16_t x276 = 0U;
int32_t t58 = 35408;
int16_t x281 = INT16_MIN;
int8_t x294 = INT8_MIN;
uint64_t x303 = 7272175LLU;
uint16_t x304 = UINT16_MAX;
static volatile uint64_t x306 = 483886064824883362LLU;
static volatile uint64_t t65 = 10LLU;
int32_t t66 = 1;
int32_t x318 = 115887;
uint8_t x319 = 0U;
static volatile uint16_t x322 = 237U;
static int8_t x327 = 0;
int8_t x331 = INT8_MAX;
static int64_t x332 = -1LL;
int16_t x336 = INT16_MAX;
int16_t x349 = INT16_MAX;
uint16_t x360 = 10780U;
uint64_t x369 = 183609170971333359LLU;
int32_t x372 = -19;
static volatile uint64_t x381 = 162LLU;
static volatile uint64_t x390 = 98559427550801LLU;
int64_t x393 = -1LL;
int32_t x402 = 5112891;
uint64_t x405 = 460951533630LLU;
uint64_t t86 = 175LLU;
int8_t x411 = INT8_MIN;
int32_t x413 = 0;
int16_t x424 = -1;
volatile int16_t x428 = INT16_MAX;
static uint32_t x440 = 234587493U;
int32_t x448 = 118;
uint16_t x449 = UINT16_MAX;
uint32_t x450 = 701216U;
volatile int16_t x451 = 1861;
static uint16_t x452 = 14712U;
static uint16_t x457 = UINT16_MAX;


void f0(void) {
	int32_t x5 = 509969700;
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MAX;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t0 = 240853LLU;

	t0 = (x5&((x6==x7)-x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MAX;
	int64_t x12 = -1LL;
	volatile int64_t t1 = 1LL;

	t1 = (x9&((x10==x11)-x12));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 2U;
	int64_t x15 = -41576705173244LL;
	int16_t x16 = 491;
	uint64_t t2 = 13249895346LLU;

	t2 = (x13&((x14==x15)-x16));

	if (t2 != 18446744073709551125LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 133U;
	int16_t x19 = -1;
	int32_t t3 = -24112;

	t3 = (x17&((x18==x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = 1U;
	volatile int32_t x24 = 45041;
	int32_t t4 = 73426;

	t4 = (x21&((x22==x23)-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = INT32_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t x28 = 1551459046914LLU;
	volatile uint64_t t5 = 41314845280749355LLU;

	t5 = (x25&((x26==x27)-x28));

	if (t5 != 18446742521078874112LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	volatile uint16_t x30 = 456U;
	static int64_t x31 = INT64_MIN;
	static int64_t t6 = -206LL;

	t6 = (x29&((x30==x31)-x32));

	if (t6 != 9223372036854775701LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	static int64_t x34 = INT64_MIN;
	volatile int64_t x35 = INT64_MAX;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t7 = 18479959;

	t7 = (x33&((x34==x35)-x36));

	if (t7 != -255) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	int16_t x39 = -60;
	uint32_t x40 = 356831U;
	static uint32_t t8 = 7862U;

	t8 = (x37&((x38==x39)-x40));

	if (t8 != 33U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x42 = INT64_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 116;

	t9 = (x41&((x42==x43)-x44));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = 1956430727U;
	static int32_t x47 = INT32_MAX;
	static int16_t x48 = -1;
	volatile int32_t t10 = -71;

	t10 = (x45&((x46==x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = -1;
	static int64_t x51 = -1443899LL;
	int8_t x52 = -1;
	volatile int32_t t11 = -2588;

	t11 = (x49&((x50==x51)-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x54 = UINT8_MAX;
	static int16_t x55 = -1;
	int64_t x56 = -237LL;
	volatile int64_t t12 = -79201924LL;

	t12 = (x53&((x54==x55)-x56));

	if (t12 != 237LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = 24;
	volatile uint64_t x58 = 3719891315315418840LLU;
	uint32_t x59 = UINT32_MAX;
	uint16_t x60 = 24222U;
	int32_t t13 = -7598151;

	t13 = (x57&((x58==x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1132;
	volatile int16_t x63 = 1;
	volatile int32_t t14 = 158827960;

	t14 = (x61&((x62==x63)-x64));

	if (t14 != -1520) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = 60U;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MAX;
	volatile uint32_t t15 = 69097U;

	t15 = (x69&((x70==x71)-x72));

	if (t15 != 56U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x74 = 15LL;
	int64_t x75 = -2078979189129020LL;
	int64_t x76 = INT64_MAX;
	volatile int64_t t16 = 4LL;

	t16 = (x73&((x74==x75)-x76));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -1;
	volatile uint16_t x83 = 1U;
	static uint16_t x84 = 4U;
	static volatile int32_t t17 = -2573336;

	t17 = (x81&((x82==x83)-x84));

	if (t17 != -4) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x85 = UINT16_MAX;
	volatile int32_t x86 = -541;
	volatile uint8_t x87 = UINT8_MAX;
	int32_t t18 = 1577946;

	t18 = (x85&((x86==x87)-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x92 = -1LL;
	int64_t t19 = 14020553LL;

	t19 = (x89&((x90==x91)-x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 2U;
	uint16_t x94 = UINT16_MAX;
	static uint64_t x95 = UINT64_MAX;
	volatile int64_t t20 = -116783946462418LL;

	t20 = (x93&((x94==x95)-x96));

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 601LLU;
	volatile int32_t x98 = 3665;
	static volatile uint16_t x99 = 22535U;
	volatile int64_t x100 = -1LL;
	static volatile uint64_t t21 = 77LLU;

	t21 = (x97&((x98==x99)-x100));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -1;
	uint32_t x102 = 116349U;
	static int8_t x103 = INT8_MAX;
	uint8_t x104 = 6U;
	int32_t t22 = 55678333;

	t22 = (x101&((x102==x103)-x104));

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x111 = 4986487034726412LL;
	uint8_t x112 = UINT8_MAX;
	static int32_t t23 = 244;

	t23 = (x109&((x110==x111)-x112));

	if (t23 != 5120) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -3;
	static int32_t x114 = INT32_MIN;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint32_t t24 = 1142283689U;

	t24 = (x113&((x114==x115)-x116));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	int64_t x119 = -1LL;
	int64_t t25 = 2243748059190956674LL;

	t25 = (x117&((x118==x119)-x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x125 = 6U;
	uint8_t x126 = 4U;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = -188;
	volatile int32_t t26 = 948934;

	t26 = (x125&((x126==x127)-x128));

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x129 = 48U;
	int32_t x131 = 19938913;
	static uint64_t x132 = 127121276740LLU;
	uint64_t t27 = 186LLU;

	t27 = (x129&((x130==x131)-x132));

	if (t27 != 48LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	static volatile int16_t x135 = INT16_MIN;
	volatile int64_t x136 = 1LL;
	static int64_t t28 = -773LL;

	t28 = (x133&((x134==x135)-x136));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = -6425;

	t29 = (x141&((x142==x143)-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x145 = -3317701;
	int32_t x146 = 0;
	uint64_t x147 = 1841184880LLU;
	int8_t x148 = INT8_MAX;
	volatile int32_t t30 = -848;

	t30 = (x145&((x146==x147)-x148));

	if (t30 != -3317759) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 0U;
	static volatile uint8_t x151 = 2U;
	static int16_t x152 = 6308;

	t31 = (x149&((x150==x151)-x152));

	if (t31 != 4294960988U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = 15U;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MAX;

	t32 = (x153&((x154==x155)-x156));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x157 = 5U;
	int8_t x158 = -1;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 2897463LLU;

	t33 = (x157&((x158==x159)-x160));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = 261839LL;
	static uint8_t x162 = UINT8_MAX;
	volatile int64_t t34 = 757056468088LL;

	t34 = (x161&((x162==x163)-x164));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = 1;
	volatile uint32_t x166 = UINT32_MAX;
	int32_t x167 = 484277;
	uint32_t x168 = 384207062U;
	volatile uint32_t t35 = 1967399225U;

	t35 = (x165&((x166==x167)-x168));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = -1;
	int32_t x171 = -1;
	volatile uint64_t x172 = 249135542706LLU;
	uint64_t t36 = 5017016458LLU;

	t36 = (x169&((x170==x171)-x172));

	if (t36 != 18446743824573988864LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = INT64_MIN;
	volatile uint32_t x175 = 57652U;
	volatile uint32_t t37 = 1345U;

	t37 = (x173&((x174==x175)-x176));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x177 = UINT8_MAX;
	volatile int8_t x178 = 37;
	int16_t x179 = -8;
	static uint16_t x180 = 1U;
	volatile int32_t t38 = -12741;

	t38 = (x177&((x178==x179)-x180));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -1LL;
	uint8_t x182 = 4U;
	int32_t x183 = -19257776;
	uint32_t x184 = UINT32_MAX;

	t39 = (x181&((x182==x183)-x184));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x187 = INT32_MIN;
	volatile int64_t x188 = INT64_MAX;
	uint64_t t40 = 736LLU;

	t40 = (x185&((x186==x187)-x188));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x190 = 1U;
	uint16_t x192 = 27610U;
	volatile int32_t t41 = -46979053;

	t41 = (x189&((x190==x191)-x192));

	if (t41 != 38) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = -127590765LL;
	uint32_t x199 = 1266U;
	static int32_t x200 = -116547934;
	volatile int64_t t42 = -1627476766196854LL;

	t42 = (x197&((x198==x199)-x200));

	if (t42 != 6291474LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	int64_t x203 = -228114LL;
	uint16_t x204 = 2067U;
	int64_t t43 = INT64_MIN;

	t43 = (x201&((x202==x203)-x204));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = -1;
	int32_t t44 = -65485;

	t44 = (x205&((x206==x207)-x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -1LL;
	volatile int64_t x210 = INT64_MIN;
	int16_t x211 = 1;
	static int16_t x212 = -38;

	t45 = (x209&((x210==x211)-x212));

	if (t45 != 38LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = -1728;
	static int64_t x214 = -763858645646125271LL;
	uint64_t x215 = 428492LLU;
	static volatile int32_t t46 = -20542071;

	t46 = (x213&((x214==x215)-x216));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x220 = INT8_MIN;
	uint64_t t47 = 1859604160LLU;

	t47 = (x217&((x218==x219)-x220));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 51U;
	volatile int32_t x226 = -1;
	int32_t x227 = -1;
	volatile int32_t t48 = 14613587;

	t48 = (x225&((x226==x227)-x228));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	static uint32_t x235 = UINT32_MAX;
	uint32_t x236 = UINT32_MAX;
	int64_t t49 = -6LL;

	t49 = (x233&((x234==x235)-x236));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = INT16_MAX;
	static int32_t x239 = -1;
	int8_t x240 = INT8_MIN;
	int32_t t50 = 30855980;

	t50 = (x237&((x238==x239)-x240));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x241 = -1;
	volatile int32_t x244 = 27;
	int32_t t51 = 72201;

	t51 = (x241&((x242==x243)-x244));

	if (t51 != -27) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = 8475U;
	volatile uint32_t t52 = 27139U;

	t52 = (x245&((x246==x247)-x248));

	if (t52 != 4294958821U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MAX;
	int32_t x260 = 74624;

	t53 = (x257&((x258==x259)-x260));

	if (t53 != 21504) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 60U;
	static int16_t x263 = 102;
	uint32_t x264 = 122387U;
	static volatile uint32_t t54 = 15679371U;

	t54 = (x261&((x262==x263)-x264));

	if (t54 != 4294836224U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x265 = 21753101428LLU;
	int16_t x268 = 0;
	static uint64_t t55 = 657426751714835LLU;

	t55 = (x265&((x266==x267)-x268));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = 1;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -3100927645032LL;
	volatile int64_t t56 = -33701LL;

	t56 = (x269&((x270==x271)-x272));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x273 = INT64_MAX;
	int64_t x275 = INT64_MIN;
	int64_t t57 = -6019795770159LL;

	t57 = (x273&((x274==x275)-x276));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x277 = 3;
	static uint64_t x278 = UINT64_MAX;
	int32_t x279 = -25894774;
	volatile int16_t x280 = 3309;

	t58 = (x277&((x278==x279)-x280));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	static int32_t x284 = -43;
	int32_t t59 = 440179;

	t59 = (x281&((x282==x283)-x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 12LLU;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	volatile uint8_t x288 = 89U;
	volatile uint64_t t60 = 4352027227137338LLU;

	t60 = (x285&((x286==x287)-x288));

	if (t60 != 4LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = 6319347U;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 1U;
	uint32_t x292 = UINT32_MAX;
	uint32_t t61 = 28392131U;

	t61 = (x289&((x290==x291)-x292));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MAX;
	int32_t t62 = INT32_MIN;

	t62 = (x293&((x294==x295)-x296));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x297 = INT16_MIN;
	uint64_t x298 = 5349LLU;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = 2U;
	int32_t t63 = 1712;

	t63 = (x297&((x298==x299)-x300));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 2U;
	int32_t t64 = -3157;

	t64 = (x301&((x302==x303)-x304));

	if (t64 != -65536) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = -1;
	static int16_t x307 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;

	t65 = (x305&((x306==x307)-x308));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MAX;

	t66 = (x309&((x310==x311)-x312));

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = -1;
	volatile int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -53;
	int32_t t67 = -848384784;

	t67 = (x313&((x314==x315)-x316));

	if (t67 != 53) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x317 = -6273LL;
	static uint8_t x320 = 1U;
	int64_t t68 = 32LL;

	t68 = (x317&((x318==x319)-x320));

	if (t68 != -6273LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = 60327334549478LL;
	volatile int8_t x323 = -1;
	int8_t x324 = INT8_MAX;
	static int64_t t69 = 2382262930230LL;

	t69 = (x321&((x322==x323)-x324));

	if (t69 != 60327334549376LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x325 = 3203866829354LL;
	static uint8_t x326 = 0U;
	int32_t x328 = -10435;
	int64_t t70 = 12657LL;

	t70 = (x325&((x326==x327)-x328));

	if (t70 != 8192LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -130307544;
	static volatile uint32_t x330 = 496141U;
	volatile int64_t t71 = 5319941LL;

	t71 = (x329&((x330==x331)-x332));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x333 = INT32_MIN;
	static int16_t x334 = -2819;
	uint64_t x335 = 9319995LLU;
	int32_t t72 = INT32_MIN;

	t72 = (x333&((x334==x335)-x336));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -1;
	int64_t x339 = INT64_MIN;
	int16_t x340 = -956;
	static uint32_t t73 = 2U;

	t73 = (x337&((x338==x339)-x340));

	if (t73 != 956U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = 4135152629826809788LLU;
	volatile uint64_t t74 = 471556712255703162LLU;

	t74 = (x341&((x342==x343)-x344));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 1066096280LLU;
	volatile uint16_t x348 = 41U;
	int32_t t75 = -136;

	t75 = (x345&((x346==x347)-x348));

	if (t75 != 215) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x350 = 1750448994720LLU;
	int64_t x351 = -1LL;
	static uint16_t x352 = 27U;
	volatile int32_t t76 = 427392;

	t76 = (x349&((x350==x351)-x352));

	if (t76 != 32741) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = 59U;
	int32_t t77 = -43;

	t77 = (x357&((x358==x359)-x360));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x370 = 15498099;
	int64_t x371 = -1LL;
	volatile uint64_t t78 = 173187LLU;

	t78 = (x369&((x370==x371)-x372));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MIN;
	static int16_t x374 = INT16_MAX;
	uint64_t x375 = 504LLU;
	int8_t x376 = -1;
	int32_t t79 = -26;

	t79 = (x373&((x374==x375)-x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = 117U;
	volatile int8_t x378 = -4;
	int16_t x379 = INT16_MAX;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t80 = 3794685;

	t80 = (x377&((x378==x379)-x380));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x382 = 12U;
	static int32_t x383 = -13706;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t81 = 35367LLU;

	t81 = (x381&((x382==x383)-x384));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x385 = 5U;
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	int32_t t82 = 21121;

	t82 = (x385&((x386==x387)-x388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = 0;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	volatile int32_t t83 = 2724;

	t83 = (x389&((x390==x391)-x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x394 = -1;
	static volatile int8_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	int64_t t84 = 108953509177920LL;

	t84 = (x393&((x394==x395)-x396));

	if (t84 != -254LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = 1888;
	static volatile uint64_t x403 = 4856LLU;
	static volatile uint32_t x404 = 75412U;
	volatile uint32_t t85 = 1274U;

	t85 = (x401&((x402==x403)-x404));

	if (t85 != 352U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x406 = UINT8_MAX;
	static volatile int64_t x407 = INT64_MAX;
	uint8_t x408 = UINT8_MAX;

	t86 = (x405&((x406==x407)-x408));

	if (t86 != 460951533568LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = 847016;
	static int8_t x412 = INT8_MIN;
	int64_t t87 = 4853080836058LL;

	t87 = (x409&((x410==x411)-x412));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 5U;
	static uint64_t x416 = 10322455757LLU;
	volatile uint64_t t88 = 284657955491986064LLU;

	t88 = (x413&((x414==x415)-x416));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 0LLU;
	uint64_t x419 = 2845199LLU;
	static volatile uint32_t x420 = 0U;
	uint32_t t89 = 181523U;

	t89 = (x417&((x418==x419)-x420));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x422 = 3488U;
	volatile int64_t x423 = INT64_MAX;
	volatile int32_t t90 = 973430610;

	t90 = (x421&((x422==x423)-x424));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -11884LL;
	int16_t x426 = -166;
	uint32_t x427 = 402178U;
	volatile int64_t t91 = 4976132460LL;

	t91 = (x425&((x426==x427)-x428));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = -70LL;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = UINT64_MAX;
	static int32_t x432 = -312098;
	int64_t t92 = 4034LL;

	t92 = (x429&((x430==x431)-x432));

	if (t92 != 312098LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = INT64_MIN;
	volatile int8_t x434 = -3;
	static int8_t x435 = 1;
	uint8_t x436 = 15U;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x433&((x434==x435)-x436));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x437 = 11U;
	int8_t x438 = -1;
	static int64_t x439 = INT64_MIN;
	uint32_t t94 = 4089928U;

	t94 = (x437&((x438==x439)-x440));

	if (t94 != 11U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x441 = 20U;
	uint32_t x442 = 0U;
	int8_t x443 = INT8_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t95 = -2;

	t95 = (x441&((x442==x443)-x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = -10;
	static uint32_t x446 = 1273096273U;
	static int8_t x447 = -1;
	int32_t t96 = 426;

	t96 = (x445&((x446==x447)-x448));

	if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t t97 = -11;

	t97 = (x449&((x450==x451)-x452));

	if (t97 != 50824) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x458 = -1LL;
	uint64_t x459 = 67735455088LLU;
	int8_t x460 = 6;
	int32_t t98 = -99;

	t98 = (x457&((x458==x459)-x460));

	if (t98 != 65530) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x461 = 2087190933LLU;
	int8_t x462 = INT8_MIN;
	int64_t x463 = INT64_MIN;
	static int32_t x464 = -1;
	volatile uint64_t t99 = 6LLU;

	t99 = (x461&((x462==x463)-x464));

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


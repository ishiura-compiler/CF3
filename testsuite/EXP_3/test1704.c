#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = 38;
volatile int64_t x17 = INT64_MIN;
int32_t x18 = INT32_MIN;
int8_t x19 = INT8_MAX;
volatile int8_t x20 = -34;
static int64_t t1 = -3184241854973349409LL;
int64_t x21 = 0LL;
int32_t x22 = INT32_MAX;
uint16_t x23 = 0U;
volatile int64_t t2 = -21557483452142LL;
int16_t x27 = 6999;
static int16_t x32 = 151;
int64_t t4 = -767260LL;
volatile uint32_t t5 = 0U;
int64_t x44 = -1LL;
int64_t x45 = -1LL;
static int8_t x46 = INT8_MIN;
static uint64_t x53 = 13519155LLU;
static uint16_t x54 = 3814U;
uint8_t x67 = 12U;
uint64_t t16 = 247LLU;
uint16_t x89 = 23776U;
static int32_t x92 = -1;
volatile int64_t t19 = -32827LL;
uint64_t t20 = 2524719618322574LLU;
uint64_t t21 = 215565198LLU;
static int64_t x115 = -1LL;
int8_t x133 = INT8_MAX;
static int16_t x139 = 1552;
int64_t x140 = INT64_MIN;
int64_t x146 = 1914LL;
int16_t x149 = -9;
uint64_t x154 = 2441499LLU;
int8_t x158 = -23;
volatile int64_t t31 = 31647LL;
int32_t x162 = 638235565;
int16_t x164 = INT16_MIN;
int32_t x169 = INT32_MAX;
uint8_t x170 = 44U;
int8_t x176 = INT8_MAX;
static uint64_t t36 = 5014LLU;
int32_t t39 = -196203723;
uint16_t x209 = UINT16_MAX;
volatile int16_t x213 = 7340;
uint16_t x215 = UINT16_MAX;
int64_t x216 = 67869052930LL;
volatile int32_t x217 = INT32_MIN;
int16_t x218 = INT16_MIN;
int16_t x222 = -1;
static int32_t x225 = -3380;
uint8_t x226 = 93U;
int16_t x229 = INT16_MIN;
uint64_t t49 = 10318116266461772LLU;
volatile int64_t x259 = INT64_MAX;
volatile uint64_t t55 = 19371951758993LLU;
static int16_t x289 = INT16_MAX;
volatile uint32_t t56 = 757344842U;
int32_t x298 = -14915;
int8_t x301 = 0;
uint8_t x304 = 2U;
int8_t x310 = -1;
static uint8_t x314 = UINT8_MAX;
uint16_t x318 = UINT16_MAX;
volatile int8_t x320 = 1;
uint16_t x331 = UINT16_MAX;
uint16_t x333 = 507U;
int8_t x344 = -7;
uint16_t x347 = 54U;
volatile int64_t x348 = -432972228342LL;
uint32_t x354 = UINT32_MAX;
static volatile int64_t x356 = 259087284LL;
int16_t x370 = INT16_MAX;
uint16_t x371 = UINT16_MAX;
int32_t t75 = 46728;
int8_t x393 = -31;
uint16_t x400 = UINT16_MAX;
static volatile int16_t x407 = -1;
static uint32_t t81 = 102U;
int16_t x421 = INT16_MAX;
uint16_t x422 = UINT16_MAX;
volatile int8_t x431 = INT8_MAX;
int64_t x432 = INT64_MIN;
volatile uint16_t x435 = 0U;
static volatile int32_t x439 = INT32_MIN;
static uint32_t x450 = UINT32_MAX;
int16_t x451 = 1;
int8_t x452 = INT8_MIN;
uint8_t x455 = UINT8_MAX;
int64_t x459 = INT64_MIN;
static int64_t t91 = 3LL;
uint8_t x461 = 62U;
int64_t t92 = -426638094300LL;
int8_t x474 = INT8_MIN;
volatile int32_t x489 = -856942903;


void f0(void) {
	int64_t x10 = -2985941903995318LL;
	int32_t x11 = -1;
	int16_t x12 = -1;
	static int64_t t0 = 527602052554LL;

	t0 = ((x9-x10)+(x11&x12));

	if (t0 != 2985941903995355LL) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = ((x17-x18)+(x19&x20));

	if (t1 != -9223372034707292066LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x24 = 2059;

	t2 = ((x21-x22)+(x23&x24));

	if (t2 != -2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x25 = -1LL;
	int32_t x26 = 11916;
	int16_t x28 = INT16_MAX;
	int64_t t3 = -5887003LL;

	t3 = ((x25-x26)+(x27&x28));

	if (t3 != -4918LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = -1LL;
	static int32_t x30 = INT32_MAX;
	static int8_t x31 = -28;

	t4 = ((x29-x30)+(x31&x32));

	if (t4 != -2147483516LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 0;
	static uint32_t x34 = 1088853756U;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;

	t5 = ((x33-x34)+(x35&x36));

	if (t5 != 3206080772U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 10844847552626208LLU;
	volatile int32_t x38 = 88937321;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -1;
	static uint64_t t6 = 17148228737659LLU;

	t6 = ((x37-x38)+(x39&x40));

	if (t6 != 9234216884318464694LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -16;
	static int32_t x42 = INT32_MIN;
	static int64_t x43 = -50618LL;
	int64_t t7 = 18782LL;

	t7 = ((x41-x42)+(x43&x44));

	if (t7 != 2147433014LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x47 = 2052U;
	static uint32_t x48 = 38U;
	int64_t t8 = 495404750765072915LL;

	t8 = ((x45-x46)+(x47&x48));

	if (t8 != 131LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = -8703335461430LL;
	uint8_t x50 = 14U;
	static int8_t x51 = -6;
	int16_t x52 = 1;
	int64_t t9 = -1197LL;

	t9 = ((x49-x50)+(x51&x52));

	if (t9 != -8703335461444LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x55 = -15;
	volatile uint64_t x56 = 389320LLU;
	static uint64_t t10 = 69LLU;

	t10 = ((x53-x54)+(x55&x56));

	if (t10 != 13904653LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	volatile uint8_t x64 = 54U;
	int32_t t11 = -1181263;

	t11 = ((x61-x62)+(x63&x64));

	if (t11 != -2147483466) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = 7497;
	uint8_t x68 = 22U;
	int32_t t12 = 89847968;

	t12 = ((x65-x66)+(x67&x68));

	if (t12 != -40261) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	int32_t x70 = 783152;
	int8_t x71 = 1;
	int16_t x72 = -1;
	static volatile int32_t t13 = 51;

	t13 = ((x69-x70)+(x71&x72));

	if (t13 != -783152) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	static volatile int16_t x74 = 247;
	int8_t x75 = INT8_MAX;
	volatile int32_t x76 = INT32_MIN;
	static int32_t t14 = -181;

	t14 = ((x73-x74)+(x75&x76));

	if (t14 != -120) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = -1;
	int8_t x79 = -1;
	static uint8_t x80 = 0U;
	volatile int32_t t15 = -1399625;

	t15 = ((x77-x78)+(x79&x80));

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x85 = INT32_MIN;
	int64_t x86 = -1245412605595071406LL;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 940822389189LLU;

	t16 = ((x85-x86)+(x87&x88));

	if (t16 != 1245413544045425582LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x90 = -1LL;
	int16_t x91 = INT16_MIN;
	int64_t t17 = -7LL;

	t17 = ((x89-x90)+(x91&x92));

	if (t17 != -8991LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x97 = 7U;
	uint64_t x98 = 44LLU;
	volatile int16_t x99 = INT16_MAX;
	int64_t x100 = INT64_MAX;
	volatile uint64_t t18 = 931814231077580664LLU;

	t18 = ((x97-x98)+(x99&x100));

	if (t18 != 32730LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = 213635404817795642LL;
	int8_t x103 = INT8_MIN;
	static int32_t x104 = -1;

	t19 = ((x101-x102)+(x103&x104));

	if (t19 != -213635404817828538LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = -1LL;
	volatile int16_t x106 = INT16_MAX;
	uint8_t x107 = 0U;
	uint64_t x108 = 28890LLU;

	t20 = ((x105-x106)+(x107&x108));

	if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	static int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;

	t21 = ((x109-x110)+(x111&x112));

	if (t21 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x114 = 11;
	uint16_t x116 = 27319U;
	volatile int64_t t22 = -431311018946098LL;

	t22 = ((x113-x114)+(x115&x116));

	if (t22 != 27180LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = -66;
	uint32_t x122 = 15530726U;
	static uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 130U;
	volatile uint32_t t23 = 2910930U;

	t23 = ((x121-x122)+(x123&x124));

	if (t23 != 4279436634U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = -5;
	static int16_t x131 = -1;
	uint64_t x132 = 1LLU;
	volatile uint64_t t24 = 39LLU;

	t24 = ((x129-x130)+(x131&x132));

	if (t24 != 5LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x134 = -1;
	volatile int16_t x135 = INT16_MAX;
	int16_t x136 = 10517;
	volatile int32_t t25 = -37;

	t25 = ((x133-x134)+(x135&x136));

	if (t25 != 10645) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = 0U;
	volatile int64_t t26 = 2191999279057473LL;

	t26 = ((x137-x138)+(x139&x140));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x141 = 0;
	int8_t x142 = -1;
	static uint32_t x143 = UINT32_MAX;
	uint8_t x144 = UINT8_MAX;
	uint32_t t27 = 23190U;

	t27 = ((x141-x142)+(x143&x144));

	if (t27 != 256U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	static int64_t t28 = -1878172912859444LL;

	t28 = ((x145-x146)+(x147&x148));

	if (t28 != -67450LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x150 = -1;
	volatile uint32_t x151 = 869303745U;
	volatile int8_t x152 = INT8_MAX;
	static uint32_t t29 = 24U;

	t29 = ((x149-x150)+(x151&x152));

	if (t29 != 57U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = 104LL;
	volatile int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MIN;
	volatile uint64_t t30 = 5398090851149LLU;

	t30 = ((x153-x154)+(x155&x156));

	if (t30 != 9223372036852334413LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	volatile int64_t x160 = 6537607273387068LL;

	t31 = ((x157-x158)+(x159&x160));

	if (t31 != 65618LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MAX;
	static int64_t x163 = -1LL;
	int64_t t32 = 35262340916618565LL;

	t32 = ((x161-x162)+(x163&x164));

	if (t32 != -638268206LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t33 = -1365895;

	t33 = ((x169-x170)+(x171&x172));

	if (t33 != -45) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = 1;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 53713913U;
	uint32_t t34 = 249547370U;

	t34 = ((x173-x174)+(x175&x176));

	if (t34 != 32890U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x177 = 846627064U;
	volatile uint64_t x178 = 521771186979509130LLU;
	int32_t x179 = 20;
	int16_t x180 = INT16_MAX;
	uint64_t t35 = 1462LLU;

	t35 = ((x177-x178)+(x179&x180));

	if (t35 != 17924972887576669570LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 337U;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = -1LL;
	static volatile int16_t x184 = -2;

	t36 = ((x181-x182)+(x183&x184));

	if (t36 != 336LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 13U;
	int16_t x191 = -1;
	volatile int64_t x192 = 598499218943LL;
	int64_t t37 = -1449136517LL;

	t37 = ((x189-x190)+(x191&x192));

	if (t37 != 602794153458LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = UINT8_MAX;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -73;
	volatile uint32_t t38 = 1625908849U;

	t38 = ((x193-x194)+(x195&x196));

	if (t38 != 4294934784U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	int8_t x202 = -6;
	int32_t x203 = -1;
	int16_t x204 = -8156;

	t39 = ((x201-x202)+(x203&x204));

	if (t39 != -8151) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	volatile int8_t x207 = 7;
	static volatile uint16_t x208 = 165U;
	volatile int64_t t40 = -65514972986LL;

	t40 = ((x205-x206)+(x207&x208));

	if (t40 != 9223372036854743045LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -11;
	int32_t t41 = 5;

	t41 = ((x209-x210)+(x211&x212));

	if (t41 != -2147418112) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x214 = INT8_MAX;
	static int64_t t42 = -1LL;

	t42 = ((x213-x214)+(x215&x216));

	if (t42 != 44079LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MAX;
	int32_t t43 = -25;

	t43 = ((x217-x218)+(x219&x220));

	if (t43 != -2147385345) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = 0U;
	volatile int16_t x223 = INT16_MAX;
	static int16_t x224 = INT16_MIN;
	static int32_t t44 = -596533930;

	t44 = ((x221-x222)+(x223&x224));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	int32_t t45 = 87224722;

	t45 = ((x225-x226)+(x227&x228));

	if (t45 != 29295) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x230 = 897202617;
	int64_t x231 = -7776481572190611LL;
	volatile int16_t x232 = 1;
	volatile int64_t t46 = 6LL;

	t46 = ((x229-x230)+(x231&x232));

	if (t46 != -897235384LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x233 = 802U;
	volatile int16_t x234 = -1;
	static uint16_t x235 = UINT16_MAX;
	static uint16_t x236 = 5U;
	uint32_t t47 = 38U;

	t47 = ((x233-x234)+(x235&x236));

	if (t47 != 808U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x237 = INT8_MAX;
	static volatile uint16_t x238 = 18295U;
	int64_t x239 = 518274770436444038LL;
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t48 = 307LL;

	t48 = ((x237-x238)+(x239&x240));

	if (t48 != 518274770436405512LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = 296608432LLU;
	uint8_t x246 = 4U;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;

	t49 = ((x245-x246)+(x247&x248));

	if (t49 != 2444092075LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x249 = INT16_MIN;
	static uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = 1243626192U;
	volatile uint32_t t50 = 3996916U;

	t50 = ((x249-x250)+(x251&x252));

	if (t50 != 4294934609U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = -1;
	volatile uint32_t x260 = 10999U;
	volatile int64_t t51 = -302945064022LL;

	t51 = ((x257-x258)+(x259&x260));

	if (t51 != -9223372036854764808LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 1395U;
	int64_t x267 = -1045365777039079600LL;
	int32_t x268 = -1;
	volatile uint64_t t52 = 302290LLU;

	t52 = ((x265-x266)+(x267&x268));

	if (t52 != 17401378296670470620LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = -1LL;
	static uint16_t x270 = 986U;
	int64_t x271 = INT64_MIN;
	volatile uint64_t x272 = 545011980LLU;
	static uint64_t t53 = 1295116688LLU;

	t53 = ((x269-x270)+(x271&x272));

	if (t53 != 18446744073709550629LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = -69;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = 7U;
	int16_t x280 = -1;
	int32_t t54 = -746273259;

	t54 = ((x277-x278)+(x279&x280));

	if (t54 != 32706) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	static int32_t x287 = 186801414;
	int16_t x288 = INT16_MIN;

	t55 = ((x285-x286)+(x287&x288));

	if (t55 != 186777473LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x290 = 14U;
	static uint32_t x291 = 994049369U;
	volatile uint32_t x292 = 137591U;

	t56 = ((x289-x290)+(x291&x292));

	if (t56 != 170306U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x297 = 1U;
	volatile uint16_t x299 = 34U;
	int32_t x300 = 842;
	int32_t t57 = 2736278;

	t57 = ((x297-x298)+(x299&x300));

	if (t57 != 14918) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x302 = INT32_MAX;
	uint8_t x303 = UINT8_MAX;
	int32_t t58 = -302173872;

	t58 = ((x301-x302)+(x303&x304));

	if (t58 != -2147483645) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x309 = 253LLU;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 105U;
	uint64_t t59 = 91LLU;

	t59 = ((x309-x310)+(x311&x312));

	if (t59 != 254LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x313 = 128659443LLU;
	volatile uint8_t x315 = 120U;
	uint8_t x316 = 46U;
	volatile uint64_t t60 = 36438628832973169LLU;

	t60 = ((x313-x314)+(x315&x316));

	if (t60 != 128659228LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x317 = 61;
	volatile uint32_t x319 = 699612339U;
	static volatile uint32_t t61 = 2523U;

	t61 = ((x317-x318)+(x319&x320));

	if (t61 != 4294901823U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x321 = -1LL;
	static int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	static uint64_t x324 = UINT64_MAX;
	volatile uint64_t t62 = 4482547LLU;

	t62 = ((x321-x322)+(x323&x324));

	if (t62 != 2147483519LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = 0;
	volatile uint16_t x330 = UINT16_MAX;
	uint64_t x332 = 7150656207LLU;
	uint64_t t63 = 11516222484864646LLU;

	t63 = ((x329-x330)+(x331&x332));

	if (t63 != 18446744073709509328LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int32_t x336 = -3245533;
	int32_t t64 = -100105;

	t64 = ((x333-x334)+(x335&x336));

	if (t64 != -3244933) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = -1;
	static int64_t x338 = -39019283249976311LL;
	volatile int32_t x339 = 248525;
	int32_t x340 = INT32_MIN;
	volatile int64_t t65 = -78LL;

	t65 = ((x337-x338)+(x339&x340));

	if (t65 != 39019283249976310LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x341 = UINT32_MAX;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = 2;
	uint32_t t66 = 15U;

	t66 = ((x341-x342)+(x343&x344));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x345 = 1127093447U;
	volatile int16_t x346 = INT16_MIN;
	volatile int64_t t67 = 5808816912196LL;

	t67 = ((x345-x346)+(x347&x348));

	if (t67 != 1127126217LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = -5675;
	int64_t x355 = INT64_MAX;
	volatile int64_t t68 = -2404598LL;

	t68 = ((x353-x354)+(x355&x356));

	if (t68 != 4554048906LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x357 = -1LL;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 475762338475LLU;
	volatile uint64_t x360 = 47435LLU;
	volatile uint64_t t69 = 1713276LLU;

	t69 = ((x357-x358)+(x359&x360));

	if (t69 != 18446744071562078219LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	static int32_t x363 = -108853099;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t70 = -5LL;

	t70 = ((x361-x362)+(x363&x364));

	if (t70 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x365 = INT16_MIN;
	uint16_t x366 = 468U;
	static int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MIN;
	volatile int64_t t71 = -2476506440424838LL;

	t71 = ((x365-x366)+(x367&x368));

	if (t71 != 9223372036854742444LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x369 = 2U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t72 = -1778818;

	t72 = ((x369-x370)+(x371&x372));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int8_t x374 = 4;
	int32_t x375 = -1;
	static uint8_t x376 = 0U;
	volatile int32_t t73 = 49173747;

	t73 = ((x373-x374)+(x375&x376));

	if (t73 != 65531) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x377 = 17;
	int8_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	int16_t x380 = -5;
	static volatile int32_t t74 = 278149;

	t74 = ((x377-x378)+(x379&x380));

	if (t74 != 32781) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x381 = 1;
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = -1;
	static int8_t x384 = -6;

	t75 = ((x381-x382)+(x383&x384));

	if (t75 != 32763) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x394 = 1U;
	int8_t x395 = 0;
	int64_t x396 = INT64_MIN;
	volatile int64_t t76 = -4514145244800424598LL;

	t76 = ((x393-x394)+(x395&x396));

	if (t76 != -32LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x397 = 12U;
	int16_t x398 = INT16_MAX;
	uint64_t x399 = 13LLU;
	volatile uint64_t t77 = 15807043058685972LLU;

	t77 = ((x397-x398)+(x399&x400));

	if (t77 != 18446744073709518874LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x401 = 97039LLU;
	int64_t x402 = -1003333LL;
	uint16_t x403 = 9U;
	static volatile int8_t x404 = -12;
	volatile uint64_t t78 = 126633969697878LLU;

	t78 = ((x401-x402)+(x403&x404));

	if (t78 != 1100372LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x405 = UINT64_MAX;
	static uint8_t x406 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t79 = 1306688514306347LLU;

	t79 = ((x405-x406)+(x407&x408));

	if (t79 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x409 = 940U;
	static volatile uint8_t x410 = 2U;
	static int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t80 = 131279504;

	t80 = ((x409-x410)+(x411&x412));

	if (t80 != -31830) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x413 = INT16_MIN;
	volatile int16_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	static uint32_t x416 = 50436640U;

	t81 = ((x413-x414)+(x415&x416));

	if (t81 != 4294934561U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile int8_t x418 = -1;
	volatile int64_t x419 = -1LL;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t82 = 122120475591LLU;

	t82 = ((x417-x418)+(x419&x420));

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x423 = 5U;
	volatile int32_t x424 = -1;
	volatile uint32_t t83 = 124743U;

	t83 = ((x421-x422)+(x423&x424));

	if (t83 != 4294934533U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = -1;
	static uint64_t x430 = UINT64_MAX;
	uint64_t t84 = 449070085LLU;

	t84 = ((x429-x430)+(x431&x432));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = -1LL;
	uint8_t x434 = 1U;
	int32_t x436 = INT32_MIN;
	int64_t t85 = -7175906632878LL;

	t85 = ((x433-x434)+(x435&x436));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = -179;
	volatile int64_t x438 = INT64_MIN;
	uint16_t x440 = 12470U;
	static volatile int64_t t86 = 1269215161LL;

	t86 = ((x437-x438)+(x439&x440));

	if (t86 != 9223372036854775629LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x441 = UINT64_MAX;
	int8_t x442 = -1;
	static uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 1U;
	volatile uint64_t t87 = 11399467775948LLU;

	t87 = ((x441-x442)+(x443&x444));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x445 = 1U;
	int32_t x446 = INT32_MAX;
	int32_t x447 = INT32_MIN;
	volatile int8_t x448 = INT8_MIN;
	volatile uint32_t t88 = 3539U;

	t88 = ((x445-x446)+(x447&x448));

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x449 = 7707U;
	uint32_t t89 = 2017805889U;

	t89 = ((x449-x450)+(x451&x452));

	if (t89 != 7708U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x453 = 1U;
	int64_t x454 = INT64_MAX;
	int8_t x456 = INT8_MIN;
	volatile int64_t t90 = 51913241471622LL;

	t90 = ((x453-x454)+(x455&x456));

	if (t90 != -9223372036854775678LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = INT16_MIN;
	static int32_t x460 = -1;

	t91 = ((x457-x458)+(x459&x460));

	if (t91 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x462 = 4U;
	static int64_t x463 = INT64_MAX;
	uint32_t x464 = 99638242U;

	t92 = ((x461-x462)+(x463&x464));

	if (t92 != 99638300LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = UINT8_MAX;
	uint32_t x466 = 370652U;
	int64_t x467 = -11275LL;
	volatile int16_t x468 = INT16_MAX;
	static int64_t t93 = 293994189718740681LL;

	t93 = ((x465-x466)+(x467&x468));

	if (t93 != 4294618392LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x469 = 66U;
	static int16_t x470 = INT16_MIN;
	int16_t x471 = 3233;
	int16_t x472 = -1;
	static int32_t t94 = -31556;

	t94 = ((x469-x470)+(x471&x472));

	if (t94 != 36067) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x473 = -78;
	volatile uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MAX;
	volatile int64_t t95 = 27921835251160899LL;

	t95 = ((x473-x474)+(x475&x476));

	if (t95 != 4294967345LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = INT8_MAX;
	static int8_t x478 = -1;
	int8_t x479 = INT8_MIN;
	static int64_t x480 = -1LL;
	volatile int64_t t96 = 25888752102447404LL;

	t96 = ((x477-x478)+(x479&x480));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x481 = 109U;
	int64_t x482 = -430LL;
	uint8_t x483 = 2U;
	uint32_t x484 = 1U;
	volatile int64_t t97 = 1513LL;

	t97 = ((x481-x482)+(x483&x484));

	if (t97 != 539LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = -4;
	uint32_t x486 = 92243U;
	volatile int32_t x487 = INT32_MIN;
	int16_t x488 = 0;
	uint32_t t98 = 48825956U;

	t98 = ((x485-x486)+(x487&x488));

	if (t98 != 4294875049U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x490 = INT16_MAX;
	int32_t x491 = -2357770;
	int64_t x492 = -1LL;
	volatile int64_t t99 = 1476494333LL;

	t99 = ((x489-x490)+(x491&x492));

	if (t99 != -859333440LL) { NG(); } else { ; }
	
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


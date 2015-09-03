#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
static int32_t x5 = -1;
int64_t x8 = 64735027517642LL;
int64_t t1 = -2188LL;
int8_t x11 = INT8_MIN;
int8_t x14 = INT8_MIN;
volatile int64_t t3 = -453090191312735LL;
static uint8_t x18 = UINT8_MAX;
int16_t x34 = 787;
int16_t x39 = -1;
volatile int32_t t8 = 54;
int64_t x61 = INT64_MIN;
int32_t x73 = INT32_MAX;
uint32_t x76 = 317634232U;
volatile int16_t x81 = -54;
int8_t x83 = INT8_MAX;
int16_t x84 = -1;
uint64_t x87 = 6144880LLU;
int64_t x92 = -244155211160LL;
int8_t x93 = INT8_MAX;
uint8_t x94 = 29U;
int64_t x96 = -4066189623888365LL;
volatile int8_t x103 = 1;
uint16_t x104 = UINT16_MAX;
volatile int64_t t21 = -1005094514205107LL;
volatile int32_t t22 = 312962;
volatile uint32_t x122 = 6U;
static volatile int32_t x125 = -66186;
static int16_t x138 = INT16_MIN;
static volatile int8_t x143 = 0;
int16_t x146 = INT16_MIN;
static uint8_t x150 = 89U;
volatile int8_t x152 = INT8_MIN;
int32_t x156 = 234751368;
volatile int32_t t32 = 147688211;
uint16_t x161 = 535U;
int64_t x162 = -1LL;
int32_t x163 = 1;
volatile int64_t t34 = -71289189LL;
volatile uint64_t x166 = UINT64_MAX;
static volatile uint64_t x168 = 0LLU;
volatile int32_t x181 = 7267;
int16_t x187 = INT16_MIN;
static int32_t t38 = 1392543;
volatile int64_t t42 = 703912770810842LL;
static int32_t x209 = -1;
volatile int32_t x211 = -697;
uint8_t x216 = UINT8_MAX;
volatile int64_t t44 = 318861590803LL;
volatile int32_t x221 = -32212648;
volatile uint64_t x227 = 7LLU;
uint16_t x239 = UINT16_MAX;
static uint32_t x240 = 31919U;
uint32_t t47 = 0U;
int32_t t49 = -34587823;
static uint64_t x267 = UINT64_MAX;
static volatile int32_t x268 = -1;
int16_t x274 = INT16_MIN;
static int64_t x276 = -1LL;
static int32_t x300 = -4924;
int8_t x309 = INT8_MIN;
static int32_t x310 = INT32_MAX;
static uint32_t x312 = 19U;
static uint8_t x332 = 1U;
int8_t x346 = INT8_MIN;
int8_t x367 = INT8_MIN;
volatile int32_t x388 = 1;
int8_t x391 = INT8_MIN;
volatile uint64_t x393 = UINT64_MAX;
volatile int16_t x394 = -1;
int8_t x402 = -15;
volatile uint64_t x406 = 4470828LLU;
int16_t x415 = INT16_MAX;
volatile int64_t t77 = 54488092602147LL;
static int64_t x425 = INT64_MIN;
volatile uint64_t x435 = 26759831LLU;
static volatile int32_t x443 = -23418;
static volatile int64_t t82 = -9676335LL;
static volatile int8_t x448 = -1;
uint8_t x453 = UINT8_MAX;
int64_t x454 = -3257458030470LL;
static volatile uint32_t x467 = UINT32_MAX;
static int32_t x475 = INT32_MAX;
int64_t t89 = -186480000636091839LL;
int16_t x477 = INT16_MAX;
int16_t x482 = INT16_MAX;
uint16_t x486 = UINT16_MAX;
int32_t x487 = -1;
uint64_t x488 = 36861534461LLU;
int32_t t93 = 41;
uint64_t x494 = 111502155381368736LLU;
int32_t x501 = 1630;
int32_t x509 = INT32_MIN;
uint64_t t97 = 50007LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x3 = 1458145LLU;
	volatile int8_t x4 = 0;
	uint64_t t0 = 73125LLU;

	t0 = (x1+(x2-(x3-x4)));

	if (t0 != 9223372036853350430LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	uint16_t x7 = 5903U;

	t1 = (x5+(x6-(x7-x8)));

	if (t1 != 64735027511610LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int64_t x10 = -5404476390976396LL;
	uint32_t x12 = UINT32_MAX;
	int64_t t2 = -93200305LL;

	t2 = (x9+(x10-(x11-x12)));

	if (t2 != -5404480685943310LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int8_t x15 = INT8_MAX;
	volatile uint16_t x16 = UINT16_MAX;

	t3 = (x13+(x14-(x15-x16)));

	if (t3 != -9223372036854710528LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 3731;

	t4 = (x17+(x18-(x19-x20)));

	if (t4 != -65026) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 33U;
	static volatile uint64_t x22 = 15008361LLU;
	volatile int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	uint64_t t5 = 512187LLU;

	t5 = (x21+(x22-(x23-x24)));

	if (t5 != 15008394LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3916160791971LLU;
	int16_t x26 = -1;
	int64_t x27 = -1LL;
	int16_t x28 = -1;
	static uint64_t t6 = 3156265305441190LLU;

	t6 = (x25+(x26-(x27-x28)));

	if (t6 != 3916160791970LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	static uint64_t x36 = 134892077353066LLU;
	uint64_t t7 = 23425LLU;

	t7 = (x33+(x34-(x35-x36)));

	if (t7 != 134894224837756LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 16U;
	volatile int8_t x38 = INT8_MIN;
	int32_t x40 = INT32_MAX;

	t8 = (x37+(x38-(x39-x40)));

	if (t8 != 2147483536) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = -1;
	volatile int8_t x46 = INT8_MIN;
	volatile int64_t x47 = -1LL;
	uint8_t x48 = 0U;
	volatile int64_t t9 = -7753513797LL;

	t9 = (x45+(x46-(x47-x48)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	int64_t t10 = 15766659LL;

	t10 = (x49+(x50-(x51-x52)));

	if (t10 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	uint16_t x54 = 26026U;
	static uint8_t x55 = UINT8_MAX;
	volatile uint16_t x56 = 13506U;
	static volatile int64_t t11 = 252304079391557379LL;

	t11 = (x53+(x54-(x55-x56)));

	if (t11 != -9223372036854736531LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = 1072511137817LL;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 61LLU;
	uint64_t t12 = 130LLU;

	t12 = (x61+(x62-(x63-x64)));

	if (t12 != 9223373109365913814LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = -61708;
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = INT64_MAX;
	int64_t t13 = 7365695LL;

	t13 = (x69+(x70-(x71-x72)));

	if (t13 != -2147545356LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x74 = INT16_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	uint64_t t14 = 1001107LLU;

	t14 = (x73+(x74-(x75-x76)));

	if (t14 != 2465150647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	volatile int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MIN;
	volatile uint64_t x80 = 1729969199627455035LLU;
	uint64_t t15 = 22091238927484LLU;

	t15 = (x77+(x78-(x79-x80)));

	if (t15 != 10953341234334714427LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = INT8_MAX;
	volatile int32_t t16 = -10;

	t16 = (x81+(x82-(x83-x84)));

	if (t16 != -55) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 88U;
	static int16_t x88 = INT16_MIN;
	uint64_t t17 = 252713496LLU;

	t17 = (x85+(x86-(x87-x88)));

	if (t17 != 4288789735LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	static int64_t x90 = INT64_MAX;
	int64_t x91 = -1LL;
	volatile int64_t t18 = -50252241812685LL;

	t18 = (x89+(x90-(x91-x92)));

	if (t18 != 9223371792699564647LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x95 = 379507977U;
	int64_t t19 = 854972463038362LL;

	t19 = (x93+(x94-(x95-x96)));

	if (t19 != -4066190003396186LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 1252074606U;
	volatile uint32_t t20 = 2180230U;

	t20 = (x97+(x98-(x99-x100)));

	if (t20 != 1252074478U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = 58725838685278654LL;
	int64_t x102 = -330541080202LL;

	t21 = (x101+(x102-(x103-x104)));

	if (t21 != 58725508144263986LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -1;
	int8_t x106 = -1;
	int32_t x107 = -59;
	int8_t x108 = INT8_MIN;

	t22 = (x105+(x106-(x107-x108)));

	if (t22 != -71) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = -1;
	uint32_t x114 = 333796U;
	int8_t x115 = -1;
	static int16_t x116 = INT16_MAX;
	uint32_t t23 = 264653017U;

	t23 = (x113+(x114-(x115-x116)));

	if (t23 != 366563U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -58638007LL;
	int64_t x118 = INT64_MIN;
	int8_t x119 = 1;
	static uint64_t x120 = 65604335LLU;
	uint64_t t24 = 27541921927LLU;

	t24 = (x117+(x118-(x119-x120)));

	if (t24 != 9223372036861742135LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 2492400492467207602LLU;
	volatile uint16_t x123 = 820U;
	uint8_t x124 = 0U;
	volatile uint64_t t25 = 4260754418378460LLU;

	t25 = (x121+(x122-(x123-x124)));

	if (t25 != 2492400496762174084LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x126 = INT8_MAX;
	volatile int32_t x127 = -1;
	uint64_t x128 = 2251251185475391LLU;
	static uint64_t t26 = 103920617256623LLU;

	t26 = (x125+(x126-(x127-x128)));

	if (t26 != 2251251185409333LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	int64_t x132 = 2125368609196LL;
	int64_t t27 = -883859LL;

	t27 = (x129+(x130-(x131-x132)));

	if (t27 != -9223369911486166485LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	uint64_t x139 = 1046571727034603107LLU;
	int64_t x140 = 2204878429510614LL;
	static uint64_t t28 = 659131LLU;

	t28 = (x137+(x138-(x139-x140)));

	if (t28 != 17402377225104426354LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 6U;
	volatile int32_t x142 = 1;
	uint32_t x144 = 61U;
	volatile uint32_t t29 = 172U;

	t29 = (x141+(x142-(x143-x144)));

	if (t29 != 68U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 0U;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = 1046LL;
	int64_t t30 = -375LL;

	t30 = (x145+(x146-(x147-x148)));

	if (t30 != -97257LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t t31 = 278;

	t31 = (x149+(x150-(x151-x152)));

	if (t31 != -2147483559) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x153 = INT8_MIN;
	volatile int8_t x154 = -1;
	static int16_t x155 = INT16_MIN;

	t32 = (x153+(x154-(x155-x156)));

	if (t32 != 234784007) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 106U;
	static volatile uint32_t x160 = 80U;
	int64_t t33 = -895593418888LL;

	t33 = (x157+(x158-(x159-x160)));

	if (t33 != -9223372032559808666LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x164 = 0;

	t34 = (x161+(x162-(x163-x164)));

	if (t34 != 533LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 112921778327512LLU;
	int8_t x167 = INT8_MIN;
	uint64_t t35 = 246914978871201345LLU;

	t35 = (x165+(x166-(x167-x168)));

	if (t35 != 112921778327639LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x169 = INT8_MAX;
	int16_t x170 = 1430;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 190614852;
	volatile int32_t t36 = -94176632;

	t36 = (x169+(x170-(x171-x172)));

	if (t36 != 190616537) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x182 = 2691573948493701LLU;
	static int8_t x183 = 23;
	uint64_t x184 = 105LLU;
	static volatile uint64_t t37 = 1389304730386190LLU;

	t37 = (x181+(x182-(x183-x184)));

	if (t37 != 2691573948501050LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = 245474;
	volatile int8_t x186 = INT8_MAX;
	static int8_t x188 = INT8_MIN;

	t38 = (x185+(x186-(x187-x188)));

	if (t38 != 278241) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int8_t x191 = -35;
	volatile uint64_t x192 = 62993467514LLU;
	uint64_t t39 = 337314211108286LLU;

	t39 = (x189+(x190-(x191-x192)));

	if (t39 != 60845951133LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = 3;
	volatile int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	int16_t x196 = -167;
	static volatile int64_t t40 = -5338691445472960LL;

	t40 = (x193+(x194-(x195-x196)));

	if (t40 != 9223372036854775516LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = 1;
	int16_t x198 = INT16_MIN;
	volatile int8_t x199 = 20;
	uint16_t x200 = 1306U;
	volatile int32_t t41 = -2;

	t41 = (x197+(x198-(x199-x200)));

	if (t41 != -31481) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MAX;
	volatile int16_t x207 = -1;
	static uint32_t x208 = 3U;

	t42 = (x205+(x206-(x207-x208)));

	if (t42 != 9223372032559808770LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = -1;
	int8_t x212 = 1;
	volatile int32_t t43 = -507266154;

	t43 = (x209+(x210-(x211-x212)));

	if (t43 != 696) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 23U;
	int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;

	t44 = (x213+(x214-(x215-x216)));

	if (t44 != -9223372036854775402LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x222 = -7;
	static uint32_t x223 = 338100U;
	uint16_t x224 = 7563U;
	uint32_t t45 = 7029703U;

	t45 = (x221+(x222-(x223-x224)));

	if (t45 != 4262424104U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x225 = 78469U;
	int16_t x226 = -5;
	int16_t x228 = -1;
	static uint64_t t46 = 2052219194949LLU;

	t46 = (x225+(x226-(x227-x228)));

	if (t46 != 78456LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = 1;
	uint32_t x238 = 5060U;

	t47 = (x237+(x238-(x239-x240)));

	if (t47 != 4294938741U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MAX;
	int64_t x247 = 104085LL;
	static int32_t x248 = -1;
	uint64_t t48 = 1174636785975687297LLU;

	t48 = (x245+(x246-(x247-x248)));

	if (t48 != 2147379560LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x249 = 235;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MAX;

	t49 = (x249+(x250-(x251-x252)));

	if (t49 != -2147483413) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x253 = 45U;
	static volatile uint16_t x254 = UINT16_MAX;
	int64_t x255 = -147945022LL;
	int8_t x256 = -1;
	int64_t t50 = -34942677LL;

	t50 = (x253+(x254-(x255-x256)));

	if (t50 != 148010601LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	uint64_t x266 = 15LLU;
	uint64_t t51 = 976106LLU;

	t51 = (x265+(x266-(x267-x268)));

	if (t51 != 14LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x273 = 1U;
	int32_t x275 = INT32_MAX;
	static volatile int64_t t52 = 1707375586078249LL;

	t52 = (x273+(x274-(x275-x276)));

	if (t52 != -2147516415LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x277 = 695LLU;
	volatile uint64_t x278 = 6LLU;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = -1;
	uint64_t t53 = 52626927025190LLU;

	t53 = (x277+(x278-(x279-x280)));

	if (t53 != 828LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x285 = 9;
	uint8_t x286 = 5U;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = INT8_MIN;
	int64_t t54 = -675LL;

	t54 = (x285+(x286-(x287-x288)));

	if (t54 != 9223372036854775694LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = 11513;
	int16_t x290 = 225;
	int16_t x291 = INT16_MIN;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t55 = -191;

	t55 = (x289+(x290-(x291-x292)));

	if (t55 != 44761) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 0U;
	uint16_t x299 = 431U;
	volatile int32_t t56 = -164144;

	t56 = (x297+(x298-(x299-x300)));

	if (t56 != -38123) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = 7;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = 1;
	volatile uint64_t t57 = 73898397LLU;

	t57 = (x305+(x306-(x307-x308)));

	if (t57 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x311 = 1735428996U;
	static uint32_t t58 = 2473U;

	t58 = (x309+(x310-(x311-x312)));

	if (t58 != 412054542U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x317 = UINT64_MAX;
	volatile int64_t x318 = -1LL;
	uint64_t x319 = 437941144520087LLU;
	uint64_t x320 = 468310925762360582LLU;
	static volatile uint64_t t59 = 3352670062LLU;

	t59 = (x317+(x318-(x319-x320)));

	if (t59 != 467872984617840493LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = 53U;
	int16_t x323 = -1;
	volatile int32_t x324 = INT32_MAX;
	volatile uint32_t t60 = 118195U;

	t60 = (x321+(x322-(x323-x324)));

	if (t60 != 2147483573U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x325 = 10U;
	int8_t x326 = 43;
	int64_t x327 = 66310854LL;
	volatile int16_t x328 = -1;
	volatile int64_t t61 = -5699LL;

	t61 = (x325+(x326-(x327-x328)));

	if (t61 != -66310802LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x329 = -53417922256317LL;
	volatile int8_t x330 = -1;
	static int32_t x331 = INT32_MAX;
	int64_t t62 = -7800315725510641LL;

	t62 = (x329+(x330-(x331-x332)));

	if (t62 != -53420069739964LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x337 = -1;
	uint64_t x338 = 162260445002571586LLU;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	volatile uint64_t t63 = 468LLU;

	t63 = (x337+(x338-(x339-x340)));

	if (t63 != 162260447150055105LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x345 = UINT8_MAX;
	volatile int64_t x347 = 8090391469594LL;
	uint16_t x348 = 47U;
	int64_t t64 = -944302415861115888LL;

	t64 = (x345+(x346-(x347-x348)));

	if (t64 != -8090391469420LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x349 = -1LL;
	int8_t x350 = INT8_MIN;
	int32_t x351 = 18198;
	int16_t x352 = -2;
	static int64_t t65 = 130026LL;

	t65 = (x349+(x350-(x351-x352)));

	if (t65 != -18329LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x353 = UINT64_MAX;
	static volatile int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	static uint64_t t66 = 623273LLU;

	t66 = (x353+(x354-(x355-x356)));

	if (t66 != 2147450878LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x357 = -1298066898405224343LL;
	uint32_t x358 = UINT32_MAX;
	static int8_t x359 = 0;
	static int16_t x360 = -2207;
	int64_t t67 = -6040302133381518LL;

	t67 = (x357+(x358-(x359-x360)));

	if (t67 != -1298066894110259255LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x361 = 486539809898LL;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	int64_t x364 = 2362205LL;
	static int64_t t68 = -1256LL;

	t68 = (x361+(x362-(x363-x364)));

	if (t68 != -9223371550312603577LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x365 = UINT64_MAX;
	uint32_t x366 = 7U;
	volatile uint32_t x368 = UINT32_MAX;
	uint64_t t69 = 46916838587149LLU;

	t69 = (x365+(x366-(x367-x368)));

	if (t69 != 133LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x381 = INT8_MIN;
	int64_t x382 = -1734686877530681LL;
	int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	static int64_t t70 = 2069320100LL;

	t70 = (x381+(x382-(x383-x384)));

	if (t70 != -1734686877563576LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = 74370U;
	static volatile int64_t x386 = 882431029042LL;
	int32_t x387 = -1;
	volatile int64_t t71 = -441428LL;

	t71 = (x385+(x386-(x387-x388)));

	if (t71 != 882431103414LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x389 = 17835080U;
	uint64_t x390 = UINT64_MAX;
	int64_t x392 = 15904LL;
	static volatile uint64_t t72 = 270232077808512270LLU;

	t72 = (x389+(x390-(x391-x392)));

	if (t72 != 17851111LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x395 = INT8_MAX;
	static volatile int16_t x396 = 12023;
	uint64_t t73 = 2116980396311826309LLU;

	t73 = (x393+(x394-(x395-x396)));

	if (t73 != 11894LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x401 = 7590U;
	int8_t x403 = INT8_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t74 = -129188531;

	t74 = (x401+(x402-(x403-x404)));

	if (t74 != 7703) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x405 = INT16_MIN;
	static int8_t x407 = INT8_MIN;
	int32_t x408 = -196464;
	uint64_t t75 = 487657LLU;

	t75 = (x405+(x406-(x407-x408)));

	if (t75 != 4241724LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MAX;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	int32_t t76 = -826;

	t76 = (x409+(x410-(x411-x412)));

	if (t76 != 32894) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x413 = INT8_MIN;
	int64_t x414 = INT64_MAX;
	static int16_t x416 = INT16_MAX;

	t77 = (x413+(x414-(x415-x416)));

	if (t77 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = -1;
	int32_t x422 = -1;
	static volatile int8_t x423 = 0;
	uint32_t x424 = 560U;
	uint32_t t78 = 671U;

	t78 = (x421+(x422-(x423-x424)));

	if (t78 != 558U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x426 = 22801453LLU;
	int16_t x427 = INT16_MAX;
	static int64_t x428 = -500LL;
	volatile uint64_t t79 = 1181439LLU;

	t79 = (x425+(x426-(x427-x428)));

	if (t79 != 9223372036877543994LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x429 = UINT64_MAX;
	int8_t x430 = 3;
	int8_t x431 = INT8_MAX;
	static int64_t x432 = 2235888346811739LL;
	volatile uint64_t t80 = 485873122564LLU;

	t80 = (x429+(x430-(x431-x432)));

	if (t80 != 2235888346811614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x433 = 254U;
	int64_t x434 = INT64_MIN;
	uint32_t x436 = 47197U;
	volatile uint64_t t81 = 434635LLU;

	t81 = (x433+(x434-(x435-x436)));

	if (t81 != 9223372036828063428LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x441 = INT64_MAX;
	static int16_t x442 = INT16_MIN;
	int32_t x444 = -3505;

	t82 = (x441+(x442-(x443-x444)));

	if (t82 != 9223372036854762952LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x445 = 6783171;
	int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	int32_t t83 = -12;

	t83 = (x445+(x446-(x447-x448)));

	if (t83 != -2140700350) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = INT8_MAX;
	volatile uint32_t x450 = 775155U;
	int32_t x451 = 1;
	volatile int64_t x452 = -67989LL;
	int64_t t84 = -602361107448244LL;

	t84 = (x449+(x450-(x451-x452)));

	if (t84 != 707292LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x455 = 34;
	int32_t x456 = INT32_MAX;
	int64_t t85 = 233744584483394LL;

	t85 = (x453+(x454-(x455-x456)));

	if (t85 != -3255310546602LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x457 = 394027425347492LLU;
	static uint32_t x458 = 3U;
	static int16_t x459 = INT16_MIN;
	int16_t x460 = 772;
	uint64_t t86 = 86829LLU;

	t86 = (x457+(x458-(x459-x460)));

	if (t86 != 394027425381035LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = INT16_MAX;
	static uint32_t x466 = 71785401U;
	int16_t x468 = -25;
	uint32_t t87 = 189065403U;

	t87 = (x465+(x466-(x467-x468)));

	if (t87 != 71818144U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x469 = 3U;
	uint8_t x470 = 1U;
	uint32_t x471 = 1482295610U;
	uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t88 = 642511743384877907LLU;

	t88 = (x469+(x470-(x471-x472)));

	if (t88 != 18446744072227256009LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x473 = -1;
	int32_t x474 = -1;
	int64_t x476 = -1LL;

	t89 = (x473+(x474-(x475-x476)));

	if (t89 != -2147483650LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x478 = UINT32_MAX;
	uint16_t x479 = 1898U;
	int64_t x480 = -723029LL;
	int64_t t90 = 20708994741860446LL;

	t90 = (x477+(x478-(x479-x480)));

	if (t90 != 4294275135LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x481 = UINT64_MAX;
	int16_t x483 = -1;
	static int32_t x484 = -1;
	uint64_t t91 = 1014848923585640LLU;

	t91 = (x481+(x482-(x483-x484)));

	if (t91 != 32766LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x485 = 1501U;
	volatile uint64_t t92 = 131268789209917333LLU;

	t92 = (x485+(x486-(x487-x488)));

	if (t92 != 36861601498LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = -1;
	volatile int16_t x490 = INT16_MAX;
	volatile int32_t x491 = 4;
	int8_t x492 = INT8_MAX;

	t93 = (x489+(x490-(x491-x492)));

	if (t93 != 32889) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x493 = -127658233;
	volatile int16_t x495 = -1;
	int32_t x496 = INT32_MAX;
	uint64_t t94 = 113812444LLU;

	t94 = (x493+(x494-(x495-x496)));

	if (t94 != 111502157401194151LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x502 = UINT8_MAX;
	int32_t x503 = INT32_MAX;
	int8_t x504 = INT8_MAX;
	volatile int32_t t95 = -2951;

	t95 = (x501+(x502-(x503-x504)));

	if (t95 != -2147481635) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = INT64_MIN;
	volatile uint32_t x506 = 356U;
	int32_t x507 = INT32_MIN;
	int64_t x508 = 5LL;
	volatile int64_t t96 = -28822836371063LL;

	t96 = (x505+(x506-(x507-x508)));

	if (t96 != -9223372034707291799LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x510 = 388;
	uint64_t x511 = 15554695456900876LLU;
	int8_t x512 = -1;

	t97 = (x509+(x510-(x511-x512)));

	if (t97 != 18431189376105167479LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x517 = -1LL;
	int8_t x518 = -1;
	int16_t x519 = -36;
	uint32_t x520 = 6823906U;
	int64_t t98 = -2493344994712LL;

	t98 = (x517+(x518-(x519-x520)));

	if (t98 != 6823940LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x521 = -1;
	int32_t x522 = -1;
	static int64_t x523 = -7LL;
	volatile int8_t x524 = 57;
	static int64_t t99 = 260502461582925183LL;

	t99 = (x521+(x522-(x523-x524)));

	if (t99 != 62LL) { NG(); } else { ; }
	
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


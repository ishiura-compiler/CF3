#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
static int16_t x10 = INT16_MAX;
uint32_t t2 = 189677638U;
int8_t x16 = INT8_MIN;
static uint16_t x21 = 16U;
uint64_t x35 = 17983566096429607LLU;
uint32_t x44 = 39503U;
uint32_t x46 = 40949U;
int32_t x48 = -1;
int64_t t11 = -7321839287LL;
uint64_t x49 = 12LLU;
static int8_t x51 = -56;
static volatile uint16_t x53 = 4685U;
volatile int32_t x54 = -1;
static uint32_t x57 = 7557355U;
int32_t x63 = INT32_MAX;
static volatile int32_t t15 = 786;
int32_t x72 = INT32_MIN;
static int64_t t18 = -6325325609LL;
int32_t x77 = INT32_MIN;
int16_t x82 = -1;
uint16_t x94 = UINT16_MAX;
uint8_t x95 = UINT8_MAX;
volatile int32_t t22 = -7;
volatile int8_t x98 = -1;
static int8_t x99 = 3;
static volatile int16_t x100 = -1;
volatile uint32_t x104 = UINT32_MAX;
static volatile int8_t x112 = INT8_MIN;
volatile int8_t x116 = -1;
static uint64_t t27 = 65570094482205173LLU;
int64_t x118 = INT64_MIN;
uint64_t t28 = 1693130722LLU;
uint64_t x122 = 1893483LLU;
static int32_t x127 = INT32_MAX;
int64_t t33 = -2665736192799053LL;
uint16_t x146 = UINT16_MAX;
int16_t x155 = INT16_MAX;
volatile uint64_t x156 = UINT64_MAX;
int64_t x159 = INT64_MIN;
int32_t x161 = 3091;
uint32_t x168 = 708713U;
static int64_t x177 = INT64_MIN;
volatile uint16_t x183 = UINT16_MAX;
int32_t x185 = INT32_MIN;
volatile int32_t x188 = INT32_MIN;
int32_t x195 = -189110;
int8_t x200 = INT8_MAX;
int8_t x204 = -6;
int32_t x208 = -1;
static int64_t x209 = INT64_MIN;
uint8_t x212 = 54U;
int8_t x215 = INT8_MIN;
volatile int16_t x223 = -1;
uint64_t t52 = UINT64_MAX;
static int16_t x226 = INT16_MAX;
int64_t x229 = INT64_MIN;
uint8_t x233 = UINT8_MAX;
int16_t x240 = INT16_MIN;
static volatile uint16_t x242 = UINT16_MAX;
int32_t x265 = 11850;
uint64_t x269 = UINT64_MAX;
uint32_t x271 = UINT32_MAX;
static uint64_t x272 = 6104962LLU;
volatile int32_t x273 = INT32_MAX;
int64_t x275 = INT64_MIN;
uint32_t x281 = 113U;
volatile uint16_t x282 = 218U;
int8_t x283 = INT8_MAX;
int8_t x284 = -1;
static uint64_t t70 = 5910741773854252566LLU;
uint16_t x300 = UINT16_MAX;
static int8_t x301 = -1;
int16_t x304 = INT16_MAX;
int16_t x307 = 241;
uint64_t t73 = 1268690052LLU;
int16_t x311 = -1;
int64_t t75 = 3104798640861LL;
static uint8_t x317 = UINT8_MAX;
int64_t t76 = -3432178848369LL;
uint16_t x327 = 20149U;
int8_t x330 = -6;
uint32_t t80 = 49809471U;
int32_t x338 = INT32_MAX;
int32_t x339 = INT32_MAX;
volatile int16_t x340 = INT16_MAX;
int32_t x341 = INT32_MAX;
static int64_t x347 = -998LL;
static int64_t t83 = -31LL;
int8_t x351 = -3;
volatile int32_t t86 = 26928;
int32_t x366 = INT32_MIN;
volatile uint32_t t90 = 20U;
uint8_t x385 = 2U;
static int32_t x390 = INT32_MIN;
volatile int64_t t93 = 468298140112343LL;
uint8_t x394 = 0U;
uint16_t x396 = UINT16_MAX;
static volatile int8_t x403 = INT8_MIN;
uint64_t t96 = 1904LLU;
static uint32_t x407 = UINT32_MAX;
int16_t x410 = INT16_MAX;
volatile int64_t t98 = 758792LL;
int16_t x413 = INT16_MIN;
volatile uint16_t x414 = UINT16_MAX;


void f0(void) {
	uint8_t x1 = 1U;
	static int16_t x2 = INT16_MIN;
	static int16_t x3 = -3;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 151;

	t0 = (x1|(x2-(x3%x4)));

	if (t0 != -32765) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 93U;
	int8_t x6 = 1;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = -4746;

	t1 = (x5|(x6-(x7%x8)));

	if (t1 != 221) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 24U;
	static volatile int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MAX;

	t2 = (x9|(x10-(x11%x12)));

	if (t2 != 32766U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 5;
	uint32_t x14 = 1171U;
	int32_t x15 = INT32_MIN;
	uint32_t t3 = 15230160U;

	t3 = (x13|(x14-(x15%x16)));

	if (t3 != 1175U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -30;
	static int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = 44055LL;

	t4 = (x17|(x18-(x19%x20)));

	if (t4 != -30LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	volatile int64_t x23 = 471760689399344847LL;
	uint8_t x24 = 10U;
	int64_t t5 = 15410LL;

	t5 = (x21|(x22-(x23%x24)));

	if (t5 != 65528LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MAX;
	volatile int8_t x27 = -2;
	int64_t x28 = 400216079061300LL;
	int64_t t6 = 1434474913593034157LL;

	t6 = (x25|(x26-(x27%x28)));

	if (t6 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 2267162837022195063LL;
	int16_t x30 = -1;
	int32_t x31 = -432497556;
	static uint8_t x32 = UINT8_MAX;
	volatile int64_t t7 = 1083625364337406885LL;

	t7 = (x29|(x30-(x31%x32)));

	if (t7 != 2267162837022195191LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 12LLU;
	uint8_t x34 = 3U;
	volatile uint16_t x36 = 2877U;
	volatile uint64_t t8 = 3970792596904363LLU;

	t8 = (x33|(x34-(x35%x36)));

	if (t8 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 15499352971983LL;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MIN;
	uint16_t x40 = 1766U;
	int64_t t9 = -222060164LL;

	t9 = (x37|(x38-(x39%x40)));

	if (t9 != 15499352972255LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	volatile int64_t t10 = 4232452LL;

	t10 = (x41|(x42-(x43%x44)));

	if (t10 != -9223372032559830202LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 1732;
	volatile int64_t x47 = INT64_MAX;

	t11 = (x45|(x46-(x47%x48)));

	if (t11 != 40949LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 3LLU;
	int8_t x52 = INT8_MIN;
	uint64_t t12 = 22233339LLU;

	t12 = (x49|(x50-(x51%x52)));

	if (t12 != 63LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x55 = INT64_MIN;
	volatile uint16_t x56 = UINT16_MAX;
	int64_t t13 = 133817LL;

	t13 = (x53|(x54-(x55%x56)));

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = UINT32_MAX;
	int64_t x59 = 3169661033LL;
	int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -489073LL;

	t14 = (x57|(x58-(x59%x60)));

	if (t14 != 4294959103LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = -824;
	int8_t x64 = INT8_MIN;

	t15 = (x61|(x62-(x63%x64)));

	if (t15 != -897) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 43515438U;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = UINT8_MAX;
	volatile int32_t x68 = -1;
	static int64_t t16 = -12719375570545961LL;

	t16 = (x65|(x66-(x67%x68)));

	if (t16 != -9223372036811260370LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 4364782055916696LLU;
	uint32_t x70 = 65513U;
	static uint64_t x71 = 50LLU;
	volatile uint64_t t17 = 3659811LLU;

	t17 = (x69|(x70-(x71%x72)));

	if (t17 != 4364782055980991LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	int8_t x76 = -1;

	t18 = (x73|(x74-(x75%x76)));

	if (t18 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 278579158U;
	volatile uint32_t x79 = 15U;
	volatile uint8_t x80 = UINT8_MAX;
	uint32_t t19 = 10867617U;

	t19 = (x77|(x78-(x79%x80)));

	if (t19 != 2426062791U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int8_t x83 = INT8_MAX;
	static uint8_t x84 = 5U;
	int64_t t20 = 572732855496520537LL;

	t20 = (x81|(x82-(x83%x84)));

	if (t20 != -3LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = 2;
	volatile int32_t x90 = INT32_MAX;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;
	static volatile uint64_t t21 = 25462330LLU;

	t21 = (x89|(x90-(x91%x92)));

	if (t21 != 2147450882LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x93 = -1;
	int32_t x96 = INT32_MIN;

	t22 = (x93|(x94-(x95%x96)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int32_t t23 = 2;

	t23 = (x97|(x98-(x99%x100)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MAX;
	uint32_t x102 = 165607U;
	int8_t x103 = -2;
	volatile uint32_t t24 = 1068018883U;

	t24 = (x101|(x102-(x103%x104)));

	if (t24 != 165631U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 3U;
	uint32_t x106 = UINT32_MAX;
	uint32_t x107 = 3U;
	int16_t x108 = -106;
	uint32_t t25 = UINT32_MAX;

	t25 = (x105|(x106-(x107%x108)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 1033251593U;
	static int16_t x110 = -61;
	int16_t x111 = INT16_MIN;
	volatile uint32_t t26 = 90U;

	t26 = (x109|(x110-(x111%x112)));

	if (t26 != 4294967243U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MAX;
	static volatile uint64_t x114 = 361349025981LLU;
	static int8_t x115 = -4;

	t27 = (x113|(x114-(x115%x116)));

	if (t27 != 362924736511LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	static uint64_t x120 = 33659534438174145LLU;

	t28 = (x117|(x118-(x119%x120)));

	if (t28 != 9222052837412143103LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 3;
	int8_t x123 = INT8_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile uint64_t t29 = 29984124910726946LLU;

	t29 = (x121|(x122-(x123%x124)));

	if (t29 != 1893359LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x125 = INT32_MIN;
	uint16_t x126 = 1373U;
	static int64_t x128 = -1LL;
	volatile int64_t t30 = -8899339LL;

	t30 = (x125|(x126-(x127%x128)));

	if (t30 != -2147482275LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = -1;
	volatile uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t31 = -46419631LL;

	t31 = (x133|(x134-(x135%x136)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 114U;
	int8_t x139 = -1;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t32 = -65501;

	t32 = (x137|(x138-(x139%x140)));

	if (t32 != -13) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 629527342U;
	int16_t x142 = -5;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MAX;

	t33 = (x141|(x142-(x143%x144)));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = 66;
	static volatile uint64_t x147 = 39LLU;
	uint8_t x148 = 12U;
	uint64_t t34 = 2960LLU;

	t34 = (x145|(x146-(x147%x148)));

	if (t34 != 65534LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 56;
	static int32_t x150 = -1187700;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t35 = 14897642;

	t35 = (x149|(x150-(x151%x152)));

	if (t35 != -1187524) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = -1LL;
	static int64_t x154 = -118005852269536LL;
	uint64_t t36 = UINT64_MAX;

	t36 = (x153|(x154-(x155%x156)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 31U;
	static volatile int8_t x158 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	int64_t t37 = 6794334LL;

	t37 = (x157|(x158-(x159%x160)));

	if (t37 != -97LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = UINT32_MAX;
	static uint64_t x163 = 16LLU;
	int8_t x164 = -1;
	uint64_t t38 = 3871LLU;

	t38 = (x161|(x162-(x163%x164)));

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	volatile uint64_t x166 = UINT64_MAX;
	static volatile uint32_t x167 = UINT32_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (x165|(x166-(x167%x168)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile int8_t x170 = INT8_MIN;
	int32_t x171 = -1;
	int64_t x172 = -1504LL;
	int64_t t40 = -4647454LL;

	t40 = (x169|(x170-(x171%x172)));

	if (t40 != -127LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = 2723950799401651LL;
	int64_t x179 = -934923206161120473LL;
	int16_t x180 = 1;
	volatile int64_t t41 = 33650455295382880LL;

	t41 = (x177|(x178-(x179%x180)));

	if (t41 != -9220648086055374157LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x181 = INT64_MAX;
	int32_t x182 = 11;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x181|(x182-(x183%x184)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x186 = 1U;
	static int32_t x187 = -1;
	int32_t t43 = 897;

	t43 = (x185|(x186-(x187%x188)));

	if (t43 != -2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = INT32_MAX;
	volatile uint8_t x190 = 24U;
	volatile int8_t x191 = INT8_MIN;
	static int32_t x192 = -496801129;
	int32_t t44 = INT32_MAX;

	t44 = (x189|(x190-(x191%x192)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = -556;
	int8_t x194 = INT8_MIN;
	int32_t x196 = -1;
	int32_t t45 = 11;

	t45 = (x193|(x194-(x195%x196)));

	if (t45 != -44) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -134;
	int32_t x198 = INT32_MIN;
	volatile int16_t x199 = -1;
	volatile int32_t t46 = -14;

	t46 = (x197|(x198-(x199%x200)));

	if (t46 != -133) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 143370922159031LLU;
	uint64_t x202 = 266611774LLU;
	int32_t x203 = INT32_MIN;
	uint64_t t47 = 55698812347430481LLU;

	t47 = (x201|(x202-(x203%x204)));

	if (t47 != 143371106971639LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MAX;
	volatile int32_t t48 = -68;

	t48 = (x205|(x206-(x207%x208)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x210 = UINT64_MAX;
	static int16_t x211 = 30;
	volatile uint64_t t49 = 37LLU;

	t49 = (x209|(x210-(x211%x212)));

	if (t49 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	uint64_t x214 = 1680043799LLU;
	static uint32_t x216 = UINT32_MAX;
	static volatile uint64_t t50 = 901872606314100922LLU;

	t50 = (x213|(x214-(x215%x216)));

	if (t50 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x217 = 2U;
	uint16_t x218 = 327U;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	volatile int64_t t51 = -61349030899LL;

	t51 = (x217|(x218-(x219%x220)));

	if (t51 != 74LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int16_t x222 = 3047;
	uint16_t x224 = 31U;

	t52 = (x221|(x222-(x223%x224)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	static int32_t t53 = 2858;

	t53 = (x225|(x226-(x227%x228)));

	if (t53 != -2147418113) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = INT64_MIN;
	volatile uint16_t x231 = 521U;
	volatile uint64_t x232 = 828243500LLU;
	uint64_t t54 = 128LLU;

	t54 = (x229|(x230-(x231%x232)));

	if (t54 != 18446744073709551095LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x234 = -1;
	volatile int64_t x235 = INT64_MIN;
	static int16_t x236 = INT16_MIN;
	static int64_t t55 = 606833687315260986LL;

	t55 = (x233|(x234-(x235%x236)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = -1;
	volatile int8_t x239 = INT8_MAX;
	int32_t t56 = -482379477;

	t56 = (x237|(x238-(x239%x240)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x243 = -1LL;
	int64_t x244 = -231LL;
	volatile int64_t t57 = 8052488749556906LL;

	t57 = (x241|(x242-(x243%x244)));

	if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MAX;
	static uint8_t x246 = UINT8_MAX;
	static volatile int64_t x247 = INT64_MAX;
	static int16_t x248 = INT16_MAX;
	int64_t t58 = -555533LL;

	t58 = (x245|(x246-(x247%x248)));

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = -1;
	static int8_t x250 = 1;
	int32_t x251 = INT32_MAX;
	uint32_t x252 = 442989U;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (x249|(x250-(x251%x252)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x253 = -1;
	int8_t x254 = 1;
	volatile int16_t x255 = INT16_MIN;
	uint8_t x256 = 2U;
	volatile int32_t t60 = -2393;

	t60 = (x253|(x254-(x255%x256)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x257 = 0U;
	uint64_t x258 = 4603674439527438LLU;
	int8_t x259 = -61;
	volatile int32_t x260 = INT32_MIN;
	uint64_t t61 = 1493256219LLU;

	t61 = (x257|(x258-(x259%x260)));

	if (t61 != 4603674439527499LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	static int32_t x262 = INT32_MIN;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = -25;
	int64_t t62 = 2LL;

	t62 = (x261|(x262-(x263%x264)));

	if (t62 != -2147483640LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -1;
	static volatile int32_t t63 = -849;

	t63 = (x265|(x266-(x267%x268)));

	if (t63 != -20918) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x270 = INT32_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x269|(x270-(x271%x272)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x274 = INT16_MIN;
	int32_t x276 = -516;
	volatile int64_t t65 = -74082891LL;

	t65 = (x273|(x274-(x275%x276)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = INT8_MIN;
	int32_t x278 = 1381306;
	int32_t x279 = INT32_MIN;
	int8_t x280 = -1;
	volatile int32_t t66 = -28;

	t66 = (x277|(x278-(x279%x280)));

	if (t66 != -70) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t t67 = 49932226U;

	t67 = (x281|(x282-(x283%x284)));

	if (t67 != 251U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = -1;
	int64_t x286 = -417555005049LL;
	int32_t x287 = -1;
	int8_t x288 = -1;
	volatile int64_t t68 = 30LL;

	t68 = (x285|(x286-(x287%x288)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x289 = 0U;
	volatile int64_t x290 = INT64_MAX;
	uint8_t x291 = 22U;
	int64_t x292 = INT64_MIN;
	int64_t t69 = 94LL;

	t69 = (x289|(x290-(x291%x292)));

	if (t69 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = 76LLU;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -1;

	t70 = (x293|(x294-(x295%x296)));

	if (t70 != 18446744073709518924LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = 0;
	int16_t x298 = -1;
	volatile uint16_t x299 = UINT16_MAX;
	volatile int32_t t71 = 0;

	t71 = (x297|(x298-(x299%x300)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x302 = 3U;
	int8_t x303 = 47;
	uint32_t t72 = UINT32_MAX;

	t72 = (x301|(x302-(x303%x304)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MIN;
	uint64_t x306 = 329023256024353LLU;
	int64_t x308 = 410315163327643LL;

	t73 = (x305|(x306-(x307%x308)));

	if (t73 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = UINT16_MAX;
	uint64_t x310 = 105089099LLU;
	int8_t x312 = 1;
	volatile uint64_t t74 = 5244323182967611775LLU;

	t74 = (x309|(x310-(x311%x312)));

	if (t74 != 105119743LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x313 = 0;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int64_t x316 = 31LL;

	t75 = (x313|(x314-(x315%x316)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x318 = 1U;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t x320 = INT64_MAX;

	t76 = (x317|(x318-(x319%x320)));

	if (t76 != -65281LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = 5375U;
	int64_t x323 = -3033LL;
	int16_t x324 = INT16_MIN;
	volatile int64_t t77 = -38575623844096LL;

	t77 = (x321|(x322-(x323%x324)));

	if (t77 != -2147475240LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 29335046280673842LLU;
	int32_t x326 = -1;
	uint64_t x328 = 10LLU;
	volatile uint64_t t78 = 12676757119LLU;

	t78 = (x325|(x326-(x327%x328)));

	if (t78 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 344U;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	int64_t t79 = 4LL;

	t79 = (x329|(x330-(x331%x332)));

	if (t79 != 346LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	static uint32_t x334 = UINT32_MAX;
	int8_t x335 = -7;
	int32_t x336 = -45;

	t80 = (x333|(x334-(x335%x336)));

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	int64_t t81 = 9773LL;

	t81 = (x337|(x338-(x339%x340)));

	if (t81 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x342 = INT16_MIN;
	volatile int8_t x343 = -1;
	static volatile int32_t x344 = INT32_MIN;
	int32_t t82 = 1;

	t82 = (x341|(x342-(x343%x344)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x345 = -1;
	uint8_t x346 = 4U;
	static int64_t x348 = 161LL;

	t83 = (x345|(x346-(x347%x348)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int8_t x350 = INT8_MIN;
	int64_t x352 = INT64_MAX;
	volatile int64_t t84 = -2LL;

	t84 = (x349|(x350-(x351%x352)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	int32_t x354 = -1;
	static int32_t x355 = INT32_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x353|(x354-(x355%x356)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -1;
	int16_t x358 = INT16_MAX;
	int8_t x359 = INT8_MAX;
	uint16_t x360 = 162U;

	t86 = (x357|(x358-(x359%x360)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x361 = -1;
	static volatile int32_t x362 = INT32_MIN;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t87 = -12;

	t87 = (x361|(x362-(x363%x364)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	volatile uint64_t x367 = UINT64_MAX;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t88 = 29795997699LLU;

	t88 = (x365|(x366-(x367%x368)));

	if (t88 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MAX;
	static uint8_t x375 = 1U;
	static uint8_t x376 = 69U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x373|(x374-(x375%x376)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x377 = 1;
	int8_t x378 = -8;
	uint32_t x379 = 63684U;
	static int8_t x380 = -1;

	t90 = (x377|(x378-(x379%x380)));

	if (t90 != 4294903605U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = 408;
	static volatile int64_t x382 = INT64_MIN;
	volatile int16_t x383 = -1;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t91 = 342330LL;

	t91 = (x381|(x382-(x383%x384)));

	if (t91 != -9223372036854775399LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t92 = 20LLU;

	t92 = (x385|(x386-(x387%x388)));

	if (t92 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x389 = INT8_MAX;
	static uint32_t x391 = UINT32_MAX;
	int64_t x392 = INT64_MAX;

	t93 = (x389|(x390-(x391%x392)));

	if (t93 != -6442450817LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x393 = INT32_MIN;
	volatile int16_t x395 = -1;
	int32_t t94 = 30595;

	t94 = (x393|(x394-(x395%x396)));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x397 = 17339827016180LLU;
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = -1LL;
	volatile uint32_t x400 = 24U;
	uint64_t t95 = 682420096406451LLU;

	t95 = (x397|(x398-(x399%x400)));

	if (t95 != 9223389376681791989LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MAX;
	static uint64_t x402 = 165397716514LLU;
	int32_t x404 = 24;

	t96 = (x401|(x402-(x403%x404)));

	if (t96 != 165397725183LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x405 = 31;
	uint64_t x406 = UINT64_MAX;
	volatile int8_t x408 = -2;
	uint64_t t97 = UINT64_MAX;

	t97 = (x405|(x406-(x407%x408)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 6995U;
	uint16_t x411 = 10U;
	int64_t x412 = -23475LL;

	t98 = (x409|(x410-(x411%x412)));

	if (t98 != 32759LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x415 = 2170;
	static uint32_t x416 = 361U;
	volatile uint32_t t99 = 56865U;

	t99 = (x413|(x414-(x415%x416)));

	if (t99 != 4294967291U) { NG(); } else { ; }
	
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


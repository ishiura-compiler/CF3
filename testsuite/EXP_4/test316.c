#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -23;
uint8_t x19 = 16U;
volatile uint64_t t3 = 13488516661139872LLU;
int64_t x25 = 396000021496LL;
int32_t x30 = 114589873;
int32_t x32 = 264;
uint8_t x33 = 18U;
int64_t t6 = -54709LL;
int32_t x45 = 14898726;
int64_t x46 = 1758637LL;
int64_t x49 = INT64_MAX;
uint16_t x51 = 5560U;
int16_t x57 = INT16_MAX;
static uint64_t x58 = 173718LLU;
volatile int16_t x65 = INT16_MIN;
volatile int8_t x72 = INT8_MIN;
volatile int16_t x73 = INT16_MAX;
static int8_t x76 = INT8_MAX;
static int32_t x83 = -11;
int64_t x84 = INT64_MIN;
static int16_t x87 = INT16_MAX;
uint8_t x90 = 115U;
static int64_t x93 = -85695LL;
int16_t x108 = INT16_MAX;
uint32_t x110 = UINT32_MAX;
volatile int64_t x117 = -899671820812550LL;
uint8_t x118 = UINT8_MAX;
static int32_t x133 = -1;
volatile int32_t t28 = 31398;
int64_t x137 = INT64_MIN;
volatile int64_t t29 = 2114549371LL;
int32_t x145 = INT32_MAX;
static uint16_t x146 = 1U;
volatile int32_t x148 = 5;
volatile int8_t x149 = -1;
int64_t x150 = INT64_MIN;
int64_t x157 = 13LL;
volatile uint64_t x158 = 8219707211LLU;
int64_t x160 = INT64_MAX;
int32_t x162 = INT32_MIN;
volatile int64_t x164 = INT64_MAX;
int8_t x167 = INT8_MAX;
int8_t x170 = INT8_MAX;
int16_t x181 = INT16_MAX;
int8_t x183 = INT8_MIN;
uint64_t x184 = 6201346265466509342LLU;
uint64_t t37 = 394128968583936LLU;
uint32_t x191 = 536210397U;
int8_t x200 = INT8_MIN;
uint16_t x205 = UINT16_MAX;
int8_t x218 = -23;
volatile uint16_t x219 = 31U;
uint16_t x223 = 16U;
int8_t x224 = INT8_MAX;
uint16_t x229 = UINT16_MAX;
int8_t x247 = -1;
int64_t x256 = INT64_MIN;
uint64_t t54 = 4128998LLU;
int16_t x263 = 0;
uint16_t x274 = 128U;
volatile uint64_t t57 = 1311848001LLU;
static uint32_t x279 = 134115U;
uint32_t x283 = 2645U;
volatile uint32_t t59 = 158U;
uint64_t t60 = 398347590748139LLU;
int32_t x289 = 54415756;
int32_t x290 = INT32_MAX;
static volatile int16_t x295 = -1;
volatile int16_t x301 = INT16_MIN;
int8_t x302 = 3;
static int32_t x307 = INT32_MIN;
int16_t x312 = INT16_MAX;
volatile int32_t x313 = INT32_MIN;
int16_t x324 = -1;
uint32_t t69 = 473U;
volatile int64_t t70 = 3271895820201788LL;
int64_t x334 = 126777671519LL;
int8_t x341 = 11;
static int32_t x347 = INT32_MIN;
volatile int16_t x348 = INT16_MIN;
int8_t x360 = INT8_MIN;
uint8_t x368 = UINT8_MAX;
int32_t x374 = INT32_MIN;
volatile int64_t t80 = -120604782LL;
static int16_t x377 = 215;
uint32_t x379 = 29U;
uint8_t x384 = 4U;
int8_t x385 = INT8_MIN;
int64_t x393 = -1LL;
volatile int64_t x394 = INT64_MIN;
int32_t x397 = -15;
int64_t x398 = INT64_MIN;
int8_t x400 = -5;
int64_t x408 = -1721067054LL;
static volatile int64_t t87 = -84873789113547213LL;
volatile uint16_t x413 = UINT16_MAX;
int16_t x423 = -1;
int8_t x424 = -1;
uint64_t x429 = 3790449167386081LLU;
int64_t x439 = 15863495117396LL;
int32_t x445 = 2;
int64_t x449 = INT64_MIN;
uint16_t x454 = 1U;
uint64_t x456 = UINT64_MAX;


void f0(void) {
	uint8_t x5 = 1U;
	volatile int8_t x6 = -14;
	volatile int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;

	t0 = (x5/(x6|(x7-x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MIN;
	static volatile int32_t x15 = -37;
	static volatile int16_t x16 = INT16_MIN;
	int64_t t1 = -14577816977557412LL;

	t1 = (x13/(x14|(x15-x16)));

	if (t1 != 249280325320399346LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static volatile uint16_t x20 = 2650U;
	int64_t t2 = 262165687292LL;

	t2 = (x17/(x18|(x19-x20)));

	if (t2 != 3501659846945624LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x21 = 31609915LLU;
	int64_t x22 = INT64_MIN;
	volatile int16_t x23 = INT16_MAX;
	int32_t x24 = 12345;

	t3 = (x21/(x22|(x23-x24)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = INT16_MAX;
	uint8_t x27 = 25U;
	static int16_t x28 = INT16_MIN;
	volatile int64_t t4 = -110764965LL;

	t4 = (x25/(x26|(x27-x28)));

	if (t4 != 6042572LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 1U;
	volatile uint8_t x31 = UINT8_MAX;
	int32_t t5 = 46022;

	t5 = (x29/(x30|(x31-x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 1499U;
	int64_t x36 = -1LL;

	t6 = (x33/(x34|(x35-x36)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 2;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t7 = 27345067;

	t7 = (x37/(x38|(x39-x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	int8_t x42 = 1;
	int32_t x43 = -1;
	volatile int8_t x44 = INT8_MIN;
	static int32_t t8 = -61132305;

	t8 = (x41/(x42|(x43-x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x47 = INT32_MIN;
	static volatile int16_t x48 = -1;
	volatile int64_t t9 = 3813142748309894LL;

	t9 = (x45/(x46|(x47-x48)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -1;
	int16_t x52 = INT16_MAX;
	int64_t t10 = -46499546816LL;

	t10 = (x49/(x50|(x51-x52)));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = 0;
	uint16_t x54 = 2513U;
	int64_t x55 = -1LL;
	uint32_t x56 = 1451385U;
	volatile int64_t t11 = 43118839809395353LL;

	t11 = (x53/(x54|(x55-x56)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t12 = 9785897LLU;

	t12 = (x57/(x58|(x59-x60)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x66 = -29;
	uint64_t x67 = 159961806303385361LLU;
	static volatile uint8_t x68 = 3U;
	uint64_t t13 = 1LLU;

	t13 = (x65/(x66|(x67-x68)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = -1;
	int8_t x70 = -6;
	static volatile int16_t x71 = INT16_MIN;
	volatile int32_t t14 = -10;

	t14 = (x69/(x70|(x71-x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	uint64_t t15 = 62492924576056LLU;

	t15 = (x73/(x74|(x75-x76)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = INT64_MAX;
	uint16_t x82 = 43U;
	int64_t t16 = 983LL;

	t16 = (x81/(x82|(x83-x84)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	uint8_t x86 = 6U;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = 886865334;

	t17 = (x85/(x86|(x87-x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x89 = 2U;
	uint64_t x91 = 2898785LLU;
	int8_t x92 = INT8_MIN;
	uint64_t t18 = 180LLU;

	t18 = (x89/(x90|(x91-x92)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	int64_t t19 = 21518806617LL;

	t19 = (x93/(x94|(x95-x96)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = 1;
	int8_t x98 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	volatile uint32_t x100 = 154788U;
	volatile uint32_t t20 = 1U;

	t20 = (x97/(x98|(x99-x100)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = 861556LL;
	uint64_t x102 = 64051781LLU;
	volatile int64_t x103 = INT64_MIN;
	uint64_t x104 = 126239956164616968LLU;
	uint64_t t21 = 749LLU;

	t21 = (x101/(x102|(x103-x104)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 220121446U;
	static int8_t x106 = INT8_MAX;
	volatile int32_t x107 = 0;
	volatile uint32_t t22 = 0U;

	t22 = (x105/(x106|(x107-x108)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MAX;
	int64_t x111 = -1LL;
	volatile uint32_t x112 = 68041U;
	int64_t t23 = 2956592992763678LL;

	t23 = (x109/(x110|(x111-x112)));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x119 = 795LLU;
	uint64_t x120 = UINT64_MAX;
	uint64_t t24 = 845687664169LLU;

	t24 = (x117/(x118|(x119-x120)));

	if (t24 != 18031128447594075LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile uint16_t x124 = 925U;
	int32_t t25 = -200689;

	t25 = (x121/(x122|(x123-x124)));

	if (t25 != 1092) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = 3;
	int16_t x126 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 8U;
	volatile int32_t t26 = -4692349;

	t26 = (x125/(x126|(x127-x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = 6861;
	int64_t x130 = -1LL;
	int64_t x131 = 1965425424412918931LL;
	uint32_t x132 = 155894410U;
	static volatile int64_t t27 = -124029511810619LL;

	t27 = (x129/(x130|(x131-x132)));

	if (t27 != -6861LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x134 = 54U;
	static int16_t x135 = INT16_MIN;
	volatile int16_t x136 = INT16_MIN;

	t28 = (x133/(x134|(x135-x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x138 = 112U;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = INT8_MAX;

	t29 = (x137/(x138|(x139-x140)));

	if (t29 != -4294967328LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = UINT32_MAX;
	static int8_t x142 = -12;
	uint64_t x143 = 131742297877924LLU;
	int8_t x144 = 42;
	volatile uint64_t t30 = 31021677169390509LLU;

	t30 = (x141/(x142|(x143-x144)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x147 = 0U;
	int32_t t31 = -3955474;

	t31 = (x145/(x146|(x147-x148)));

	if (t31 != -429496729) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t32 = 954919496008134LL;

	t32 = (x149/(x150|(x151-x152)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x159 = -1;
	volatile uint64_t t33 = 118884969941724136LLU;

	t33 = (x157/(x158|(x159-x160)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x163 = 259007U;
	uint64_t t34 = 60155976LLU;

	t34 = (x161/(x162|(x163-x164)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int64_t t35 = 88777204LL;

	t35 = (x165/(x166|(x167-x168)));

	if (t35 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MAX;
	uint8_t x171 = 1U;
	uint16_t x172 = 226U;
	volatile int64_t t36 = 0LL;

	t36 = (x169/(x170|(x171-x172)));

	if (t36 != -71499008037633920LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x182 = 24;

	t37 = (x181/(x182|(x183-x184)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -1;
	int64_t x186 = -1LL;
	int8_t x187 = INT8_MIN;
	int8_t x188 = 1;
	static int64_t t38 = -5LL;

	t38 = (x185/(x186|(x187-x188)));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x190 = -73605736978825028LL;
	int16_t x192 = INT16_MAX;
	int64_t t39 = -30060750413749LL;

	t39 = (x189/(x190|(x191-x192)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = -1;
	static int32_t x194 = INT32_MIN;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t40 = 3930146;

	t40 = (x193/(x194|(x195-x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	volatile int32_t t41 = 44986493;

	t41 = (x197/(x198|(x199-x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x201 = 36U;
	static volatile uint16_t x202 = 8366U;
	int32_t x203 = -1;
	uint32_t x204 = 1U;
	uint32_t t42 = 451106U;

	t42 = (x201/(x202|(x203-x204)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x206 = -1;
	int64_t x207 = -1593117079059113LL;
	volatile int16_t x208 = INT16_MIN;
	static int64_t t43 = 1LL;

	t43 = (x205/(x206|(x207-x208)));

	if (t43 != -65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MAX;
	volatile int8_t x210 = -1;
	uint64_t x211 = 14524276494585618LLU;
	static int32_t x212 = -1;
	volatile uint64_t t44 = 324912938096LLU;

	t44 = (x209/(x210|(x211-x212)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x217 = 6U;
	static uint32_t x220 = 10972U;
	uint32_t t45 = 0U;

	t45 = (x217/(x218|(x219-x220)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	static uint32_t t46 = 900U;

	t46 = (x221/(x222|(x223-x224)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = 9LLU;
	int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	uint32_t x228 = 41906460U;
	uint64_t t47 = 1139LLU;

	t47 = (x225/(x226|(x227-x228)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x230 = 1362U;
	static int8_t x231 = -1;
	uint8_t x232 = UINT8_MAX;
	uint32_t t48 = 15775U;

	t48 = (x229/(x230|(x231-x232)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	uint32_t x234 = 165U;
	static volatile int32_t x235 = INT32_MIN;
	int8_t x236 = -1;
	static uint64_t t49 = 508885597414785968LLU;

	t49 = (x233/(x234|(x235-x236)));

	if (t49 != 8589933932LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 4611346U;
	uint32_t x242 = 200U;
	uint8_t x243 = 30U;
	uint8_t x244 = 27U;
	static volatile uint32_t t50 = 2U;

	t50 = (x241/(x242|(x243-x244)));

	if (t50 != 22715U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MAX;
	static int32_t x246 = INT32_MIN;
	int64_t x248 = -1LL;
	int64_t t51 = -9479969779410LL;

	t51 = (x245/(x246|(x247-x248)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = -14769;
	int16_t x250 = INT16_MIN;
	int32_t x251 = 925404867;
	uint16_t x252 = 2336U;
	volatile int32_t t52 = -1;

	t52 = (x249/(x250|(x251-x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	static volatile int64_t t53 = 4096240415LL;

	t53 = (x253/(x254|(x255-x256)));

	if (t53 != -511LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MIN;
	uint64_t x258 = UINT64_MAX;
	volatile uint64_t x259 = 7635043LLU;
	int32_t x260 = INT32_MAX;

	t54 = (x257/(x258|(x259-x260)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x261 = 6511U;
	uint64_t x262 = UINT64_MAX;
	int8_t x264 = INT8_MAX;
	static uint64_t t55 = 1412163907LLU;

	t55 = (x261/(x262|(x263-x264)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = INT32_MIN;
	volatile int32_t x270 = INT32_MAX;
	volatile int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t56 = 628583;

	t56 = (x269/(x270|(x271-x272)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x273 = -21;
	uint32_t x275 = UINT32_MAX;
	uint64_t x276 = 8692719476265LLU;

	t57 = (x273/(x274|(x275-x276)));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = -1LL;
	static int64_t x278 = -1LL;
	int32_t x280 = INT32_MIN;
	int64_t t58 = -666747LL;

	t58 = (x277/(x278|(x279-x280)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x281 = 180U;
	volatile int16_t x282 = -1;
	int16_t x284 = INT16_MIN;

	t59 = (x281/(x282|(x283-x284)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x285 = -1;
	uint64_t x286 = 89LLU;
	int32_t x287 = INT32_MIN;
	volatile int8_t x288 = -1;

	t60 = (x285/(x286|(x287-x288)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x291 = -1;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t61 = 7170643299LL;

	t61 = (x289/(x290|(x291-x292)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t62 = 5638707666557393703LLU;

	t62 = (x293/(x294|(x295-x296)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = 326U;
	static uint8_t x298 = 54U;
	volatile int32_t x299 = -37;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t63 = -70585LL;

	t63 = (x297/(x298|(x299-x300)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 2313564871390LLU;
	uint64_t t64 = 8554634598476633LLU;

	t64 = (x301/(x302|(x303-x304)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 0U;
	int8_t x306 = -1;
	int64_t x308 = -10LL;
	static int64_t t65 = 1690687865LL;

	t65 = (x305/(x306|(x307-x308)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x311 = 0;
	int32_t t66 = -11717772;

	t66 = (x309/(x310|(x311-x312)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 49LLU;
	static uint64_t t67 = 3644644369075105868LLU;

	t67 = (x313/(x314|(x315-x316)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -7898234026085192LL;
	volatile int16_t x318 = INT16_MAX;
	int64_t x319 = -14449160307LL;
	uint64_t x320 = 1764507661339020LLU;
	uint64_t t68 = 3686703795LLU;

	t68 = (x317/(x318|(x319-x320)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x321 = 1466U;
	uint16_t x322 = 0U;
	static int16_t x323 = INT16_MIN;

	t69 = (x321/(x322|(x323-x324)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x329 = -1LL;
	uint16_t x330 = 268U;
	volatile int32_t x331 = -5936;
	uint32_t x332 = 1718664201U;

	t70 = (x329/(x330|(x331-x332)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = -6906013;
	volatile int64_t x335 = INT64_MAX;
	uint32_t x336 = 32025606U;
	static int64_t t71 = -7LL;

	t71 = (x333/(x334|(x335-x336)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x342 = 9;
	int8_t x343 = -1;
	int64_t x344 = INT64_MIN;
	volatile int64_t t72 = -28275927011884LL;

	t72 = (x341/(x342|(x343-x344)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x345 = INT64_MIN;
	uint32_t x346 = 2010975651U;
	int64_t t73 = 1LL;

	t73 = (x345/(x346|(x347-x348)));

	if (t73 != -2217960714LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = -15;
	static int64_t x350 = INT64_MAX;
	int8_t x351 = 0;
	int8_t x352 = INT8_MIN;
	volatile int64_t t74 = 2894217LL;

	t74 = (x349/(x350|(x351-x352)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = -1LL;
	volatile uint32_t x355 = UINT32_MAX;
	static uint8_t x356 = 1U;
	volatile int64_t t75 = -29LL;

	t75 = (x353/(x354|(x355-x356)));

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = 131LL;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t t76 = 973683LLU;

	t76 = (x357/(x358|(x359-x360)));

	if (t76 != 72340172829655168LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	static uint32_t x364 = 51993061U;
	volatile int64_t t77 = -32421656LL;

	t77 = (x361/(x362|(x363-x364)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x365 = 62LLU;
	int32_t x366 = INT32_MAX;
	int8_t x367 = INT8_MAX;
	volatile uint64_t t78 = 221168277041086488LLU;

	t78 = (x365/(x366|(x367-x368)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t79 = 1085;

	t79 = (x369/(x370|(x371-x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = -1LL;
	int32_t x375 = -165701;
	int16_t x376 = INT16_MIN;

	t80 = (x373/(x374|(x375-x376)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x378 = INT16_MIN;
	uint16_t x380 = 5997U;
	uint32_t t81 = 137U;

	t81 = (x377/(x378|(x379-x380)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = 120U;
	int8_t x382 = INT8_MAX;
	int64_t x383 = 849045LL;
	int64_t t82 = 1LL;

	t82 = (x381/(x382|(x383-x384)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x386 = 5382LL;
	static volatile uint32_t x387 = 52948752U;
	volatile int16_t x388 = INT16_MIN;
	static volatile int64_t t83 = -342339230LL;

	t83 = (x385/(x386|(x387-x388)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x395 = -69807;
	int16_t x396 = -1;
	int64_t t84 = -27445394528396370LL;

	t84 = (x393/(x394|(x395-x396)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x399 = INT32_MIN;
	int64_t t85 = -71525618LL;

	t85 = (x397/(x398|(x399-x400)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = INT16_MIN;
	int64_t x402 = INT64_MIN;
	static int16_t x403 = INT16_MIN;
	int64_t x404 = -131476790LL;
	int64_t t86 = 292686933541813LL;

	t86 = (x401/(x402|(x403-x404)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = 10;
	int16_t x406 = -1;
	int8_t x407 = -1;

	t87 = (x405/(x406|(x407-x408)));

	if (t87 != -10LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x409 = INT64_MAX;
	uint16_t x410 = 680U;
	uint16_t x411 = UINT16_MAX;
	static volatile uint32_t x412 = 3U;
	int64_t t88 = -248591382LL;

	t88 = (x409/(x410|(x411-x412)));

	if (t88 != 140746078814240LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x414 = INT64_MIN;
	uint8_t x415 = 4U;
	static uint16_t x416 = 18898U;
	volatile int64_t t89 = 11639794LL;

	t89 = (x413/(x414|(x415-x416)));

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 3073U;
	int8_t x418 = INT8_MIN;
	int32_t x419 = 15;
	volatile uint16_t x420 = 332U;
	int32_t t90 = -270721232;

	t90 = (x417/(x418|(x419-x420)));

	if (t90 != -50) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x421 = INT8_MIN;
	static uint8_t x422 = 48U;
	volatile int32_t t91 = -759861410;

	t91 = (x421/(x422|(x423-x424)));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x425 = UINT32_MAX;
	uint8_t x426 = 7U;
	volatile int8_t x427 = -3;
	uint32_t x428 = 536U;
	uint32_t t92 = 289711U;

	t92 = (x425/(x426|(x427-x428)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = 1334U;
	uint64_t t93 = 516233159LLU;

	t93 = (x429/(x430|(x431-x432)));

	if (t93 != 882532LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = -1;
	volatile uint32_t x434 = 7002U;
	uint64_t x435 = 58829111850324283LLU;
	int64_t x436 = -1LL;
	volatile uint64_t t94 = 82233122629892558LLU;

	t94 = (x433/(x434|(x435-x436)));

	if (t94 != 313LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = INT8_MAX;
	uint8_t x438 = 2U;
	static uint32_t x440 = UINT32_MAX;
	static volatile int64_t t95 = -92LL;

	t95 = (x437/(x438|(x439-x440)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x441 = UINT8_MAX;
	volatile int8_t x442 = 12;
	uint16_t x443 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t96 = 36;

	t96 = (x441/(x442|(x443-x444)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x446 = INT32_MIN;
	static uint64_t x447 = 150740845799999LLU;
	int64_t x448 = INT64_MIN;
	volatile uint64_t t97 = 32000891362LLU;

	t97 = (x445/(x446|(x447-x448)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x450 = -13967750329083LL;
	int64_t x451 = -10266816446551310LL;
	static int32_t x452 = -499;
	int64_t t98 = -168663606042LL;

	t98 = (x449/(x450|(x451-x452)));

	if (t98 != 977861LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = INT32_MIN;
	int32_t x455 = -1;
	uint64_t t99 = 63414845591034144LLU;

	t99 = (x453/(x454|(x455-x456)));

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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


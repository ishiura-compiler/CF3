#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = -5;
uint32_t t2 = 4834118U;
uint32_t x24 = 132526U;
int32_t x25 = 74207323;
uint64_t x27 = UINT64_MAX;
static volatile uint64_t t4 = 10638LLU;
static int8_t x30 = INT8_MIN;
static volatile uint16_t x33 = UINT16_MAX;
int8_t x35 = INT8_MIN;
static volatile int32_t t8 = 49161;
int32_t x56 = INT32_MAX;
static volatile uint32_t t9 = 11318016U;
int8_t x57 = -1;
static uint64_t x65 = 93438143505061950LLU;
static int16_t x66 = INT16_MIN;
static int32_t x71 = -1;
int64_t x76 = -3328LL;
static int32_t t14 = -379218;
volatile int8_t x100 = INT8_MAX;
int16_t x107 = INT16_MIN;
int64_t t20 = -5647852524027037LL;
uint16_t x129 = 34U;
int16_t x131 = -1585;
int8_t x133 = 1;
static uint32_t x134 = 2487467U;
uint64_t x138 = 13465796168529LLU;
int8_t x139 = -1;
int16_t x140 = -2468;
int16_t x141 = INT16_MAX;
int16_t x154 = 191;
uint8_t x156 = UINT8_MAX;
uint16_t x163 = 2947U;
static uint64_t x165 = 187LLU;
volatile uint32_t x167 = 257940U;
uint16_t x179 = UINT16_MAX;
static int8_t x181 = INT8_MIN;
volatile uint8_t x182 = UINT8_MAX;
volatile int16_t x199 = 80;
int64_t x209 = INT64_MIN;
int64_t x211 = -650211313798LL;
static int32_t x223 = 477510;
uint64_t t37 = 471917662930866912LLU;
static int64_t x239 = -1LL;
uint16_t x253 = UINT16_MAX;
int32_t x261 = 1515;
uint64_t x268 = UINT64_MAX;
int8_t x287 = INT8_MIN;
volatile uint32_t x299 = 506U;
int8_t x316 = -14;
volatile int32_t x326 = -1;
volatile int32_t x362 = -1;
uint32_t x367 = UINT32_MAX;
static uint64_t x384 = UINT64_MAX;
volatile int32_t t57 = -117749821;
volatile int32_t x399 = -1;
static uint64_t t59 = 14945209817LLU;
int8_t x401 = INT8_MIN;
static int32_t x403 = -1;
static uint64_t x408 = 3LLU;
int8_t x409 = 4;
static int8_t x410 = 17;
int16_t x412 = -1;
uint32_t t62 = 30151012U;
uint64_t x419 = 2750963213LLU;
uint64_t t65 = 5899489803LLU;
int32_t x434 = -1;
volatile int8_t x436 = INT8_MIN;
volatile int32_t t67 = -28417768;
uint16_t x445 = UINT16_MAX;
static int8_t x456 = -1;
uint64_t x462 = 2LLU;
int8_t x466 = -1;
int32_t t73 = -78651;
int32_t x474 = -1;
int32_t x481 = -1;
int16_t x482 = INT16_MIN;
int8_t x484 = 60;
uint32_t t76 = UINT32_MAX;
int16_t x511 = -7270;
int64_t x513 = INT64_MAX;
uint64_t x514 = 29312LLU;
static volatile uint64_t t81 = 2LLU;
static int32_t x533 = -16532;
volatile int16_t x534 = -1;
static volatile int32_t x548 = 51742;
int8_t x555 = INT8_MIN;
uint32_t x565 = UINT32_MAX;
volatile int64_t t86 = 228917641LL;
int32_t x571 = INT32_MIN;
static uint64_t t87 = 64629216918571LLU;
volatile int32_t t88 = 1;
int64_t x586 = -876938060106LL;
static volatile int64_t x608 = -1LL;
uint64_t x617 = UINT64_MAX;
static int8_t x619 = -1;
volatile uint64_t x630 = 45024008334971180LLU;
uint64_t x634 = 12417418487LLU;
static uint16_t x638 = 45U;
volatile int64_t x648 = -1LL;
int32_t x657 = INT32_MAX;
int16_t x658 = -386;


void f0(void) {
	volatile int32_t x6 = INT32_MAX;
	static uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 113375956U;
	static volatile uint32_t t0 = UINT32_MAX;

	t0 = (x5|(x6*(x7-x8)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = -6;
	volatile uint64_t x15 = 32088709911952602LLU;
	volatile uint8_t x16 = UINT8_MAX;
	uint64_t t1 = 17006714080459LLU;

	t1 = (x13|(x14*(x15-x16)));

	if (t1 != 18446744072004737246LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 669055144U;

	t2 = (x17|(x18*(x19-x20)));

	if (t2 != 4294956032U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 15374537LL;
	uint8_t x22 = UINT8_MAX;
	static uint8_t x23 = 0U;
	int64_t t3 = -14458866004501LL;

	t3 = (x21|(x22*(x23-x24)));

	if (t3 != 4261339119LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x26 = 51540U;
	uint64_t x28 = 225088626860766LLU;

	t4 = (x25|(x26*(x27-x28)));

	if (t4 != 6845676245375350751LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 871U;
	static volatile int32_t x31 = -480451;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t5 = 873U;

	t5 = (x29|(x30*(x31-x32)));

	if (t5 != 61481959U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x34 = UINT32_MAX;
	volatile int16_t x36 = -3;
	volatile uint32_t t6 = 50716U;

	t6 = (x33|(x34*(x35-x36)));

	if (t6 != 65535U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 1188U;
	volatile int16_t x43 = -1;
	int32_t x44 = -1;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x41|(x42*(x43-x44)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MAX;
	int32_t x47 = -1;
	int16_t x48 = INT16_MIN;

	t8 = (x45|(x46*(x47-x48)));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	volatile int8_t x54 = INT8_MIN;
	uint32_t x55 = 1495266U;

	t9 = (x53|(x54*(x55-x56)));

	if (t9 != 4103602175U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = 0;
	int32_t t10 = -717916284;

	t10 = (x57|(x58*(x59-x60)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x67 = INT8_MIN;
	int8_t x68 = 14;
	volatile uint64_t t11 = 286263LLU;

	t11 = (x65|(x66*(x67-x68)));

	if (t11 != 93438143509256254LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = UINT16_MAX;
	uint8_t x72 = 1U;
	static volatile int32_t t12 = -42;

	t12 = (x69|(x70*(x71-x72)));

	if (t12 != -65537) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	static int64_t t13 = -760897900LL;

	t13 = (x73|(x74*(x75-x76)));

	if (t13 != -104857600LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	int16_t x83 = -1;
	volatile uint16_t x84 = 224U;

	t14 = (x81|(x82*(x83-x84)));

	if (t14 != -31) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MIN;
	static uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 1U;
	uint32_t x92 = UINT32_MAX;
	static volatile uint64_t t15 = 842220053481LLU;

	t15 = (x89|(x90*(x91-x92)));

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	uint32_t x94 = 1072U;
	static int16_t x95 = 21;
	int32_t x96 = -1;
	uint32_t t16 = UINT32_MAX;

	t16 = (x93|(x94*(x95-x96)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x97 = 691U;
	volatile uint64_t x98 = 19707966707141LLU;
	volatile uint64_t x99 = 58670LLU;
	uint64_t t17 = 18674303408981LLU;

	t17 = (x97|(x98*(x99-x100)));

	if (t17 != 1153763494936156091LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = 5;
	static volatile int16_t x104 = INT16_MIN;
	volatile int32_t t18 = 626696290;

	t18 = (x101|(x102*(x103-x104)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = INT64_MAX;
	int64_t x106 = -1LL;
	int8_t x108 = INT8_MAX;
	int64_t t19 = INT64_MAX;

	t19 = (x105|(x106*(x107-x108)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x109 = -554228025562LL;
	static uint8_t x110 = 4U;
	int8_t x111 = -1;
	static int8_t x112 = INT8_MAX;

	t20 = (x109|(x110*(x111-x112)));

	if (t20 != -218LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x130 = -1;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t21 = 974918;

	t21 = (x129|(x130*(x131-x132)));

	if (t21 != 67122) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x135 = 2U;
	uint16_t x136 = 979U;
	static uint32_t t22 = 0U;

	t22 = (x133|(x134*(x135-x136)));

	if (t22 != 1864712037U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x137 = 105U;
	volatile uint64_t t23 = 446224386LLU;

	t23 = (x137|(x138*(x139-x140)));

	if (t23 != 33220119147761147LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x142 = 26690U;
	volatile int8_t x143 = -1;
	static uint16_t x144 = UINT16_MAX;
	int32_t t24 = 571224913;

	t24 = (x141|(x142*(x143-x144)));

	if (t24 != -1749123073) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = -23;
	volatile int8_t x147 = -42;
	int32_t x148 = -1;
	int32_t t25 = 15878784;

	t25 = (x145|(x146*(x147-x148)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x153 = UINT64_MAX;
	static uint16_t x155 = 48U;
	uint64_t t26 = UINT64_MAX;

	t26 = (x153|(x154*(x155-x156)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x157 = UINT64_MAX;
	static int8_t x158 = INT8_MIN;
	int8_t x159 = -14;
	int32_t x160 = -735836;
	static uint64_t t27 = UINT64_MAX;

	t27 = (x157|(x158*(x159-x160)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x161 = UINT64_MAX;
	volatile int32_t x162 = INT32_MAX;
	static uint32_t x164 = 16205976U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x161|(x162*(x163-x164)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x166 = 20151LLU;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t29 = 102347157067460140LLU;

	t29 = (x165|(x166*(x167-x168)));

	if (t29 != 5192610491LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x177 = 0U;
	static int16_t x178 = INT16_MAX;
	static uint64_t x180 = 37803975475LLU;
	uint64_t t30 = 3181294892LLU;

	t30 = (x177|(x178*(x179-x180)));

	if (t30 != 18445505352992547636LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = -1507950;
	volatile int32_t t31 = -29;

	t31 = (x181|(x182*(x183-x184)));

	if (t31 != -110) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	uint16_t x191 = 2U;
	int16_t x192 = -17;
	static int64_t t32 = INT64_MAX;

	t32 = (x189|(x190*(x191-x192)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x197 = INT8_MIN;
	int16_t x198 = -1;
	uint16_t x200 = 1U;
	volatile int32_t t33 = -3691154;

	t33 = (x197|(x198*(x199-x200)));

	if (t33 != -79) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x201 = -440948610642965967LL;
	int8_t x202 = INT8_MAX;
	volatile uint64_t x203 = 19651601LLU;
	int32_t x204 = -928487325;
	static volatile uint64_t t34 = 7541330414533LLU;

	t34 = (x201|(x202*(x203-x204)));

	if (t34 != 18005795514624174963LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x210 = 1446542LL;
	uint16_t x212 = UINT16_MAX;
	int64_t t35 = -6LL;

	t35 = (x209|(x210*(x211-x212)));

	if (t35 != -940558069083116486LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x221 = INT16_MIN;
	static int8_t x222 = -1;
	int32_t x224 = -1;
	volatile int32_t t36 = -13262075;

	t36 = (x221|(x222*(x223-x224)));

	if (t36 != -18759) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x225 = 17078249;
	int32_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = -1;

	t37 = (x225|(x226*(x227-x228)));

	if (t37 != 17078249LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x237 = 10;
	uint16_t x238 = 3U;
	int16_t x240 = INT16_MAX;
	static int64_t t38 = -171226563LL;

	t38 = (x237|(x238*(x239-x240)));

	if (t38 != -98294LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x245 = -4;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = -1LL;
	int32_t x248 = -12;
	volatile int64_t t39 = 577LL;

	t39 = (x245|(x246*(x247-x248)));

	if (t39 != -4LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x254 = INT16_MIN;
	uint8_t x255 = 6U;
	int32_t x256 = 1;
	static int32_t t40 = -368805994;

	t40 = (x253|(x254*(x255-x256)));

	if (t40 != -131073) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x262 = -1;
	uint64_t x263 = 15053347696LLU;
	uint32_t x264 = UINT32_MAX;
	uint64_t t41 = 4760682981LLU;

	t41 = (x261|(x262*(x263-x264)));

	if (t41 != 18446744062951171567LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x265 = -63;
	volatile int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;
	uint64_t t42 = 1665011259081915LLU;

	t42 = (x265|(x266*(x267-x268)));

	if (t42 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x277 = INT16_MIN;
	int16_t x278 = 0;
	int8_t x279 = INT8_MAX;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t43 = 146U;

	t43 = (x277|(x278*(x279-x280)));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x285 = -1012;
	int32_t x286 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t44 = 24;

	t44 = (x285|(x286*(x287-x288)));

	if (t44 != -884) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x297 = 860U;
	int8_t x298 = -1;
	int16_t x300 = 9624;
	uint32_t t45 = 212U;

	t45 = (x297|(x298*(x299-x300)));

	if (t45 != 9182U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x313 = 725U;
	int8_t x314 = 1;
	int64_t x315 = INT64_MIN;
	volatile int64_t t46 = 5200414LL;

	t46 = (x313|(x314*(x315-x316)));

	if (t46 != -9223372036854775073LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x317 = 983567;
	static volatile int8_t x318 = -1;
	volatile int64_t x319 = 111372LL;
	static int8_t x320 = 7;
	int64_t t47 = 22LL;

	t47 = (x317|(x318*(x319-x320)));

	if (t47 != -45313LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x325 = -3;
	static int16_t x327 = INT16_MIN;
	volatile int8_t x328 = -16;
	volatile int32_t t48 = -42;

	t48 = (x325|(x326*(x327-x328)));

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint64_t x330 = UINT64_MAX;
	volatile int32_t x331 = INT32_MAX;
	int64_t x332 = 7478177528LL;
	volatile uint64_t t49 = 9LLU;

	t49 = (x329|(x330*(x331-x332)));

	if (t49 != 8589934591LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x337 = 9U;
	uint16_t x338 = 187U;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = 12302;
	int32_t t50 = -912581;

	t50 = (x337|(x338*(x339-x340)));

	if (t50 != 9954571) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	static int8_t x343 = 0;
	int8_t x344 = -1;
	static volatile int64_t t51 = 164LL;

	t51 = (x341|(x342*(x343-x344)));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x361 = 29845LLU;
	int64_t x363 = -128LL;
	uint32_t x364 = 17104816U;
	uint64_t t52 = 290871683LLU;

	t52 = (x361|(x362*(x363-x364)));

	if (t52 != 17134773LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x365 = -1LL;
	uint64_t x366 = UINT64_MAX;
	uint32_t x368 = 109398377U;
	uint64_t t53 = UINT64_MAX;

	t53 = (x365|(x366*(x367-x368)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x369 = INT64_MIN;
	static int32_t x370 = -1;
	volatile int64_t x371 = 4207704419104467LL;
	int32_t x372 = INT32_MAX;
	int64_t t54 = 0LL;

	t54 = (x369|(x370*(x371-x372)));

	if (t54 != -4207702271620820LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x373 = -1;
	int64_t x374 = -1LL;
	static uint32_t x375 = 9458U;
	int16_t x376 = INT16_MIN;
	volatile int64_t t55 = 1503601197LL;

	t55 = (x373|(x374*(x375-x376)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x381 = INT8_MIN;
	uint8_t x382 = UINT8_MAX;
	static uint16_t x383 = 3U;
	volatile uint64_t t56 = 569007726144065365LLU;

	t56 = (x381|(x382*(x383-x384)));

	if (t56 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x385 = 5;
	int16_t x386 = INT16_MAX;
	uint8_t x387 = 7U;
	int8_t x388 = -1;

	t57 = (x385|(x386*(x387-x388)));

	if (t57 != 262141) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -19140986057LL;
	uint8_t x392 = 11U;
	volatile int64_t t58 = -22575256596346LL;

	t58 = (x389|(x390*(x391-x392)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x397 = INT8_MAX;
	int64_t x398 = INT64_MIN;
	static uint64_t x400 = 514888713091154LLU;

	t59 = (x397|(x398*(x399-x400)));

	if (t59 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x402 = 10549884LLU;
	volatile int8_t x404 = INT8_MIN;
	static volatile uint64_t t60 = 16909LLU;

	t60 = (x401|(x402*(x403-x404)));

	if (t60 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x405 = 7600012485876LL;
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	uint64_t t61 = 166420871887LLU;

	t61 = (x405|(x406*(x407-x408)));

	if (t61 != 7600012486132LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x411 = 195881U;

	t62 = (x409|(x410*(x411-x412)));

	if (t62 != 3329998U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x413 = 3;
	volatile int32_t x414 = -83;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 12866U;
	int32_t t63 = 9807;

	t63 = (x413|(x414*(x415-x416)));

	if (t63 != 1078503) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x417 = INT8_MIN;
	volatile int32_t x418 = 5;
	volatile int16_t x420 = -1;
	volatile uint64_t t64 = 291458LLU;

	t64 = (x417|(x418*(x419-x420)));

	if (t64 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x421 = INT8_MAX;
	static uint64_t x422 = UINT64_MAX;
	uint8_t x423 = UINT8_MAX;
	int16_t x424 = -708;

	t65 = (x421|(x422*(x423-x424)));

	if (t65 != 18446744073709550719LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = INT64_MIN;
	int8_t x427 = -1;
	uint64_t x428 = 21LLU;
	volatile uint64_t t66 = 1952428LLU;

	t66 = (x425|(x426*(x427-x428)));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x433 = -1;
	int8_t x435 = INT8_MIN;

	t67 = (x433|(x434*(x435-x436)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x437 = 16606U;
	static uint32_t x438 = 40U;
	int32_t x439 = INT32_MIN;
	volatile uint64_t x440 = 8023LLU;
	volatile uint64_t t68 = 60LLU;

	t68 = (x437|(x438*(x439-x440)));

	if (t68 != 18446743987809901310LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x446 = 202097613U;
	static int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MIN;
	static uint32_t t69 = 4U;

	t69 = (x445|(x446*(x447-x448)));

	if (t69 != 1642528767U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x453 = 19119;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = 0LLU;
	uint64_t t70 = 92405LLU;

	t70 = (x453|(x454*(x455-x456)));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x457 = -1LL;
	uint8_t x458 = 3U;
	int16_t x459 = -53;
	volatile uint32_t x460 = 560U;
	int64_t t71 = -1LL;

	t71 = (x457|(x458*(x459-x460)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x461 = 50;
	volatile int64_t x463 = -87350177269328LL;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t72 = 832LLU;

	t72 = (x461|(x462*(x463-x464)));

	if (t72 != 18446569373355078514LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x465 = UINT16_MAX;
	static int32_t x467 = -57792;
	uint16_t x468 = UINT16_MAX;

	t73 = (x465|(x466*(x467-x468)));

	if (t73 != 131071) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x469 = 18203LLU;
	int8_t x470 = INT8_MIN;
	int8_t x471 = 1;
	int16_t x472 = -33;
	uint64_t t74 = 218452625800759LLU;

	t74 = (x469|(x470*(x471-x472)));

	if (t74 != 18446744073709547291LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x473 = INT8_MIN;
	volatile int64_t x475 = 66627532LL;
	uint8_t x476 = 14U;
	static volatile int64_t t75 = -24959883LL;

	t75 = (x473|(x474*(x475-x476)));

	if (t75 != -62LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x483 = 416809860U;

	t76 = (x481|(x482*(x483-x484)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x493 = 734138;
	int8_t x494 = INT8_MAX;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = INT8_MIN;
	int32_t t77 = 295200868;

	t77 = (x493|(x494*(x495-x496)));

	if (t77 != -3424326) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x497 = 73U;
	volatile int64_t x498 = -1LL;
	uint16_t x499 = 1U;
	int8_t x500 = INT8_MIN;
	volatile int64_t t78 = -319143702966LL;

	t78 = (x497|(x498*(x499-x500)));

	if (t78 != -129LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x501 = 2U;
	static uint64_t x502 = UINT64_MAX;
	volatile int32_t x503 = -1;
	int64_t x504 = -1LL;
	uint64_t t79 = 29268057LLU;

	t79 = (x501|(x502*(x503-x504)));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x509 = 6568535459011941LLU;
	volatile int8_t x510 = 2;
	int32_t x512 = -1;
	uint64_t t80 = 0LLU;

	t80 = (x509|(x510*(x511-x512)));

	if (t80 != 18446744073709543287LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x515 = UINT16_MAX;
	uint32_t x516 = UINT32_MAX;

	t81 = (x513|(x514*(x515-x516)));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x535 = INT64_MIN;
	int32_t x536 = -1;
	int64_t t82 = 344439042531LL;

	t82 = (x533|(x534*(x535-x536)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x541 = INT64_MIN;
	int8_t x542 = -1;
	uint64_t x543 = 22568LLU;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t83 = 1205LLU;

	t83 = (x541|(x542*(x543-x544)));

	if (t83 != 18446744073709528920LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x545 = 19468LLU;
	volatile int16_t x546 = 165;
	int16_t x547 = -1;
	uint64_t t84 = 21699709896713LLU;

	t84 = (x545|(x546*(x547-x548)));

	if (t84 != 18446744073701031437LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x553 = 7806496U;
	uint16_t x554 = 214U;
	int32_t x556 = 113;
	volatile uint32_t t85 = 2131358U;

	t85 = (x553|(x554*(x555-x556)));

	if (t85 != 4294917802U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x566 = 3U;
	int64_t x567 = -1LL;
	volatile int16_t x568 = -1;

	t86 = (x565|(x566*(x567-x568)));

	if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x569 = INT8_MIN;
	uint64_t x570 = UINT64_MAX;
	int8_t x572 = INT8_MIN;

	t87 = (x569|(x570*(x571-x572)));

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x573 = INT16_MIN;
	static int32_t x574 = -1;
	static int32_t x575 = INT32_MAX;
	uint8_t x576 = UINT8_MAX;

	t88 = (x573|(x574*(x575-x576)));

	if (t88 != -32512) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x581 = INT16_MAX;
	uint64_t x582 = 391LLU;
	uint32_t x583 = UINT32_MAX;
	uint64_t x584 = UINT64_MAX;
	uint64_t t89 = 1063492834LLU;

	t89 = (x581|(x582*(x583-x584)));

	if (t89 != 1679332245503LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x585 = INT32_MIN;
	uint64_t x587 = UINT64_MAX;
	int64_t x588 = INT64_MIN;
	uint64_t t90 = 20850871071028LLU;

	t90 = (x585|(x586*(x587-x588)));

	if (t90 != 18446744072326799690LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x589 = -1LL;
	uint16_t x590 = UINT16_MAX;
	int64_t x591 = 14LL;
	int32_t x592 = INT32_MAX;
	int64_t t91 = 476084708083589320LL;

	t91 = (x589|(x590*(x591-x592)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x605 = 1760298072552LLU;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MAX;
	volatile uint64_t t92 = 68913177384LLU;

	t92 = (x605|(x606*(x607-x608)));

	if (t92 != 18446675465263446504LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x618 = -1;
	int8_t x620 = INT8_MIN;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x617|(x618*(x619-x620)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x621 = -255;
	int16_t x622 = 2;
	uint32_t x623 = UINT32_MAX;
	volatile int8_t x624 = INT8_MAX;
	static volatile uint32_t t94 = 11588221U;

	t94 = (x621|(x622*(x623-x624)));

	if (t94 != 4294967041U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x629 = INT16_MIN;
	uint16_t x631 = 4U;
	static volatile uint32_t x632 = 29037U;
	uint64_t t95 = 391333814245198LLU;

	t95 = (x629|(x630*(x631-x632)));

	if (t95 != 18446744073709521140LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x633 = INT16_MAX;
	static int32_t x635 = -958304;
	int32_t x636 = 279890490;
	uint64_t t96 = 28133308546302833LLU;

	t96 = (x633|(x634*(x635-x636)));

	if (t96 != 14959327067042316287LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x637 = 17658U;
	static uint32_t x639 = 5631U;
	static volatile int32_t x640 = INT32_MIN;
	volatile uint32_t t97 = 1U;

	t97 = (x637|(x638*(x639-x640)));

	if (t97 != 2147737083U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x645 = INT32_MIN;
	uint8_t x646 = 45U;
	int32_t x647 = INT32_MIN;
	volatile int64_t t98 = 284469514918426LL;

	t98 = (x645|(x646*(x647-x648)));

	if (t98 != -2147483603LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x659 = INT32_MIN;
	uint32_t x660 = 69495U;
	uint32_t t99 = 819480U;

	t99 = (x657|(x658*(x659-x660)));

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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


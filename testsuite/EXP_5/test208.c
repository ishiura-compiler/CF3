#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = -3703;
static uint32_t x7 = 126U;
volatile int32_t x8 = -1;
uint32_t t0 = 338198428U;
int8_t x18 = INT8_MIN;
static volatile int64_t t3 = -30818049111LL;
static int16_t x26 = 16;
static uint32_t x32 = UINT32_MAX;
uint16_t x34 = 7288U;
uint64_t x41 = 28830LLU;
int8_t x42 = INT8_MIN;
uint8_t x49 = 1U;
volatile int8_t x53 = INT8_MAX;
uint64_t x68 = UINT64_MAX;
static int16_t x72 = 18;
int32_t x74 = INT32_MAX;
int16_t x76 = -1802;
uint64_t t13 = 61620773734249435LLU;
int32_t x81 = -242224000;
static int8_t x82 = 6;
int32_t t14 = 225097329;
int64_t x93 = -7392590LL;
uint8_t x95 = UINT8_MAX;
static uint64_t x100 = 167203LLU;
static volatile int32_t t19 = -233;
int8_t x111 = INT8_MIN;
int16_t x123 = -1;
int32_t x131 = INT32_MIN;
volatile uint16_t x134 = 17433U;
int16_t x139 = -1;
volatile uint64_t t25 = 55215044LLU;
int8_t x148 = -1;
int8_t x160 = -1;
int16_t x173 = -57;
static volatile int32_t x174 = INT32_MIN;
uint32_t t32 = 799231253U;
volatile int16_t x182 = INT16_MIN;
static uint32_t x185 = UINT32_MAX;
static volatile uint32_t t34 = 0U;
volatile int32_t x190 = 816;
volatile uint32_t x191 = 2710U;
volatile int32_t t37 = 439871819;
volatile int64_t t38 = -1LL;
uint16_t x222 = 83U;
volatile int32_t x231 = -1;
static uint64_t x232 = UINT64_MAX;
int16_t x235 = INT16_MIN;
int8_t x250 = INT8_MIN;
volatile int32_t t45 = -2813;
static int8_t x262 = -3;
uint16_t x268 = UINT16_MAX;
static int8_t x274 = 20;
uint8_t x275 = UINT8_MAX;
uint32_t x294 = 739744U;
int16_t x310 = -14560;
static volatile int32_t x312 = -917;
int32_t t55 = 7;
int32_t x316 = INT32_MIN;
uint64_t t58 = 9LLU;
int64_t x329 = INT64_MIN;
static int64_t x330 = 985628LL;
volatile int8_t x332 = -1;
static volatile int64_t t59 = -503LL;
static uint32_t t60 = 391936381U;
int32_t x347 = 296307534;
static int8_t x348 = 1;
uint32_t t63 = 52665U;
int64_t x368 = -1LL;
volatile int64_t t65 = -118456191167380LL;
int64_t x402 = 66912LL;
uint16_t x404 = 83U;
int16_t x419 = -7871;
volatile uint32_t x421 = 7U;
uint8_t x422 = 6U;
int8_t x429 = -1;
int64_t x430 = -266376646LL;
int8_t x432 = INT8_MIN;
uint16_t x442 = 172U;
static volatile int64_t x443 = -1LL;
int64_t t75 = 526094124144937LL;
volatile uint16_t x460 = UINT16_MAX;
uint64_t x463 = 380LLU;
int32_t x466 = -1;
static int8_t x467 = INT8_MAX;
int32_t t79 = 0;
int64_t x470 = -4225115276LL;
uint64_t x480 = 192524689LLU;
int32_t x482 = 363;
int64_t x484 = -1LL;
uint8_t x487 = UINT8_MAX;
int64_t x490 = -1LL;
uint32_t x499 = 23581351U;
static int8_t x505 = 3;
int8_t x508 = INT8_MAX;
static volatile int64_t x522 = -94643264LL;
int64_t x526 = 9329LL;
uint16_t x529 = UINT16_MAX;
int32_t x531 = 190;
uint32_t x534 = 186035U;
uint8_t x535 = 13U;
uint64_t t94 = 3862948LLU;
static uint16_t x578 = 1025U;
int8_t x596 = INT8_MIN;


void f0(void) {
	static int8_t x5 = INT8_MAX;

	t0 = (x5^((x6-x7)*x8));

	if (t0 != 3722U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static int16_t x10 = -1;
	volatile int8_t x11 = -1;
	uint8_t x12 = 4U;
	int64_t t1 = INT64_MAX;

	t1 = (x9^((x10-x11)*x12));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 176U;
	volatile uint32_t x14 = UINT32_MAX;
	static uint16_t x15 = UINT16_MAX;
	int32_t x16 = -1;
	volatile uint32_t t2 = 950U;

	t2 = (x13^((x14-x15)*x16));

	if (t2 != 65712U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int64_t x19 = -1LL;
	static volatile uint32_t x20 = UINT32_MAX;

	t3 = (x17^((x18-x19)*x20));

	if (t3 != -545460846592LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	uint16_t x27 = 37U;
	uint16_t x28 = 1709U;
	int32_t t4 = -96008;

	t4 = (x25^((x26-x27)*x28));

	if (t4 != -2147447760) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	int16_t x31 = -43;
	volatile uint32_t t5 = 109U;

	t5 = (x29^((x30-x31)*x32));

	if (t5 != 32726U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	static uint64_t x35 = 1087569338848021649LLU;
	int32_t x36 = INT32_MIN;
	uint64_t t6 = 1941231631LLU;

	t6 = (x33^((x34-x35)*x36));

	if (t6 != 10903839274155704319LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x43 = 235181027LLU;
	uint32_t x44 = 1U;
	volatile uint64_t t7 = 25738441LLU;

	t7 = (x41^((x42-x43)*x44));

	if (t7 != 18446744073474349827LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x45 = -1;
	int8_t x46 = -1;
	static volatile uint32_t x47 = 11690U;
	static volatile uint8_t x48 = UINT8_MAX;
	volatile uint32_t t8 = 11U;

	t8 = (x45^((x46-x47)*x48));

	if (t8 != 2981204U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x50 = -13;
	int8_t x51 = -1;
	int32_t x52 = -1;
	volatile int32_t t9 = 0;

	t9 = (x49^((x50-x51)*x52));

	if (t9 != 13) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = INT16_MAX;
	static uint8_t x55 = 57U;
	static volatile uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 853240LLU;

	t10 = (x53^((x54-x55)*x56));

	if (t10 != 18446744073709518917LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -1;
	int8_t x66 = INT8_MIN;
	uint32_t x67 = 0U;
	static volatile uint64_t t11 = 1632LLU;

	t11 = (x65^((x66-x67)*x68));

	if (t11 != 4294967167LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 1733U;
	static volatile uint16_t x70 = 1365U;
	int64_t x71 = -112139906426994087LL;
	int64_t t12 = 15211435345LL;

	t12 = (x69^((x70-x71)*x72));

	if (t12 != 2018518315685917565LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = INT32_MIN;
	uint64_t x75 = 60291LLU;

	t13 = (x73^((x74-x75)*x76));

	if (t13 != 3867726696232LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x83 = -1;
	uint16_t x84 = 275U;

	t14 = (x81^((x82-x83)*x84));

	if (t14 != -242224379) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -1;
	uint16_t x86 = 1U;
	int16_t x87 = -1;
	int16_t x88 = -1;
	static int32_t t15 = -2903493;

	t15 = (x85^((x86-x87)*x88));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x94 = 2787800U;
	volatile uint16_t x96 = UINT16_MAX;
	static int64_t t16 = -3122914025567005411LL;

	t16 = (x93^((x94-x95)*x96));

	if (t16 != -2296298091LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x97 = INT8_MIN;
	volatile int8_t x98 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	uint64_t t17 = 3301LLU;

	t17 = (x97^((x98-x99)*x100));

	if (t17 != 18446025942313993251LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x102 = 1983890213U;
	int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	uint32_t t18 = 15280662U;

	t18 = (x101^((x102-x103)*x104));

	if (t18 != 2657943552U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x105 = INT32_MIN;
	volatile uint16_t x106 = 62U;
	volatile int8_t x107 = -1;
	int32_t x108 = -1;

	t19 = (x105^((x106-x107)*x108));

	if (t19 != 2147483585) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	static uint32_t x110 = UINT32_MAX;
	int32_t x112 = INT32_MIN;
	uint32_t t20 = 132109762U;

	t20 = (x109^((x110-x111)*x112));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = UINT8_MAX;
	volatile uint16_t x118 = 47U;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -21;
	static int32_t t21 = -101613395;

	t21 = (x117^((x118-x119)*x120));

	if (t21 != 687343) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t22 = 1583788176LLU;

	t22 = (x121^((x122-x123)*x124));

	if (t22 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int64_t x132 = -783896011LL;
	static int64_t t23 = 9948011115663LL;

	t23 = (x129^((x130-x131)*x132));

	if (t23 != -1683403864571039180LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = -1;
	volatile int8_t x135 = INT8_MAX;
	int8_t x136 = -14;
	int32_t t24 = 9;

	t24 = (x133^((x134-x135)*x136));

	if (t24 != 242283) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 12122598LLU;
	uint16_t x138 = 3U;
	int8_t x140 = -1;

	t25 = (x137^((x138-x139)*x140));

	if (t25 != 18446744073697429018LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x141 = INT64_MAX;
	int8_t x142 = 0;
	volatile uint8_t x143 = 0U;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t26 = 155058283967LLU;

	t26 = (x141^((x142-x143)*x144));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 87U;
	int8_t x146 = 27;
	static volatile int16_t x147 = INT16_MIN;
	volatile int32_t t27 = -6121810;

	t27 = (x145^((x146-x147)*x148));

	if (t27 != -32846) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x157 = -1LL;
	int16_t x158 = -4;
	int16_t x159 = -1;
	volatile int64_t t28 = 3LL;

	t28 = (x157^((x158-x159)*x160));

	if (t28 != -4LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = -3365501LL;
	uint8_t x162 = 2U;
	static int8_t x163 = INT8_MIN;
	static volatile int16_t x164 = 6659;
	volatile int64_t t29 = -2173349LL;

	t29 = (x161^((x162-x163)*x164));

	if (t29 != -4091899LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = -121395LL;
	static int16_t x172 = 7;
	int64_t t30 = 91971410LL;

	t30 = (x169^((x170-x171)*x172));

	if (t30 != 620314LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x175 = UINT64_MAX;
	volatile int32_t x176 = -1;
	uint64_t t31 = 370187325746LLU;

	t31 = (x173^((x174-x175)*x176));

	if (t31 != 18446744071562068024LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x177 = 2U;
	uint32_t x178 = 1457970649U;
	static int32_t x179 = INT32_MIN;
	int32_t x180 = -41180;

	t32 = (x177^((x178-x179)*x180));

	if (t32 != 116504966U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x181 = INT64_MIN;
	static int16_t x183 = INT16_MAX;
	static int64_t x184 = 177LL;
	int64_t t33 = 34488741LL;

	t33 = (x181^((x182-x183)*x184));

	if (t33 != 9223372036843176113LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x186 = 1285U;
	volatile uint8_t x187 = 30U;
	volatile uint32_t x188 = UINT32_MAX;

	t34 = (x185^((x186-x187)*x188));

	if (t34 != 1254U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x189 = 27U;
	int16_t x192 = INT16_MIN;
	volatile uint32_t t35 = 18238233U;

	t35 = (x189^((x190-x191)*x192));

	if (t35 != 62062619U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	uint16_t x196 = 96U;
	static int32_t t36 = 1;

	t36 = (x193^((x194-x195)*x196));

	if (t36 != 2141192192) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	uint16_t x202 = 24U;
	int16_t x203 = 91;
	int16_t x204 = -1;

	t37 = (x201^((x202-x203)*x204));

	if (t37 != -32701) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = -1LL;
	int8_t x206 = 1;
	int16_t x207 = 1;
	static int32_t x208 = INT32_MAX;

	t38 = (x205^((x206-x207)*x208));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = INT32_MIN;
	volatile int64_t x223 = -580729589104047LL;
	int8_t x224 = INT8_MIN;
	int64_t t39 = -3LL;

	t39 = (x221^((x222-x223)*x224));

	if (t39 != 74333385820012288LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x229 = 1753945303LLU;
	int8_t x230 = -2;
	volatile uint64_t t40 = 248LLU;

	t40 = (x229^((x230-x231)*x232));

	if (t40 != 1753945302LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x233 = 0U;
	volatile int16_t x234 = INT16_MAX;
	uint64_t x236 = 141166863466150993LLU;
	volatile uint64_t t41 = 4507899267LLU;

	t41 = (x233^((x234-x235)*x236));

	if (t41 != 9551616325719966639LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x237 = 202160LLU;
	volatile int8_t x238 = -1;
	volatile uint8_t x239 = 48U;
	int16_t x240 = -1;
	uint64_t t42 = 240477LLU;

	t42 = (x237^((x238-x239)*x240));

	if (t42 != 202113LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x245 = 327U;
	uint32_t x246 = 924481303U;
	int64_t x247 = INT64_MAX;
	static int32_t x248 = -1;
	int64_t t43 = 400797376777119LL;

	t43 = (x245^((x246-x247)*x248));

	if (t43 != 9223372035930294703LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (x249^((x250-x251)*x252));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MAX;
	static int16_t x255 = -6414;
	int16_t x256 = -978;

	t45 = (x253^((x254-x255)*x256));

	if (t45 != 38319017) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = 4;
	volatile uint64_t x263 = 113LLU;
	int64_t x264 = INT64_MIN;
	volatile uint64_t t46 = 9682631611LLU;

	t46 = (x261^((x262-x263)*x264));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x265 = -1;
	volatile uint64_t x266 = 73052743840830LLU;
	volatile int16_t x267 = -9;
	uint64_t t47 = 64398273832602LLU;

	t47 = (x265^((x266-x267)*x268));

	if (t47 != 13659232506100167750LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x273 = INT8_MIN;
	int32_t x276 = 90607;
	static int32_t t48 = 8067;

	t48 = (x273^((x274-x275)*x276));

	if (t48 != 21292571) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MAX;
	int64_t x279 = -31809768754664895LL;
	uint8_t x280 = 4U;
	int64_t t49 = 1LL;

	t49 = (x277^((x278-x279)*x280));

	if (t49 != 127239075018680071LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x281 = -1;
	int64_t x282 = -4LL;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	uint64_t t50 = 206259400091761838LLU;

	t50 = (x281^((x282-x283)*x284));

	if (t50 != 32763LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MAX;
	int8_t x295 = 1;
	volatile int8_t x296 = -63;
	volatile uint32_t t51 = 316448U;

	t51 = (x293^((x294-x295)*x296));

	if (t51 != 4248363424U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 28505U;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	int64_t x300 = -1LL;
	int64_t t52 = -261197LL;

	t52 = (x297^((x298-x299)*x300));

	if (t52 != 28454LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x301 = -93;
	uint32_t x302 = 7U;
	static int32_t x303 = INT32_MIN;
	volatile int16_t x304 = INT16_MIN;
	uint32_t t53 = 4324U;

	t53 = (x301^((x302-x303)*x304));

	if (t53 != 229283U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = INT8_MIN;
	static volatile int16_t x306 = INT16_MIN;
	int32_t x307 = -2199;
	int8_t x308 = INT8_MAX;
	static volatile int32_t t54 = 152725792;

	t54 = (x305^((x306-x307)*x308));

	if (t54 != 3882345) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x309 = INT32_MIN;
	int8_t x311 = -1;

	t55 = (x309^((x310-x311)*x312));

	if (t55 != -2134133045) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x313 = -1006872895LL;
	uint64_t x314 = UINT64_MAX;
	static uint64_t x315 = 59LLU;
	volatile uint64_t t56 = 7LLU;

	t56 = (x313^((x314-x315)*x316));

	if (t56 != 18446743943853659841LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x317 = INT8_MIN;
	static int64_t x318 = 82227640713480LL;
	int32_t x319 = -18211;
	static int32_t x320 = -1;
	int64_t t57 = -1LL;

	t57 = (x317^((x318-x319)*x320));

	if (t57 != 82227640731733LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 2006U;
	int16_t x324 = 0;

	t58 = (x321^((x322-x323)*x324));

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x331 = -1;

	t59 = (x329^((x330-x331)*x332));

	if (t59 != 9223372036853790179LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MIN;

	t60 = (x337^((x338-x339)*x340));

	if (t60 != 4128895U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x341 = 0;
	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 12052U;
	static int16_t x344 = INT16_MIN;
	int32_t t61 = -1;

	t61 = (x341^((x342-x343)*x344));

	if (t61 != -1752530944) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x345 = UINT8_MAX;
	volatile int64_t x346 = -1LL;
	static volatile int64_t t62 = -1050114129112347412LL;

	t62 = (x345^((x346-x347)*x348));

	if (t62 != -296307634LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x349 = 819U;
	volatile uint32_t x350 = UINT32_MAX;
	int16_t x351 = 5;
	static uint8_t x352 = 70U;

	t63 = (x349^((x350-x351)*x352));

	if (t63 != 4294966639U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x357 = INT32_MAX;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	volatile int8_t x360 = -1;
	volatile int32_t t64 = -7;

	t64 = (x357^((x358-x359)*x360));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = -9;
	uint8_t x367 = 0U;

	t65 = (x365^((x366-x367)*x368));

	if (t65 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = -408;
	volatile uint64_t x382 = 27027809639916314LLU;
	static uint8_t x383 = UINT8_MAX;
	static uint64_t x384 = 4614734LLU;
	uint64_t t66 = 267560730LLU;

	t66 = (x381^((x382-x383)*x384));

	if (t66 != 10731335575593413714LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x385 = INT64_MIN;
	static uint64_t x386 = 387670286272622LLU;
	static int16_t x387 = INT16_MAX;
	int8_t x388 = -1;
	uint64_t t67 = 1579623129LLU;

	t67 = (x385^((x386-x387)*x388));

	if (t67 != 9222984366568535953LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x389 = -1;
	volatile int16_t x390 = INT16_MAX;
	int16_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t68 = 6072;

	t68 = (x389^((x390-x391)*x392));

	if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile uint8_t x403 = UINT8_MAX;
	int64_t t69 = -102008232065LL;

	t69 = (x401^((x402-x403)*x404));

	if (t69 != 5532556LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = 31488740231LL;
	volatile int16_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile uint64_t t70 = 187357649048946LLU;

	t70 = (x413^((x414-x415)*x416));

	if (t70 != 18446736044080792455LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = -1;
	int8_t x420 = INT8_MAX;
	volatile int32_t t71 = 337257;

	t71 = (x417^((x418-x419)*x420));

	if (t71 != -2146484158) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x423 = 1851080LLU;
	static int32_t x424 = INT32_MIN;
	volatile uint64_t t72 = 28759LLU;

	t72 = (x421^((x422-x423)*x424));

	if (t72 != 3975151146237959LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = 160586;
	uint64_t x426 = 126723218LLU;
	volatile int16_t x427 = 0;
	int64_t x428 = INT64_MIN;
	uint64_t t73 = 137638394169198LLU;

	t73 = (x425^((x426-x427)*x428));

	if (t73 != 160586LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x431 = UINT8_MAX;
	static int64_t t74 = -6578675114477LL;

	t74 = (x429^((x430-x431)*x432));

	if (t74 != -34096243329LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x441 = UINT16_MAX;
	uint32_t x444 = 271399682U;

	t75 = (x441^((x442-x443)*x444));

	if (t75 != 46952095653LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x445 = -1;
	volatile uint64_t x446 = 347510741871529LLU;
	int64_t x447 = INT64_MIN;
	static int16_t x448 = INT16_MAX;
	static volatile uint64_t t76 = 1079331816666300123LLU;

	t76 = (x445^((x446-x447)*x448));

	if (t76 != 16283231631659936680LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x457 = INT8_MAX;
	int16_t x458 = -12;
	int16_t x459 = 6;
	volatile int32_t t77 = 3;

	t77 = (x457^((x458-x459)*x460));

	if (t77 != -1179539) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x461 = INT16_MAX;
	static uint64_t x462 = 127611382912LLU;
	int16_t x464 = -1;
	uint64_t t78 = 56008081LLU;

	t78 = (x461^((x462-x463)*x464));

	if (t78 != 18446743946098158339LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x465 = -1;
	volatile int16_t x468 = INT16_MIN;

	t79 = (x465^((x466-x467)*x468));

	if (t79 != -4194305) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x469 = -1;
	static int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MAX;
	volatile int64_t t80 = 4466454638561LL;

	t80 = (x469^((x470-x471)*x472));

	if (t80 != 536589623795LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x477 = 129;
	int8_t x478 = 8;
	int8_t x479 = INT8_MIN;
	uint64_t t81 = 10LLU;

	t81 = (x477^((x478-x479)*x480));

	if (t81 != 26183357833LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x481 = INT8_MIN;
	uint32_t x483 = 142792U;
	int64_t t82 = -1042LL;

	t82 = (x481^((x482-x483)*x484));

	if (t82 != 4294824925LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x485 = -1975622;
	uint16_t x486 = 697U;
	volatile int64_t x488 = -206281172459LL;
	int64_t t83 = -30715153265LL;

	t83 = (x485^((x486-x487)*x488));

	if (t83 != 91176278610680LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x489 = INT32_MIN;
	uint8_t x491 = 0U;
	static int8_t x492 = 58;
	int64_t t84 = -15218LL;

	t84 = (x489^((x490-x491)*x492));

	if (t84 != 2147483590LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x493 = INT16_MIN;
	uint32_t x494 = 12063223U;
	int32_t x495 = INT32_MIN;
	int64_t x496 = -14LL;
	int64_t t85 = -3822694838LL;

	t85 = (x493^((x494-x495)*x496));

	if (t85 != 30233625726LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x497 = -104;
	static uint16_t x498 = UINT16_MAX;
	uint8_t x500 = UINT8_MAX;
	uint32_t t86 = 880043U;

	t86 = (x497^((x498-x499)*x500));

	if (t86 != 1701565744U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x506 = 1;
	static int16_t x507 = INT16_MIN;
	volatile int32_t t87 = -855;

	t87 = (x505^((x506-x507)*x508));

	if (t87 != 4161660) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x521 = INT64_MAX;
	uint16_t x523 = UINT16_MAX;
	int32_t x524 = INT32_MIN;
	int64_t t88 = 3LL;

	t88 = (x521^((x522-x523)*x524));

	if (t88 != 9019986439680557055LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 2U;
	static volatile int64_t x527 = -177210205953LL;
	volatile int16_t x528 = -1248;
	int64_t t89 = -128055178492574LL;

	t89 = (x525^((x526-x527)*x528));

	if (t89 != -221158348671934LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x530 = -1;
	int8_t x532 = INT8_MIN;
	int32_t t90 = 426;

	t90 = (x529^((x530-x531)*x532));

	if (t90 != 41087) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x533 = INT32_MIN;
	uint16_t x536 = UINT16_MAX;
	uint32_t t91 = 84U;

	t91 = (x533^((x534-x535)*x536));

	if (t91 != 1453533530U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x541 = INT32_MIN;
	volatile int8_t x542 = INT8_MIN;
	volatile int64_t x543 = 63230451726LL;
	uint16_t x544 = 320U;
	volatile int64_t t92 = -5557673213160LL;

	t92 = (x541^((x542-x543)*x544));

	if (t92 != 20235584753280LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x545 = INT32_MIN;
	static uint64_t x546 = 11824182LLU;
	int8_t x547 = INT8_MIN;
	uint8_t x548 = UINT8_MAX;
	uint64_t t93 = 7661801968420741LLU;

	t93 = (x545^((x546-x547)*x548));

	if (t93 != 18446744070282299722LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x549 = UINT64_MAX;
	int8_t x550 = -1;
	static int16_t x551 = 1;
	uint8_t x552 = UINT8_MAX;

	t94 = (x549^((x550-x551)*x552));

	if (t94 != 509LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x553 = 414014727U;
	volatile uint16_t x554 = 3363U;
	volatile int64_t x555 = -1LL;
	int16_t x556 = -1;
	int64_t t95 = 254LL;

	t95 = (x553^((x554-x555)*x556));

	if (t95 != -414011429LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x557 = 5324114670LLU;
	volatile int32_t x558 = 507;
	uint16_t x559 = 6U;
	volatile uint64_t x560 = 0LLU;
	volatile uint64_t t96 = 25688218946421255LLU;

	t96 = (x557^((x558-x559)*x560));

	if (t96 != 5324114670LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x561 = INT64_MAX;
	uint64_t x562 = UINT64_MAX;
	int8_t x563 = 0;
	uint64_t x564 = 30292LLU;
	volatile uint64_t t97 = 7LLU;

	t97 = (x561^((x562-x563)*x564));

	if (t97 != 9223372036854806099LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x577 = 7;
	volatile int8_t x579 = INT8_MAX;
	int16_t x580 = -1;
	volatile int32_t t98 = 98673;

	t98 = (x577^((x578-x579)*x580));

	if (t98 != -903) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x593 = 27207;
	static int8_t x594 = INT8_MIN;
	volatile int32_t x595 = -1;
	int32_t t99 = -7435284;

	t99 = (x593^((x594-x595)*x596));

	if (t99 != 21959) { NG(); } else { ; }
	
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


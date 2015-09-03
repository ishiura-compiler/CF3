#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = -1;
static int8_t x10 = 3;
int64_t x12 = INT64_MAX;
int32_t x22 = -418087;
uint16_t x39 = UINT16_MAX;
static int16_t x43 = INT16_MIN;
volatile int8_t x57 = INT8_MAX;
static int16_t x63 = INT16_MAX;
uint64_t x68 = 269854282812614617LLU;
int64_t x79 = INT64_MAX;
volatile uint8_t x80 = UINT8_MAX;
uint16_t x86 = 27421U;
int64_t x91 = INT64_MIN;
int8_t x92 = INT8_MIN;
volatile uint64_t t17 = 107022326896843LLU;
int8_t x95 = INT8_MIN;
int16_t x98 = 1;
static volatile int64_t t19 = 6LL;
uint64_t x104 = 59118439086LLU;
uint16_t x122 = 3537U;
volatile uint64_t t24 = 37542727109LLU;
uint16_t x129 = UINT16_MAX;
int64_t x130 = INT64_MIN;
int32_t x133 = INT32_MIN;
int64_t t27 = 5991622623013358LL;
int64_t x144 = INT64_MIN;
uint16_t x157 = UINT16_MAX;
uint16_t x160 = 3453U;
static volatile uint64_t t31 = 401494965961209LLU;
int16_t x166 = INT16_MAX;
uint64_t x172 = 5257LLU;
int32_t x184 = INT32_MIN;
int8_t x186 = -1;
int16_t x196 = -755;
volatile int32_t t38 = 1646020;
int64_t x222 = -1LL;
volatile int64_t x223 = -258762252509960956LL;
static int8_t x224 = -1;
uint16_t x237 = 13812U;
volatile int32_t x244 = 24318258;
int32_t x247 = -1;
volatile int32_t t43 = -6;
static int8_t x257 = 1;
volatile uint64_t x258 = UINT64_MAX;
static volatile uint64_t x259 = 29547LLU;
int8_t x263 = INT8_MIN;
uint64_t x276 = 1925LLU;
static int32_t x283 = 217582;
int8_t x286 = INT8_MAX;
int64_t x292 = -2497516LL;
int16_t x301 = -1;
uint64_t x307 = UINT64_MAX;
uint8_t x322 = 1U;
int16_t x323 = INT16_MIN;
volatile uint32_t x326 = 8815U;
volatile uint64_t x327 = 244189662111926505LLU;
int16_t x336 = INT16_MAX;
int32_t x338 = -1;
volatile uint64_t x343 = UINT64_MAX;
volatile int8_t x350 = INT8_MIN;
static int16_t x351 = INT16_MIN;
int8_t x352 = INT8_MIN;
volatile int32_t t62 = 1599572;
volatile int8_t x357 = 0;
volatile uint32_t x359 = UINT32_MAX;
uint16_t x364 = 7U;
uint64_t t66 = 98890094LLU;
static int8_t x377 = -1;
uint8_t x387 = 124U;
int8_t x388 = 3;
int64_t t69 = 11611LL;
uint32_t x394 = 98U;
int64_t x396 = -1LL;
int16_t x402 = -60;
static int64_t x413 = INT64_MAX;
static volatile uint64_t t76 = 208LLU;
volatile int8_t x426 = 1;
volatile int32_t t79 = -15055;
uint16_t x433 = 241U;
int32_t x436 = -63637;
static int8_t x454 = -1;
int64_t t85 = -145580645000LL;
int32_t x466 = INT32_MAX;
uint64_t x467 = 34697895054682461LLU;
volatile int16_t x476 = INT16_MIN;
static int16_t x479 = INT16_MAX;
int32_t t89 = -110202809;
static uint64_t x499 = 309LLU;
int8_t x513 = INT8_MIN;
int16_t x518 = INT16_MIN;
static uint32_t x520 = UINT32_MAX;
uint32_t t98 = 31U;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	static volatile uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 1650771145LLU;
	uint64_t t0 = 366842653834557LLU;

	t0 = (x1-(x2+(x3-x4)));

	if (t0 != 1650705483LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x11 = 61U;
	int64_t t1 = -882652894822673LL;

	t1 = (x9-(x10+(x11-x12)));

	if (t1 != 9223372036854775615LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	volatile uint32_t x14 = 12U;
	static volatile uint32_t x15 = 26330138U;
	static int16_t x16 = INT16_MIN;
	volatile uint32_t t2 = 96716U;

	t2 = (x13-(x14+(x15-x16)));

	if (t2 != 4268571610U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 24U;
	static int16_t x18 = INT16_MIN;
	int64_t x19 = 31962370009LL;
	volatile int32_t x20 = -2050268;
	volatile int64_t t3 = -89181LL;

	t3 = (x17-(x18+(x19-x20)));

	if (t3 != -31964387485LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	volatile uint32_t x23 = UINT32_MAX;
	int8_t x24 = 17;
	static uint32_t t4 = 714U;

	t4 = (x21-(x22+(x23-x24)));

	if (t4 != 450872U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -11;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	int32_t x28 = -1;
	int32_t t5 = -676517;

	t5 = (x25-(x26+(x27-x28)));

	if (t5 != -32651) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = -1;
	uint32_t x38 = 508958759U;
	static int8_t x40 = 26;
	uint32_t t6 = 420U;

	t6 = (x37-(x38+(x39-x40)));

	if (t6 != 3785943027U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = -1;
	volatile int32_t x42 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	int64_t t7 = 3135068709926020826LL;

	t7 = (x41-(x42+(x43-x44)));

	if (t7 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	static uint64_t x46 = 145LLU;
	int8_t x47 = -1;
	static int16_t x48 = INT16_MIN;
	volatile uint64_t t8 = 1060162LLU;

	t8 = (x45-(x46+(x47-x48)));

	if (t8 != 9223372036854742896LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 2;
	int64_t x50 = INT64_MIN;
	int8_t x51 = 1;
	int8_t x52 = INT8_MIN;
	int64_t t9 = -63LL;

	t9 = (x49-(x50+(x51-x52)));

	if (t9 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = INT8_MAX;
	volatile int8_t x60 = INT8_MIN;
	int32_t t10 = -180732;

	t10 = (x57-(x58+(x59-x60)));

	if (t10 != -65663) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = -1;
	static volatile uint8_t x64 = 0U;
	volatile int32_t t11 = -12850439;

	t11 = (x61-(x62+(x63-x64)));

	if (t11 != -65534) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = -3069103;
	int32_t x67 = 1;
	volatile uint64_t t12 = 553447421198LLU;

	t12 = (x65-(x66+(x67-x68)));

	if (t12 != 269854282815683974LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x73 = UINT64_MAX;
	static uint16_t x74 = UINT16_MAX;
	volatile uint64_t x75 = 61515LLU;
	volatile int8_t x76 = -1;
	static uint64_t t13 = 298870126LLU;

	t13 = (x73-(x74+(x75-x76)));

	if (t13 != 18446744073709424564LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x77 = -2LL;
	int64_t x78 = INT64_MIN;
	static int64_t t14 = 5555LL;

	t14 = (x77-(x78+(x79-x80)));

	if (t14 != 254LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = 878;
	volatile uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t15 = -96237;

	t15 = (x81-(x82+(x83-x84)));

	if (t15 != -32017) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x85 = 40674U;
	int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile uint32_t t16 = 1012430827U;

	t16 = (x85-(x86+(x87-x88)));

	if (t16 != 4294947782U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1;
	volatile uint64_t x90 = 81425830674929LLU;

	t17 = (x89-(x90+(x91-x92)));

	if (t17 != 9223290611024100750LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	uint64_t t18 = 12105536548243LLU;

	t18 = (x93-(x94+(x95-x96)));

	if (t18 != 9223372036854841472LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	volatile uint8_t x99 = 13U;
	int64_t x100 = -360378LL;

	t19 = (x97-(x98+(x99-x100)));

	if (t19 != -360520LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x101 = INT32_MIN;
	volatile uint32_t x102 = 287244328U;
	static int64_t x103 = -6725640501250LL;
	static uint64_t t20 = 24917LLU;

	t20 = (x101-(x102+(x103-x104)));

	if (t20 != 6782324212360LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = -30;
	int32_t x108 = INT32_MIN;
	volatile int64_t t21 = 76197808090277LL;

	t21 = (x105-(x106+(x107-x108)));

	if (t21 != 9223372034707292189LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MAX;
	uint16_t x110 = 27973U;
	int16_t x111 = 15;
	static uint64_t x112 = 987733891132LLU;
	static uint64_t t22 = 1748900LLU;

	t22 = (x109-(x110+(x111-x112)));

	if (t22 != 989881346791LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 0U;
	volatile uint32_t x114 = 1605U;
	static int64_t x115 = 93LL;
	int8_t x116 = -1;
	int64_t t23 = -5177059644542879LL;

	t23 = (x113-(x114+(x115-x116)));

	if (t23 != -1699LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x121 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = INT32_MIN;

	t24 = (x121-(x122+(x123-x124)));

	if (t24 != 18446744071562064304LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = UINT64_MAX;
	volatile uint32_t x126 = 440701U;
	int16_t x127 = -1;
	volatile uint8_t x128 = 2U;
	static volatile uint64_t t25 = 1LLU;

	t25 = (x125-(x126+(x127-x128)));

	if (t25 != 18446744073709110917LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x131 = -1LL;
	volatile uint64_t x132 = 572858744025762353LLU;
	uint64_t t26 = 81LLU;

	t26 = (x129-(x130+(x131-x132)));

	if (t26 != 9796230780880603697LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x134 = -1LL;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = UINT16_MAX;

	t27 = (x133-(x134+(x135-x136)));

	if (t27 != -2147417984LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x138 = -6079490;
	static volatile uint8_t x139 = 6U;
	int64_t x140 = -49279LL;
	int64_t t28 = -22961973810401LL;

	t28 = (x137-(x138+(x139-x140)));

	if (t28 != 5997437LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MAX;
	volatile int64_t x142 = INT64_MAX;
	uint64_t x143 = UINT64_MAX;
	uint64_t t29 = 42701LLU;

	t29 = (x141-(x142+(x143-x144)));

	if (t29 != 129LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x158 = INT16_MIN;
	int16_t x159 = 338;
	volatile int32_t t30 = 1416;

	t30 = (x157-(x158+(x159-x160)));

	if (t30 != 101418) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x161 = INT8_MIN;
	static uint16_t x162 = 24208U;
	uint64_t x163 = 4184200071LLU;
	volatile uint64_t x164 = 66834227541LLU;

	t31 = (x161-(x162+(x163-x164)));

	if (t31 != 62650003134LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 5637078U;
	volatile int8_t x167 = -1;
	int16_t x168 = -1;
	uint32_t t32 = 808824093U;

	t32 = (x165-(x166+(x167-x168)));

	if (t32 != 5604311U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = -3891LL;
	int64_t x171 = -1LL;
	volatile uint64_t t33 = 626256756870LLU;

	t33 = (x169-(x170+(x171-x172)));

	if (t33 != 9276LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x181 = 1U;
	static int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	volatile int32_t t34 = -19986;

	t34 = (x181-(x182+(x183-x184)));

	if (t34 != -32766) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x187 = -1;
	uint32_t x188 = 2712686U;
	volatile uint32_t t35 = 0U;

	t35 = (x185-(x186+(x187-x188)));

	if (t35 != 2150196336U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x189 = -1;
	volatile uint32_t x190 = 15423U;
	uint8_t x191 = 1U;
	int16_t x192 = INT16_MAX;
	volatile uint32_t t36 = 1998U;

	t36 = (x189-(x190+(x191-x192)));

	if (t36 != 17342U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = 28;
	int64_t x194 = -27943LL;
	int16_t x195 = -566;
	int64_t t37 = 301842456838346178LL;

	t37 = (x193-(x194+(x195-x196)));

	if (t37 != 27782LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = 1;
	static uint8_t x198 = UINT8_MAX;
	int8_t x199 = -1;
	int16_t x200 = 6;

	t38 = (x197-(x198+(x199-x200)));

	if (t38 != -247) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x201 = 2U;
	static volatile int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	volatile uint16_t x204 = UINT16_MAX;
	static int32_t t39 = -385216;

	t39 = (x201-(x202+(x203-x204)));

	if (t39 != 98433) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MAX;
	int64_t t40 = 355758482206205LL;

	t40 = (x221-(x222+(x223-x224)));

	if (t40 != 258762252509993723LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x238 = 263311352238182754LLU;
	int16_t x239 = 5448;
	uint8_t x240 = 67U;
	uint64_t t41 = 5789LLU;

	t41 = (x237-(x238+(x239-x240)));

	if (t41 != 18183432721471377293LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = 15084118541783LLU;
	uint32_t x242 = 12843329U;
	int32_t x243 = 1009919134;
	uint64_t t42 = 516950242206854825LLU;

	t42 = (x241-(x242+(x243-x244)));

	if (t42 != 15083120097578LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x245 = 96179818;
	static volatile int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MAX;

	t43 = (x245-(x246+(x247-x248)));

	if (t43 != 96245354) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x253 = 249U;
	static uint8_t x254 = 13U;
	uint32_t x255 = 12901U;
	volatile int64_t x256 = 6115096342891727LL;
	volatile int64_t t44 = 60011754699527LL;

	t44 = (x253-(x254+(x255-x256)));

	if (t44 != 6115096342879062LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x260 = 5U;
	volatile uint64_t t45 = 162239354246LLU;

	t45 = (x257-(x258+(x259-x260)));

	if (t45 != 18446744073709522076LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x261 = -40;
	uint16_t x262 = 215U;
	static uint32_t x264 = 20694U;
	static uint32_t t46 = 69U;

	t46 = (x261-(x262+(x263-x264)));

	if (t46 != 20567U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x269 = 6U;
	int16_t x270 = -1;
	static uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1;
	int32_t t47 = -2221421;

	t47 = (x269-(x270+(x271-x272)));

	if (t47 != -65529) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = -4;
	uint64_t x274 = 50325LLU;
	static int64_t x275 = 22363899LL;
	static volatile uint64_t t48 = 139359149611LLU;

	t48 = (x273-(x274+(x275-x276)));

	if (t48 != 18446744073687139313LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x281 = UINT64_MAX;
	static volatile int16_t x282 = INT16_MIN;
	uint8_t x284 = 0U;
	uint64_t t49 = 77733658LLU;

	t49 = (x281-(x282+(x283-x284)));

	if (t49 != 18446744073709366801LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x285 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 27961112LLU;
	static volatile uint64_t t50 = 15391489306224LLU;

	t50 = (x285-(x286+(x287-x288)));

	if (t50 != 2175411865LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x289 = INT32_MAX;
	volatile uint32_t x290 = 108058147U;
	static volatile uint16_t x291 = 5602U;
	volatile int64_t t51 = 2042LL;

	t51 = (x289-(x290+(x291-x292)));

	if (t51 != 2036922382LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x302 = INT8_MAX;
	int8_t x303 = -1;
	volatile int16_t x304 = -85;
	volatile int32_t t52 = -69322392;

	t52 = (x301-(x302+(x303-x304)));

	if (t52 != -212) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x305 = INT64_MAX;
	int8_t x306 = -2;
	int8_t x308 = 1;
	static uint64_t t53 = 44439544LLU;

	t53 = (x305-(x306+(x307-x308)));

	if (t53 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x313 = -1LL;
	volatile int64_t x314 = INT64_MIN;
	uint64_t x315 = 5LLU;
	volatile int32_t x316 = -52721514;
	static uint64_t t54 = 5LLU;

	t54 = (x313-(x314+(x315-x316)));

	if (t54 != 9223372036802054288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x317 = 28032755U;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -1;
	uint32_t t55 = 21111093U;

	t55 = (x317-(x318+(x319-x320)));

	if (t55 != 2175516403U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int64_t x324 = 15818480452LL;
	int64_t t56 = 20LL;

	t56 = (x321-(x322+(x323-x324)));

	if (t56 != 15818513474LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x325 = INT64_MIN;
	int32_t x328 = INT32_MIN;
	uint64_t t57 = 17044021018LLU;

	t57 = (x325-(x326+(x327-x328)));

	if (t57 != 8979182372595356840LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = 3743921164830911LL;
	uint16_t x335 = UINT16_MAX;
	int64_t t58 = -18155479257752140LL;

	t58 = (x333-(x334+(x335-x336)));

	if (t58 != -3743921164896447LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x337 = 8U;
	int16_t x339 = 3778;
	int32_t x340 = INT32_MAX;
	static int32_t t59 = -211350;

	t59 = (x337-(x338+(x339-x340)));

	if (t59 != 2147479878) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 129U;
	int16_t x344 = -13199;
	uint64_t t60 = 846467759804266LLU;

	t60 = (x341-(x342+(x343-x344)));

	if (t60 != 18446744073709538161LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = -1;
	static int16_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = 54;
	static volatile int32_t t61 = 1;

	t61 = (x345-(x346+(x347-x348)));

	if (t61 != -65481) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x349 = INT16_MIN;

	t62 = (x349-(x350+(x351-x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = 2527U;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t63 = 2491470161534LLU;

	t63 = (x353-(x354+(x355-x356)));

	if (t63 != 9223372032559805985LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x358 = INT32_MAX;
	uint64_t x360 = 0LLU;
	uint64_t t64 = 15549LLU;

	t64 = (x357-(x358+(x359-x360)));

	if (t64 != 18446744067267100674LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x361 = -1;
	int16_t x362 = -1670;
	volatile int16_t x363 = -10336;
	static volatile int32_t t65 = -130;

	t65 = (x361-(x362+(x363-x364)));

	if (t65 != 12012) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = -1LL;
	static volatile uint8_t x370 = 5U;
	uint64_t x371 = 9476LLU;
	volatile uint64_t x372 = 632225LLU;

	t66 = (x369-(x370+(x371-x372)));

	if (t66 != 622743LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = 859LL;
	uint8_t x374 = 118U;
	static volatile uint64_t x375 = UINT64_MAX;
	int32_t x376 = 145;
	volatile uint64_t t67 = 104LLU;

	t67 = (x373-(x374+(x375-x376)));

	if (t67 != 887LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x378 = INT8_MAX;
	int32_t x379 = -994990920;
	int16_t x380 = -474;
	static int32_t t68 = -45;

	t68 = (x377-(x378+(x379-x380)));

	if (t68 != 994990318) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x385 = -1LL;
	uint16_t x386 = 1541U;

	t69 = (x385-(x386+(x387-x388)));

	if (t69 != -1663LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x389 = -1;
	int8_t x390 = -1;
	volatile uint16_t x391 = 5255U;
	static uint8_t x392 = UINT8_MAX;
	int32_t t70 = 59397030;

	t70 = (x389-(x390+(x391-x392)));

	if (t70 != -5000) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x393 = INT32_MIN;
	volatile int32_t x395 = INT32_MIN;
	int64_t t71 = -17016622314LL;

	t71 = (x393-(x394+(x395-x396)));

	if (t71 != -99LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x401 = -67633670;
	uint64_t x403 = 873007708LLU;
	uint16_t x404 = 504U;
	uint64_t t72 = 424879043531LLU;

	t72 = (x401-(x402+(x403-x404)));

	if (t72 != 18446744072768910802LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x405 = 8139454350384LLU;
	volatile uint32_t x406 = UINT32_MAX;
	static int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t73 = 1440884887732LLU;

	t73 = (x405-(x406+(x407-x408)));

	if (t73 != 8135159383089LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x409 = INT8_MAX;
	static int16_t x410 = 9092;
	uint8_t x411 = 1U;
	int8_t x412 = INT8_MIN;
	volatile int32_t t74 = 1007827507;

	t74 = (x409-(x410+(x411-x412)));

	if (t74 != -9094) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x414 = 183718219076975LLU;
	int8_t x415 = 12;
	static int8_t x416 = INT8_MIN;
	uint64_t t75 = 359LLU;

	t75 = (x413-(x414+(x415-x416)));

	if (t75 != 9223188318635698692LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x417 = 132872692LLU;
	int64_t x418 = 3961242616LL;
	int8_t x419 = INT8_MIN;
	static int32_t x420 = INT32_MIN;

	t76 = (x417-(x418+(x419-x420)));

	if (t76 != 18446744067733698172LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x421 = 7U;
	int8_t x422 = INT8_MIN;
	volatile int32_t x423 = -4390;
	int8_t x424 = INT8_MAX;
	static int32_t t77 = -20589;

	t77 = (x421-(x422+(x423-x424)));

	if (t77 != 4652) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x425 = UINT8_MAX;
	uint32_t x427 = 567U;
	volatile uint32_t x428 = 14783U;
	uint32_t t78 = 37146U;

	t78 = (x425-(x426+(x427-x428)));

	if (t78 != 14470U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = -1;
	int8_t x430 = 1;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = 0U;

	t79 = (x429-(x430+(x431-x432)));

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = -1802;
	int32_t t80 = 1651;

	t80 = (x433-(x434+(x435-x436)));

	if (t80 != -61849) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x441 = -1;
	static int8_t x442 = -1;
	int16_t x443 = INT16_MIN;
	uint64_t x444 = 3270193739202565527LLU;
	volatile uint64_t t81 = 18425639607208LLU;

	t81 = (x441-(x442+(x443-x444)));

	if (t81 != 3270193739202598295LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x449 = 372672U;
	uint32_t x450 = 152313707U;
	volatile int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	volatile uint32_t t82 = 44U;

	t82 = (x449-(x450+(x451-x452)));

	if (t82 != 1995575381U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x455 = INT16_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t83 = 948;

	t83 = (x453-(x454+(x455-x456)));

	if (t83 != 98431) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x457 = -1;
	uint64_t x458 = 18123473955LLU;
	uint64_t x459 = UINT64_MAX;
	static volatile uint8_t x460 = UINT8_MAX;
	uint64_t t84 = 477940068LLU;

	t84 = (x457-(x458+(x459-x460)));

	if (t84 != 18446744055586077916LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x461 = 3259U;
	volatile int32_t x462 = INT32_MIN;
	static volatile int32_t x463 = -32636676;
	int64_t x464 = -1982035838400520LL;

	t85 = (x461-(x462+(x463-x464)));

	if (t85 != -1982033658276937LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x465 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	static uint64_t t86 = 1LLU;

	t86 = (x465-(x466+(x467-x468)));

	if (t86 != 18412046176507352612LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x469 = -1LL;
	int8_t x470 = 38;
	int64_t x471 = -106866LL;
	static int16_t x472 = INT16_MAX;
	int64_t t87 = -283819LL;

	t87 = (x469-(x470+(x471-x472)));

	if (t87 != 139594LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x473 = 3U;
	int8_t x474 = 23;
	volatile uint16_t x475 = 1U;
	volatile int32_t t88 = -2070;

	t88 = (x473-(x474+(x475-x476)));

	if (t88 != -32789) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x477 = 24U;
	volatile int8_t x478 = INT8_MAX;
	int32_t x480 = -914749744;

	t89 = (x477-(x478+(x479-x480)));

	if (t89 != -914782614) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x481 = 1611885240U;
	int16_t x482 = -1;
	int32_t x483 = INT32_MIN;
	volatile int64_t x484 = INT64_MIN;
	volatile int64_t t90 = 16478762LL;

	t90 = (x481-(x482+(x483-x484)));

	if (t90 != -9223372033095406919LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x489 = INT8_MAX;
	int64_t x490 = INT64_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile uint8_t x492 = 81U;
	volatile int64_t t91 = -353433689321026409LL;

	t91 = (x489-(x490+(x491-x492)));

	if (t91 != 9223372032559808721LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x493 = INT64_MIN;
	static int64_t x494 = INT64_MIN;
	int64_t x495 = INT64_MAX;
	static uint64_t x496 = 1366409574027705LLU;
	volatile uint64_t t92 = 504873262034714LLU;

	t92 = (x493-(x494+(x495-x496)));

	if (t92 != 9224738446428803514LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x497 = INT8_MAX;
	int32_t x498 = INT32_MIN;
	volatile int8_t x500 = INT8_MAX;
	static volatile uint64_t t93 = 40656499496275744LLU;

	t93 = (x497-(x498+(x499-x500)));

	if (t93 != 2147483593LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x501 = 1123LL;
	int8_t x502 = 0;
	int64_t x503 = -7LL;
	static int64_t x504 = -1LL;
	static int64_t t94 = 1LL;

	t94 = (x501-(x502+(x503-x504)));

	if (t94 != 1129LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x505 = 796433;
	static uint64_t x506 = UINT64_MAX;
	static int16_t x507 = -1;
	int16_t x508 = INT16_MIN;
	uint64_t t95 = 13763619375LLU;

	t95 = (x505-(x506+(x507-x508)));

	if (t95 != 763667LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x509 = INT8_MIN;
	int32_t x510 = INT32_MIN;
	uint32_t x511 = 49U;
	int16_t x512 = -2;
	static uint32_t t96 = 1591208U;

	t96 = (x509-(x510+(x511-x512)));

	if (t96 != 2147483469U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x514 = INT16_MIN;
	uint16_t x515 = 2620U;
	uint32_t x516 = 168018110U;
	volatile uint32_t t97 = 13188U;

	t97 = (x513-(x514+(x515-x516)));

	if (t97 != 168048130U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x517 = INT32_MIN;
	uint8_t x519 = UINT8_MAX;

	t98 = (x517-(x518+(x519-x520)));

	if (t98 != 2147516160U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = INT64_MIN;
	uint64_t x522 = 657458184905926824LLU;
	volatile int16_t x523 = -1;
	int8_t x524 = INT8_MIN;
	static volatile uint64_t t99 = 15197489LLU;

	t99 = (x521-(x522+(x523-x524)));

	if (t99 != 8565913851948848857LLU) { NG(); } else { ; }
	
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


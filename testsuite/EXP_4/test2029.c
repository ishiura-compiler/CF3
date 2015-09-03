#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = 23707;
static uint32_t t0 = 94188662U;
volatile int32_t x5 = -1;
uint32_t x11 = UINT32_MAX;
static volatile int16_t x16 = 15662;
static uint64_t t3 = 9929140386886LLU;
uint16_t x18 = 2U;
static uint64_t t5 = 4127850354LLU;
int32_t x25 = -102;
uint32_t x26 = UINT32_MAX;
volatile uint32_t t6 = 405647348U;
int32_t x37 = 2207638;
static uint8_t x42 = 3U;
uint8_t x49 = UINT8_MAX;
static volatile uint8_t x50 = UINT8_MAX;
uint8_t x51 = 51U;
uint16_t x52 = 121U;
int32_t t11 = 248286778;
static int32_t x58 = 92884027;
static volatile int32_t x60 = INT32_MAX;
uint64_t t13 = 34472903835685145LLU;
uint8_t x65 = 1U;
uint16_t x66 = 60U;
volatile int64_t t19 = -3LL;
int16_t x92 = INT16_MIN;
uint32_t x99 = UINT32_MAX;
int16_t x106 = -1;
int64_t t25 = -346LL;
volatile int64_t t26 = 20167LL;
int16_t x129 = INT16_MAX;
static int8_t x137 = -1;
uint8_t x139 = 0U;
int16_t x141 = INT16_MAX;
int64_t x142 = 4695366810LL;
volatile uint64_t x153 = UINT64_MAX;
static int32_t x161 = -1;
static int32_t x164 = -1;
static volatile uint32_t t37 = 68722457U;
int8_t x178 = INT8_MIN;
uint32_t x181 = 0U;
int32_t x182 = 302;
uint64_t x184 = UINT64_MAX;
int64_t x193 = -15500537LL;
uint64_t x196 = 486LLU;
static volatile uint64_t t44 = 908LLU;
static uint32_t t45 = 82702U;
volatile int8_t x210 = INT8_MIN;
volatile uint16_t x211 = UINT16_MAX;
int16_t x212 = -890;
static volatile int8_t x218 = -12;
uint32_t t48 = 63U;
volatile uint64_t t49 = 90605417171LLU;
uint64_t t50 = 101642LLU;
int64_t x245 = INT64_MIN;
volatile int64_t x252 = -19551564294980535LL;
int64_t t53 = 3340LL;
volatile uint64_t x254 = 16177700LLU;
uint16_t x255 = 0U;
int16_t x259 = INT16_MAX;
int64_t x260 = -1LL;
uint8_t x262 = 26U;
static int64_t t57 = -41230400573575LL;
volatile int8_t x269 = -1;
uint16_t x272 = UINT16_MAX;
uint64_t x292 = 38281147177766LLU;
volatile uint64_t t62 = 68669LLU;
uint8_t x294 = UINT8_MAX;
uint8_t x295 = 27U;
int8_t x315 = INT8_MIN;
uint8_t x318 = 4U;
static int64_t t68 = -38571541216LL;
uint32_t x325 = 168U;
int8_t x333 = -1;
uint16_t x335 = UINT16_MAX;
int16_t x341 = -399;
int16_t x343 = -2;
int16_t x344 = -1;
uint16_t x347 = 7U;
int32_t x356 = -1;
int32_t x357 = -1;
int8_t x362 = 0;
int32_t t78 = 422;
volatile int64_t x367 = 1LL;
static int8_t x370 = INT8_MAX;
int64_t x372 = INT64_MIN;
static uint32_t x373 = 8155530U;
int64_t t81 = 1LL;
volatile int16_t x385 = INT16_MIN;
int16_t x389 = 73;
static uint64_t x392 = 17435154139842LLU;
uint64_t x409 = 8468150933904LLU;
uint32_t x411 = 0U;
int32_t x414 = INT32_MIN;
static volatile int8_t x428 = -1;
static volatile int16_t x430 = 60;
static volatile int32_t t92 = 260;
uint64_t x449 = 520672LLU;
int64_t x452 = -133299913LL;
volatile uint64_t t95 = 55969018511096370LLU;
volatile int64_t t96 = 26695401317639389LL;
uint16_t x461 = UINT16_MAX;
int8_t x463 = 11;
uint64_t x464 = UINT64_MAX;
int8_t x470 = INT8_MAX;
uint32_t x474 = 1U;
uint32_t t99 = 921292U;


void f0(void) {
	int32_t x1 = -2;
	int8_t x2 = INT8_MIN;
	uint32_t x4 = 270194U;

	t0 = (x1+(x2+(x3^x4)));

	if (t0 != 279399U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x6 = 10U;
	int16_t x7 = 23;
	int16_t x8 = -1;
	static int32_t t1 = 1;

	t1 = (x5+(x6+(x7^x8)));

	if (t1 != -15) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static volatile int32_t x10 = -30;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = -6605063711978LL;

	t2 = (x9+(x10+(x11^x12)));

	if (t2 != 4294967264LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 10313787LLU;
	int16_t x15 = -539;

	t3 = (x13+(x14+(x15^x16)));

	if (t3 != 9223372036865073414LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x19 = 286U;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 85740805032LLU;

	t4 = (x17+(x18+(x19^x20)));

	if (t4 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 30LLU;
	static uint16_t x23 = 2937U;
	static int16_t x24 = -12718;

	t5 = (x21+(x22+(x23^x24)));

	if (t5 != 18446744073709536840LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x27 = 58614920U;
	static uint32_t x28 = UINT32_MAX;

	t6 = (x25+(x26+(x27^x28)));

	if (t6 != 4236352272U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 0LL;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 12U;
	static int16_t x36 = INT16_MIN;
	volatile int64_t t7 = 1LL;

	t7 = (x33+(x34+(x35^x36)));

	if (t7 != -32884LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = 3U;
	static int16_t x39 = 4173;
	int16_t x40 = 1787;
	int32_t t8 = 16369;

	t8 = (x37+(x38+(x39^x40)));

	if (t8 != 2213455) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	static int32_t x44 = -16;
	volatile int64_t t9 = -31317140LL;

	t9 = (x41+(x42+(x43^x44)));

	if (t9 != -9223372036854743053LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int32_t x46 = 39;
	int16_t x47 = INT16_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 1521612;

	t10 = (x45+(x46+(x47^x48)));

	if (t10 != -32603) { NG(); } else { ; }
	
}

void f11(void) {


	t11 = (x49+(x50+(x51^x52)));

	if (t11 != 584) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 3024218LLU;

	t12 = (x53+(x54+(x55^x56)));

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	uint64_t x59 = 2873447057LLU;

	t13 = (x57+(x58+(x59^x60)));

	if (t13 != 3661953448LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x67 = INT16_MIN;
	volatile int32_t x68 = INT32_MAX;
	int32_t t14 = -1060047475;

	t14 = (x65+(x66+(x67^x68)));

	if (t14 != -2147450820) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 1U;
	int16_t x70 = 445;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MAX;
	int64_t t15 = -3LL;

	t15 = (x69+(x70+(x71^x72)));

	if (t15 != -9223372036854742595LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 14571570921086LLU;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	static volatile int64_t x76 = -1LL;
	volatile uint64_t t16 = 647337LLU;

	t16 = (x73+(x74+(x75^x76)));

	if (t16 != 14569423371902LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 96LLU;
	volatile int8_t x78 = INT8_MAX;
	int32_t x79 = -9016645;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t17 = 3662732404LLU;

	t17 = (x77+(x78+(x79^x80)));

	if (t17 != 9223372036845759386LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = 249459954;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = -423;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t18 = 1828737983313370766LLU;

	t18 = (x81+(x82+(x83^x84)));

	if (t18 != 249460426LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -6;
	static int64_t x86 = -1LL;
	static int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;

	t19 = (x85+(x86+(x87^x88)));

	if (t19 != -32776LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = -1;
	uint64_t t20 = 979577873183206714LLU;

	t20 = (x89+(x90+(x91^x92)));

	if (t20 != 4295000061LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -1;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = -15;
	int64_t x96 = -1147426028854LL;
	int64_t t21 = -7882LL;

	t21 = (x93+(x94+(x95^x96)));

	if (t21 != 1147425996090LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int8_t x98 = -1;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t22 = 4U;

	t22 = (x97+(x98+(x99^x100)));

	if (t22 != 4294934526U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = -1;
	static uint64_t x102 = 20316428LLU;
	uint8_t x103 = UINT8_MAX;
	static int16_t x104 = -1;
	uint64_t t23 = 38129LLU;

	t23 = (x101+(x102+(x103^x104)));

	if (t23 != 20316171LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -1;
	int8_t x107 = -8;
	static int32_t x108 = INT32_MAX;
	static volatile int32_t t24 = 69;

	t24 = (x105+(x106+(x107^x108)));

	if (t24 != -2147483643) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	int8_t x111 = 2;
	int16_t x112 = -28;

	t25 = (x109+(x110+(x111^x112)));

	if (t25 != 9223372036854775653LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = 0;
	static int64_t x114 = INT64_MIN;
	uint32_t x115 = 142618943U;
	int32_t x116 = -49099993;

	t26 = (x113+(x114+(x115^x116)));

	if (t26 != -9223372032734725608LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -12;
	volatile int16_t x122 = INT16_MIN;
	int8_t x123 = -19;
	int32_t x124 = 194;
	volatile int32_t t27 = -7;

	t27 = (x121+(x122+(x123^x124)));

	if (t27 != -32989) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x125 = 24U;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = -1141769309688LL;
	int64_t t28 = -355LL;

	t28 = (x125+(x126+(x127^x128)));

	if (t28 != 1141005808032LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x130 = 0LLU;
	int32_t x131 = -1;
	uint32_t x132 = 8U;
	uint64_t t29 = 1175342158834LLU;

	t29 = (x129+(x130+(x131^x132)));

	if (t29 != 4295000054LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = 10;
	static int16_t x134 = INT16_MIN;
	uint8_t x135 = 23U;
	uint32_t x136 = 9U;
	uint32_t t30 = 981146U;

	t30 = (x133+(x134+(x135^x136)));

	if (t30 != 4294934568U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = -1LL;
	int32_t x140 = INT32_MAX;
	volatile int64_t t31 = -30LL;

	t31 = (x137+(x138+(x139^x140)));

	if (t31 != 2147483645LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x143 = INT8_MIN;
	int8_t x144 = -5;
	static volatile int64_t t32 = -5125LL;

	t32 = (x141+(x142+(x143^x144)));

	if (t32 != 4695399700LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x149 = INT8_MAX;
	int16_t x150 = 223;
	int8_t x151 = 0;
	int16_t x152 = 0;
	volatile int32_t t33 = -76;

	t33 = (x149+(x150+(x151^x152)));

	if (t33 != 350) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = 515793;
	int16_t x155 = 1;
	uint8_t x156 = 60U;
	uint64_t t34 = 6852248563560883477LLU;

	t34 = (x153+(x154+(x155^x156)));

	if (t34 != 515853LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = 51;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = -1;
	volatile uint64_t t35 = 862684643717LLU;

	t35 = (x157+(x158+(x159^x160)));

	if (t35 != 306LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	volatile int32_t t36 = -989522686;

	t36 = (x161+(x162+(x163^x164)));

	if (t36 != 32638) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = INT8_MAX;
	static uint32_t x166 = 1742U;
	static int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MIN;

	t37 = (x165+(x166+(x167^x168)));

	if (t37 != 2147518284U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = INT32_MIN;
	static int32_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = -251631644852675416LL;
	static uint64_t t38 = 3666267422579LLU;

	t38 = (x169+(x170+(x171^x172)));

	if (t38 != 251631642705191766LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -6LL;
	int64_t x174 = INT64_MAX;
	volatile int64_t x175 = INT64_MIN;
	uint64_t x176 = 2211287365256513858LLU;
	uint64_t t39 = 19317166586LLU;

	t39 = (x173+(x174+(x175^x176)));

	if (t39 != 2211287365256513851LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -40;
	uint8_t x179 = 119U;
	int64_t x180 = INT64_MAX;
	volatile int64_t t40 = 164874462965LL;

	t40 = (x177+(x178+(x179^x180)));

	if (t40 != 9223372036854775520LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x183 = UINT8_MAX;
	volatile uint64_t t41 = 1508832LLU;

	t41 = (x181+(x182+(x183^x184)));

	if (t41 != 46LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x189 = 21U;
	uint64_t x190 = UINT64_MAX;
	uint32_t x191 = 81183U;
	static int8_t x192 = 0;
	volatile uint64_t t42 = 34LLU;

	t42 = (x189+(x190+(x191^x192)));

	if (t42 != 81203LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x194 = 12157U;
	int32_t x195 = INT32_MIN;
	uint64_t t43 = 5826578LLU;

	t43 = (x193+(x194+(x195^x196)));

	if (t43 != 18446744071546580074LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x197 = 12966189172LLU;
	volatile uint32_t x198 = 1551180281U;
	int16_t x199 = INT16_MAX;
	volatile uint8_t x200 = 13U;

	t44 = (x197+(x198+(x199^x200)));

	if (t44 != 14517402207LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = 49;
	int16_t x203 = -49;
	volatile uint32_t x204 = UINT32_MAX;

	t45 = (x201+(x202+(x203^x204)));

	if (t45 != 4294934625U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x209 = 8409U;
	int32_t t46 = 2868;

	t46 = (x209+(x210+(x211^x212)));

	if (t46 != -56366) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = -24;
	int32_t x214 = -15;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 9953U;
	int64_t t47 = -7361417051LL;

	t47 = (x213+(x214+(x215^x216)));

	if (t47 != -9223372036854765894LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	volatile uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 59U;

	t48 = (x217+(x218+(x219^x220)));

	if (t48 != 4294967096U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	static volatile int32_t x224 = INT32_MIN;

	t49 = (x221+(x222+(x223^x224)));

	if (t49 != 4294967294LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 4421LLU;
	int16_t x230 = INT16_MAX;
	int64_t x231 = 2LL;
	volatile int32_t x232 = -1;

	t50 = (x229+(x230+(x231^x232)));

	if (t50 != 37185LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = -115555;
	int64_t x238 = -1LL;
	volatile int16_t x239 = INT16_MIN;
	volatile uint32_t x240 = 379347968U;
	static volatile int64_t t51 = 47511090LL;

	t51 = (x237+(x238+(x239^x240)));

	if (t51 != 3915522204LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x246 = INT16_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int16_t x248 = INT16_MAX;
	volatile int64_t t52 = -4214125663460861LL;

	t52 = (x245+(x246+(x247^x248)));

	if (t52 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 3302U;
	volatile int32_t x251 = INT32_MIN;

	t53 = (x249+(x250+(x251^x252)));

	if (t53 != 19551563872012463LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = -1;
	int32_t x256 = -628111;
	volatile uint64_t t54 = 32085604221159LLU;

	t54 = (x253+(x254+(x255^x256)));

	if (t54 != 15549588LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -1;
	static int16_t x258 = 757;
	static volatile int64_t t55 = 115LL;

	t55 = (x257+(x258+(x259^x260)));

	if (t55 != -32012LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x261 = UINT16_MAX;
	static uint8_t x263 = 7U;
	uint16_t x264 = 220U;
	volatile int32_t t56 = 35;

	t56 = (x261+(x262+(x263^x264)));

	if (t56 != 65780) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x265 = INT16_MAX;
	static volatile int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = 32157U;

	t57 = (x265+(x266+(x267^x268)));

	if (t57 != -9223372036854710885LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x270 = 30LL;
	static int8_t x271 = 0;
	static int64_t t58 = -3LL;

	t58 = (x269+(x270+(x271^x272)));

	if (t58 != 65564LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x277 = INT16_MIN;
	static uint8_t x278 = 16U;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 2594863U;
	volatile int64_t t59 = 12784330708346619LL;

	t59 = (x277+(x278+(x279^x280)));

	if (t59 != -9223372036852213697LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x281 = 110U;
	uint8_t x282 = 9U;
	int32_t x283 = -1;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t60 = 29785652;

	t60 = (x281+(x282+(x283^x284)));

	if (t60 != 32886) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = 0;
	volatile uint16_t x286 = UINT16_MAX;
	int64_t x287 = -1LL;
	int8_t x288 = -1;
	int64_t t61 = -3979543318LL;

	t61 = (x285+(x286+(x287^x288)));

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x289 = -639190909427669LL;
	uint8_t x290 = 5U;
	static volatile int16_t x291 = 1763;

	t62 = (x289+(x290+(x291^x292)));

	if (t62 != 18446143163947302389LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = -32874153218724671LL;
	int16_t x296 = INT16_MAX;
	static int64_t t63 = -75542148141LL;

	t63 = (x293+(x294+(x295^x296)));

	if (t63 != -32874153218691676LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x297 = 346238745LL;
	int64_t x298 = -1LL;
	volatile uint8_t x299 = 1U;
	int64_t x300 = -7LL;
	int64_t t64 = -21279751978841LL;

	t64 = (x297+(x298+(x299^x300)));

	if (t64 != 346238736LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = 887632862776LLU;
	uint64_t x303 = 1253285LLU;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t65 = 15LLU;

	t65 = (x301+(x302+(x303^x304)));

	if (t65 != 889781599708LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = 4109U;
	uint32_t x306 = 3U;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	static volatile int64_t t66 = -8884794679LL;

	t66 = (x305+(x306+(x307^x308)));

	if (t66 != 4112LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	int32_t x314 = INT32_MAX;
	static volatile uint64_t x316 = 2LLU;
	volatile uint64_t t67 = 16871858117LLU;

	t67 = (x313+(x314+(x315^x316)));

	if (t67 != 9223372039002259329LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	int16_t x319 = -4372;
	volatile uint16_t x320 = 4330U;

	t68 = (x317+(x318+(x319^x320)));

	if (t68 != 9223372036854775305LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MIN;
	static int64_t t69 = -14550LL;

	t69 = (x325+(x326+(x327^x328)));

	if (t69 != -9223372036854742618LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x329 = 5U;
	static volatile int16_t x330 = INT16_MAX;
	volatile uint64_t x331 = 4707223510613LLU;
	static int16_t x332 = INT16_MAX;
	volatile uint64_t t70 = 285859LLU;

	t70 = (x329+(x330+(x331^x332)));

	if (t70 != 4707223560622LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x334 = 13U;
	int8_t x336 = -1;
	static int32_t t71 = -2;

	t71 = (x333+(x334+(x335^x336)));

	if (t71 != -65524) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = 7930926;
	volatile uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 31U;
	volatile int32_t t72 = 9109;

	t72 = (x337+(x338+(x339^x340)));

	if (t72 != 7898382) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x342 = 57229312016622LLU;
	uint64_t t73 = 65592018610833LLU;

	t73 = (x341+(x342+(x343^x344)));

	if (t73 != 57229312016224LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x345 = -46;
	int16_t x346 = INT16_MAX;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t74 = 101;

	t74 = (x345+(x346+(x347^x348)));

	if (t74 != -2147450920) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = -134741LL;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	int64_t x352 = -1LL;
	volatile int64_t t75 = -13239LL;

	t75 = (x349+(x350+(x351^x352)));

	if (t75 != -134869LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 1U;
	uint8_t x355 = 2U;
	volatile uint32_t t76 = 0U;

	t76 = (x353+(x354+(x355^x356)));

	if (t76 != 4294967293U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x358 = UINT16_MAX;
	volatile int8_t x359 = -1;
	int32_t x360 = -1;
	volatile int32_t t77 = -108;

	t77 = (x357+(x358+(x359^x360)));

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = -1;
	static volatile int16_t x363 = -121;
	int16_t x364 = -1;

	t78 = (x361+(x362+(x363^x364)));

	if (t78 != 119) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x365 = -2628;
	uint32_t x366 = 57535U;
	int64_t x368 = -3924015449529LL;
	volatile int64_t t79 = 599096052194291LL;

	t79 = (x365+(x366+(x367^x368)));

	if (t79 != -3924015394623LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x371 = INT32_MAX;
	volatile int64_t t80 = 262239784508139431LL;

	t80 = (x369+(x370+(x371^x372)));

	if (t80 != -9223372034707226499LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x374 = 21587318997177737LL;
	int8_t x375 = -1;
	int16_t x376 = INT16_MIN;

	t81 = (x373+(x374+(x375^x376)));

	if (t81 != 21587319005366034LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 8U;
	static volatile uint32_t t82 = 1U;

	t82 = (x377+(x378+(x379^x380)));

	if (t82 != 2147483527U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x381 = INT64_MAX;
	uint64_t x382 = 6466LLU;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;
	uint64_t t83 = 7098051506993248734LLU;

	t83 = (x381+(x382+(x383^x384)));

	if (t83 != 9223372036854716737LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x386 = -17373;
	uint16_t x387 = 2U;
	int64_t x388 = 172049LL;
	int64_t t84 = 8720343711LL;

	t84 = (x385+(x386+(x387^x388)));

	if (t84 != 121910LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x390 = -4095LL;
	volatile uint32_t x391 = UINT32_MAX;
	uint64_t t85 = 558LLU;

	t85 = (x389+(x390+(x391^x392)));

	if (t85 != 17435685332359LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x393 = -1;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int8_t x396 = 1;
	int32_t t86 = -48862;

	t86 = (x393+(x394+(x395^x396)));

	if (t86 != -129) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = 1LL;
	volatile uint32_t x398 = 16348U;
	uint16_t x399 = 30U;
	int32_t x400 = -443;
	static volatile int64_t t87 = 41LL;

	t87 = (x397+(x398+(x399^x400)));

	if (t87 != 15928LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	int8_t x407 = 6;
	int32_t x408 = INT32_MIN;
	uint64_t t88 = 12LLU;

	t88 = (x405+(x406+(x407^x408)));

	if (t88 != 9223372034707292165LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x410 = INT64_MIN;
	int8_t x412 = -1;
	uint64_t t89 = 19183943519LLU;

	t89 = (x409+(x410+(x411^x412)));

	if (t89 != 9223380509300677007LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x413 = UINT8_MAX;
	volatile int64_t x415 = INT64_MAX;
	volatile int64_t x416 = INT64_MIN;
	static int64_t t90 = 423LL;

	t90 = (x413+(x414+(x415^x416)));

	if (t90 != -2147483394LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = INT8_MIN;
	volatile int16_t x426 = INT16_MAX;
	int8_t x427 = INT8_MIN;
	int32_t t91 = 219;

	t91 = (x425+(x426+(x427^x428)));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = -1;
	uint16_t x431 = 1551U;
	uint16_t x432 = 263U;

	t92 = (x429+(x430+(x431^x432)));

	if (t92 != 1859) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	volatile uint32_t x442 = 326U;
	uint8_t x443 = UINT8_MAX;
	static int32_t x444 = -1;
	static uint32_t t93 = 162669U;

	t93 = (x441+(x442+(x443^x444)));

	if (t93 != 4294934598U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x445 = 3U;
	int64_t x446 = -2546418692LL;
	int16_t x447 = -1;
	uint16_t x448 = 17327U;
	static volatile int64_t t94 = -491715634LL;

	t94 = (x445+(x446+(x447^x448)));

	if (t94 != -2546436017LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x450 = INT16_MAX;
	uint32_t x451 = 19329U;

	t95 = (x449+(x450+(x451^x452)));

	if (t95 != 18446744073576823957LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = INT16_MIN;
	int8_t x454 = INT8_MIN;
	int64_t x455 = 884317371436LL;
	int64_t x456 = INT64_MIN;

	t96 = (x453+(x454+(x455^x456)));

	if (t96 != -9223371152537437268LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x462 = -3974788;
	volatile uint64_t t97 = 31LLU;

	t97 = (x461+(x462+(x463^x464)));

	if (t97 != 18446744073705642351LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x469 = -1;
	static int16_t x471 = INT16_MIN;
	uint8_t x472 = 28U;
	volatile int32_t t98 = -19948;

	t98 = (x469+(x470+(x471^x472)));

	if (t98 != -32614) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = -7240;
	uint8_t x475 = 0U;
	static int8_t x476 = -15;

	t99 = (x473+(x474+(x475^x476)));

	if (t99 != 4294960042U) { NG(); } else { ; }
	
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


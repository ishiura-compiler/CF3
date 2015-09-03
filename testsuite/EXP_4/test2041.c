#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 31175364605LLU;
volatile int64_t x8 = 25210061LL;
static uint16_t x9 = 124U;
volatile int32_t t2 = 310029;
static uint64_t x16 = UINT64_MAX;
int8_t x19 = -1;
int32_t x26 = -1;
volatile int32_t x40 = INT32_MIN;
volatile uint64_t t9 = 579690470LLU;
volatile int32_t x58 = 78031029;
static volatile int32_t t16 = 12508;
int64_t x74 = 9376599LL;
int32_t x75 = 332641613;
int32_t x78 = INT32_MAX;
int64_t x79 = -1LL;
static int32_t t21 = 52;
volatile int8_t x98 = 22;
int32_t x99 = INT32_MIN;
static int8_t x102 = 8;
static volatile uint64_t t24 = 37LLU;
int32_t x113 = INT32_MIN;
int64_t x118 = -1LL;
int32_t x120 = 1381;
int16_t x127 = 363;
volatile int32_t t31 = 18516573;
uint8_t x154 = UINT8_MAX;
volatile uint64_t x159 = UINT64_MAX;
static volatile uint64_t t35 = 816728132654223142LLU;
static volatile uint32_t x163 = 723U;
static uint32_t x164 = 1U;
uint32_t t37 = 991094U;
int64_t x172 = 718068241063LL;
int32_t x175 = 29363691;
uint16_t x176 = 1U;
volatile int32_t t40 = 194225;
uint8_t x184 = UINT8_MAX;
volatile int64_t t42 = -811101459046241452LL;
int64_t x193 = INT64_MIN;
uint64_t t44 = 146974087LLU;
uint64_t t47 = 520071486332442LLU;
static int16_t x216 = -1;
uint8_t x218 = 2U;
uint32_t x221 = 57U;
int64_t x228 = -5097103LL;
uint32_t t52 = 522U;
volatile uint32_t t53 = 53U;
int64_t x237 = INT64_MAX;
uint16_t x239 = 5825U;
static volatile int64_t t54 = -7040141742LL;
int64_t x242 = 1LL;
uint16_t x243 = 0U;
uint64_t x253 = 169304780539LLU;
uint64_t t57 = 2217085LLU;
volatile int32_t x259 = INT32_MAX;
volatile int64_t x260 = -1LL;
int16_t x262 = INT16_MAX;
uint8_t x270 = 10U;
int64_t t62 = -88982LL;
int32_t x277 = INT32_MIN;
int64_t t63 = -114986521929LL;
int64_t x281 = INT64_MIN;
int32_t x286 = -42143531;
static volatile uint8_t x289 = 0U;
volatile uint64_t t66 = 184LLU;
static int8_t x294 = INT8_MIN;
uint32_t x297 = 743U;
uint32_t t68 = 8972930U;
static int8_t x302 = -1;
uint64_t t69 = 23LLU;
int64_t x305 = 1LL;
int8_t x309 = INT8_MIN;
volatile int32_t t73 = -2791;
uint64_t x322 = UINT64_MAX;
int8_t x325 = INT8_MIN;
int32_t x326 = -12050726;
uint16_t x327 = UINT16_MAX;
int64_t t76 = 1222LL;
int64_t x337 = INT64_MIN;
volatile uint32_t x346 = 2U;
volatile int32_t t81 = -2;
static int32_t t82 = 8;
volatile uint8_t x371 = UINT8_MAX;
int32_t x376 = INT32_MIN;
volatile int64_t t86 = 9LL;
uint32_t t89 = 22U;
int32_t x401 = -1;
int8_t x403 = INT8_MIN;
static uint8_t x407 = 30U;
int8_t x408 = -1;
static uint32_t x409 = 26914U;
volatile uint8_t x411 = UINT8_MAX;
int32_t x415 = -161;
volatile int64_t x425 = 210935838551696LL;
int16_t x436 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	static uint64_t x2 = UINT64_MAX;
	uint32_t x3 = 98272239U;
	uint64_t x4 = UINT64_MAX;

	t0 = (x1^(x2+(x3^x4)));

	if (t0 != 98272240LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -235373;
	int64_t x6 = INT64_MAX;
	int8_t x7 = INT8_MIN;
	static int64_t t1 = 7844LL;

	t1 = (x5^(x6+(x7^x8)));

	if (t1 != -9223372036829398049LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile uint8_t x11 = 29U;
	static uint8_t x12 = UINT8_MAX;

	t2 = (x9^(x10+(x11^x12)));

	if (t2 != 32925) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 7114708LLU;
	int16_t x14 = INT16_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint64_t t3 = 535LLU;

	t3 = (x13^(x14+(x15^x16)));

	if (t3 != 7081898LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile uint8_t x18 = UINT8_MAX;
	uint64_t x20 = 129LLU;
	static uint64_t t4 = 14571238LLU;

	t4 = (x17^(x18+(x19^x20)));

	if (t4 != 130LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	int16_t x22 = INT16_MAX;
	int16_t x23 = 588;
	int8_t x24 = 42;
	volatile int32_t t5 = 11642;

	t5 = (x21^(x22+(x23^x24)));

	if (t5 != 33381) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 21381951LLU;
	static int16_t x27 = INT16_MIN;
	uint16_t x28 = 20U;
	volatile uint64_t t6 = 1886LLU;

	t6 = (x25^(x26+(x27^x28)));

	if (t6 != 18446744073688171308LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -152908208765619LL;
	int8_t x30 = -1;
	int32_t x31 = -29;
	int16_t x32 = INT16_MIN;
	static volatile int64_t t7 = -2592548LL;

	t7 = (x29^(x30+(x31^x32)));

	if (t7 != -152908208735569LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = -1;
	int32_t x39 = INT32_MIN;
	int64_t t8 = INT64_MIN;

	t8 = (x37^(x38+(x39^x40)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;

	t9 = (x41^(x42+(x43^x44)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 1551646U;
	uint32_t x46 = UINT32_MAX;
	volatile uint8_t x47 = 1U;
	int8_t x48 = -1;
	volatile uint32_t t10 = 9U;

	t10 = (x45^(x46+(x47^x48)));

	if (t10 != 4293415651U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = -120852027LL;
	static int16_t x51 = INT16_MAX;
	uint16_t x52 = 22U;
	volatile uint64_t t11 = 2855387878294232LLU;

	t11 = (x49^(x50+(x51^x52)));

	if (t11 != 120819281LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	uint16_t x54 = 7565U;
	int64_t x55 = 418984744998051346LL;
	uint16_t x56 = 1669U;
	int64_t t12 = -6161448LL;

	t12 = (x53^(x54+(x55^x56)));

	if (t12 != -418984744998057509LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -60;
	volatile int32_t x59 = -13499767;
	static volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = 12U;

	t13 = (x57^(x58+(x59^x60)));

	if (t13 != 4203436527U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 51835713372757228LLU;
	int8_t x62 = 33;
	int64_t x63 = -1LL;
	static int16_t x64 = -158;
	uint64_t t14 = 15459125691556450LLU;

	t14 = (x61^(x62+(x63^x64)));

	if (t14 != 51835713372757074LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	uint64_t x66 = 167983257560LLU;
	static int16_t x67 = INT16_MAX;
	uint16_t x68 = UINT16_MAX;
	uint64_t t15 = 101LLU;

	t15 = (x65^(x66+(x67^x68)));

	if (t15 != 18446743905726261287LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = INT32_MAX;
	static uint8_t x71 = 6U;
	int16_t x72 = -119;

	t16 = (x69^(x70+(x71^x72)));

	if (t16 != 2147483633) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 18692U;
	int8_t x76 = -1;
	int64_t t17 = -1961123170114487450LL;

	t17 = (x73^(x74+(x75^x76)));

	if (t17 != -323283187LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x77 = 21U;
	int32_t x80 = INT32_MIN;
	volatile int64_t t18 = -1953483909069721LL;

	t18 = (x77^(x78+(x79^x80)));

	if (t18 != 4294967275LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = 9098;
	int32_t x82 = INT32_MAX;
	uint8_t x83 = 1U;
	uint8_t x84 = 1U;
	volatile int32_t t19 = 1;

	t19 = (x81^(x82+(x83^x84)));

	if (t19 != 2147474549) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = UINT64_MAX;
	static int8_t x86 = -11;
	int8_t x87 = -3;
	volatile uint64_t x88 = 531976766295253LLU;
	uint64_t t20 = 1578322LLU;

	t20 = (x85^(x86+(x87^x88)));

	if (t20 != 531976766295266LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 1U;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = 2U;
	int16_t x92 = INT16_MAX;

	t21 = (x89^(x90+(x91^x92)));

	if (t21 != -2147450884) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	uint32_t t22 = 25634U;

	t22 = (x97^(x98+(x99^x100)));

	if (t22 != 2147450901U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 537623186U;
	int64_t x103 = INT64_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	static volatile int64_t t23 = -5859LL;

	t23 = (x101^(x102+(x103^x104)));

	if (t23 != 9223372033097431706LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 35U;
	static volatile int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	static uint8_t x108 = UINT8_MAX;

	t24 = (x105^(x106+(x107^x108)));

	if (t24 != 18446744073709551324LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MIN;
	int16_t x110 = 41;
	uint16_t x111 = 8141U;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t25 = 141837836538973574LLU;

	t25 = (x109^(x110+(x111^x112)));

	if (t25 != 2147475547LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = -204;
	static int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t26 = -66614966;

	t26 = (x113^(x114+(x115^x116)));

	if (t26 != 2147483444) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 206833;
	int64_t x119 = 7138185688LL;
	volatile int64_t t27 = -1104LL;

	t27 = (x117^(x118+(x119^x120)));

	if (t27 != 7138390861LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = -1;
	int32_t x126 = 0;
	int32_t x128 = INT32_MIN;
	volatile int32_t t28 = -998;

	t28 = (x125^(x126+(x127^x128)));

	if (t28 != 2147483284) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x129 = 696132969LLU;
	uint8_t x130 = 1U;
	int8_t x131 = -1;
	int8_t x132 = -1;
	uint64_t t29 = 2173704740553LLU;

	t29 = (x129^(x130+(x131^x132)));

	if (t29 != 696132968LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	uint64_t x136 = UINT64_MAX;
	uint64_t t30 = 3587745663871573965LLU;

	t30 = (x133^(x134+(x135^x136)));

	if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	static uint8_t x139 = 62U;
	static volatile int32_t x140 = 3579;

	t31 = (x137^(x138+(x139^x140)));

	if (t31 != 29242) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x141 = 126U;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 17U;
	static int32_t x144 = 192;
	int32_t t32 = -19199;

	t32 = (x141^(x142+(x143^x144)));

	if (t32 != 47) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	static volatile int32_t x146 = INT32_MAX;
	int64_t x147 = -1694897LL;
	int32_t x148 = -8;
	static int64_t t33 = 3614698LL;

	t33 = (x145^(x146+(x147^x148)));

	if (t33 != -2149163850LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x155 = -287577266215LL;
	volatile uint64_t x156 = 54034LLU;
	uint64_t t34 = 15486069879123LLU;

	t34 = (x153^(x154+(x155^x156)));

	if (t34 != 18446743786132337973LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -15;
	uint32_t x158 = 2966422U;
	uint8_t x160 = 14U;

	t35 = (x157^(x158+(x159^x160)));

	if (t35 != 18446744073706585206LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -516871641981LL;
	int16_t x162 = -1;
	int64_t t36 = -3385446LL;

	t36 = (x161^(x162+(x163^x164)));

	if (t36 != -516871641518LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = -35;
	int16_t x166 = -1;
	static volatile int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;

	t37 = (x165^(x166+(x167^x168)));

	if (t37 != 4294967203U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 15U;
	int8_t x170 = INT8_MIN;
	volatile uint64_t x171 = 29493085LLU;
	uint64_t t38 = 76745697134601940LLU;

	t38 = (x169^(x170+(x171^x172)));

	if (t38 != 718097470837LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x173 = 128;
	static int16_t x174 = INT16_MAX;
	volatile int32_t t39 = 3947;

	t39 = (x173^(x174+(x175^x176)));

	if (t39 != 29396329) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = -118642;
	static int8_t x178 = -1;
	static uint16_t x179 = 20647U;
	uint8_t x180 = 5U;

	t40 = (x177^(x178+(x179^x180)));

	if (t40 != -106449) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 936U;
	static int8_t x182 = INT8_MAX;
	volatile int64_t x183 = 3308505238003LL;
	int64_t t41 = 112730413987110LL;

	t41 = (x181^(x182+(x183^x184)));

	if (t41 != 3308505238051LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = 10;
	int32_t x191 = INT32_MIN;
	int64_t x192 = 55190178691954LL;

	t42 = (x189^(x190+(x191^x192)));

	if (t42 != 55188333331708LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = -1;
	static uint64_t x195 = 447779819060445212LLU;
	int16_t x196 = 0;
	uint64_t t43 = 105468757941LLU;

	t43 = (x193^(x194+(x195^x196)));

	if (t43 != 9671151855915221019LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = 119540;
	static int32_t x199 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;

	t44 = (x197^(x198+(x199^x200)));

	if (t44 != 18446744071561958131LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = UINT32_MAX;
	uint8_t x202 = 0U;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;
	uint32_t t45 = 15702573U;

	t45 = (x201^(x202+(x203^x204)));

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 29;
	volatile int32_t x206 = -459148;
	int32_t x207 = -1;
	static volatile int64_t x208 = INT64_MIN;
	int64_t t46 = -3332664669195LL;

	t46 = (x205^(x206+(x207^x208)));

	if (t46 != 9223372036854316654LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = INT32_MIN;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;

	t47 = (x209^(x210+(x211^x212)));

	if (t47 != 18446744071562133376LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x213 = 14188U;
	uint8_t x214 = UINT8_MAX;
	volatile uint32_t x215 = 1222747734U;
	static uint32_t t48 = 42U;

	t48 = (x213^(x214+(x215^x216)));

	if (t48 != 3072224708U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -1;
	uint16_t x219 = UINT16_MAX;
	static volatile int32_t x220 = INT32_MAX;
	int32_t t49 = 88;

	t49 = (x217^(x218+(x219^x220)));

	if (t49 != -2147418115) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x222 = 410U;
	int16_t x223 = 2;
	static uint32_t x224 = 264948140U;
	static uint32_t t50 = 510U;

	t50 = (x221^(x222+(x223^x224)));

	if (t50 != 264948593U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = INT8_MAX;
	uint64_t x226 = 128282161LLU;
	uint32_t x227 = 2683U;
	volatile uint64_t t51 = 8009896LLU;

	t51 = (x225^(x226+(x227^x228)));

	if (t51 != 123183428LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 1304U;
	uint32_t x230 = 12U;
	int8_t x231 = INT8_MIN;
	static volatile int16_t x232 = INT16_MIN;

	t52 = (x229^(x230+(x231^x232)));

	if (t52 != 31380U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 6U;
	int32_t x234 = INT32_MIN;
	uint32_t x235 = 30192U;
	int8_t x236 = INT8_MAX;

	t53 = (x233^(x234+(x235^x236)));

	if (t53 != 2147513737U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int32_t x240 = -323978;

	t54 = (x237^(x238+(x239^x240)));

	if (t54 != 9223372032560129865LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 17U;
	uint32_t x244 = 1644U;
	volatile int64_t t55 = -47193359LL;

	t55 = (x241^(x242+(x243^x244)));

	if (t55 != 1660LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = UINT16_MAX;
	uint64_t x251 = 536320499734LLU;
	uint64_t x252 = 28LLU;
	volatile uint64_t t56 = 427265525064259835LLU;

	t56 = (x249^(x250+(x251^x252)));

	if (t56 != 9223372573175341065LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = -1;
	volatile int16_t x255 = 16226;
	uint64_t x256 = 7958033LLU;

	t57 = (x253^(x254+(x255^x256)));

	if (t57 != 169301032841LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 6U;
	int8_t x258 = INT8_MIN;
	volatile int64_t t58 = 545683LL;

	t58 = (x257^(x258+(x259^x260)));

	if (t58 != -2147483770LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x261 = INT32_MIN;
	uint64_t x263 = 4711016417725888LLU;
	int8_t x264 = INT8_MIN;
	uint64_t t59 = 47056797562974519LLU;

	t59 = (x261^(x262+(x263^x264)));

	if (t59 != 4711014400815679LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -34781938;
	static uint64_t x268 = 13643475577LLU;
	uint64_t t60 = 80551LLU;

	t60 = (x265^(x266+(x267^x268)));

	if (t60 != 18446744059468107912LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x269 = -1;
	static volatile uint16_t x271 = 7U;
	int8_t x272 = INT8_MIN;
	int32_t t61 = 207;

	t61 = (x269^(x270+(x271^x272)));

	if (t61 != 110) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 1649U;
	int64_t x275 = INT64_MAX;
	volatile int8_t x276 = -1;

	t62 = (x273^(x274+(x275^x276)));

	if (t62 != -9223372036854711922LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x278 = 5U;
	int64_t x279 = INT64_MIN;
	volatile int32_t x280 = 123887001;

	t63 = (x277^(x278+(x279^x280)));

	if (t63 != 9223372034831179166LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static volatile uint16_t x284 = 965U;
	int64_t t64 = 168140039734689LL;

	t64 = (x281^(x282+(x283^x284)));

	if (t64 != 9223372034707293124LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = -1;
	int64_t x287 = 3LL;
	int8_t x288 = INT8_MIN;
	volatile int64_t t65 = -52972LL;

	t65 = (x285^(x286+(x287^x288)));

	if (t65 != 42143655LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = INT64_MAX;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = -1;

	t66 = (x289^(x290+(x291^x292)));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = INT32_MAX;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	uint64_t t67 = 14677092715574663LLU;

	t67 = (x293^(x294+(x295^x296)));

	if (t67 != 9223372034707292288LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x298 = INT8_MIN;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;

	t68 = (x297^(x298+(x299^x300)));

	if (t68 != 32231U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = 126081LLU;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -1;

	t69 = (x301^(x302+(x303^x304)));

	if (t69 != 2147357567LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x306 = -1;
	volatile int8_t x307 = 10;
	static int8_t x308 = INT8_MIN;
	int64_t t70 = 872398536001206LL;

	t70 = (x305^(x306+(x307^x308)));

	if (t70 != -120LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x310 = 37577U;
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	uint32_t t71 = 2096922U;

	t71 = (x309^(x310+(x311^x312)));

	if (t71 != 4294929736U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x313 = INT32_MAX;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t72 = 57808272107955518LLU;

	t72 = (x313^(x314+(x315^x316)));

	if (t72 != 2147483392LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MAX;
	static volatile uint8_t x318 = 57U;
	int16_t x319 = INT16_MAX;
	int32_t x320 = -2123926;

	t73 = (x317^(x318+(x319^x320)));

	if (t73 != -2123983) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x323 = 2333U;
	int64_t x324 = INT64_MIN;
	uint64_t t74 = 176851127456267LLU;

	t74 = (x321^(x322+(x323^x324)));

	if (t74 != 9223372034707294492LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x328 = INT16_MIN;
	static int32_t t75 = 5325;

	t75 = (x325^(x326+(x327^x328)));

	if (t75 != 12083545) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x333 = 12U;
	static int8_t x334 = INT8_MIN;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;

	t76 = (x333^(x334+(x335^x336)));

	if (t76 != 9223372034707292044LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	static volatile int64_t t77 = 9LL;

	t77 = (x337^(x338+(x339^x340)));

	if (t77 != -9223372034707325056LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MIN;
	volatile int64_t x342 = 965311224305218428LL;
	static uint64_t x343 = UINT64_MAX;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t78 = 200396770LLU;

	t78 = (x341^(x342+(x343^x344)));

	if (t78 != 17481432849404333308LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x345 = 227180204U;
	int16_t x347 = INT16_MIN;
	volatile int16_t x348 = INT16_MIN;
	volatile uint32_t t79 = 943U;

	t79 = (x345^(x346+(x347^x348)));

	if (t79 != 227180206U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = -1LL;
	volatile int32_t x350 = INT32_MIN;
	static volatile int8_t x351 = INT8_MIN;
	int32_t x352 = -973636;
	int64_t t80 = 0LL;

	t80 = (x349^(x350+(x351^x352)));

	if (t80 != 2146510019LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = -1;
	uint16_t x354 = 79U;
	static int16_t x355 = -1;
	static int16_t x356 = 1;

	t81 = (x353^(x354+(x355^x356)));

	if (t81 != -78) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = 1U;
	static uint8_t x358 = 66U;
	volatile uint16_t x359 = 31U;
	int16_t x360 = INT16_MIN;

	t82 = (x357^(x358+(x359^x360)));

	if (t82 != -32672) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = -4414037563LL;
	uint8_t x363 = 68U;
	volatile int16_t x364 = 7;
	volatile int64_t t83 = -62094395LL;

	t83 = (x361^(x362+(x363^x364)));

	if (t83 != 9223372032440738312LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile uint64_t x366 = 715LLU;
	int64_t x367 = -3752996999LL;
	volatile uint16_t x368 = 1U;
	uint64_t t84 = 141972LLU;

	t84 = (x365^(x366+(x367^x368)));

	if (t84 != 18446744069956513212LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MAX;
	int32_t x370 = 46;
	uint16_t x372 = 39U;
	volatile int32_t t85 = -2;

	t85 = (x369^(x370+(x371^x372)));

	if (t85 != 377) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -1;
	int64_t x374 = 228544715LL;
	volatile int32_t x375 = 34858332;

	t86 = (x373^(x374+(x375^x376)));

	if (t86 != 1884080600LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x381 = -3LL;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = INT32_MIN;
	uint16_t x384 = 300U;
	volatile int64_t t87 = -29990371LL;

	t87 = (x381^(x382+(x383^x384)));

	if (t87 != 2147483473LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = UINT8_MAX;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = 6;
	static int8_t x388 = INT8_MIN;
	volatile uint64_t t88 = 76131581077617320LLU;

	t88 = (x385^(x386+(x387^x388)));

	if (t88 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 16U;
	static uint32_t x392 = UINT32_MAX;

	t89 = (x389^(x390+(x391^x392)));

	if (t89 != 4294967278U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 16302U;
	volatile uint8_t x394 = 1U;
	static volatile uint32_t x395 = UINT32_MAX;
	static int32_t x396 = INT32_MAX;
	volatile uint32_t t90 = 2U;

	t90 = (x393^(x394+(x395^x396)));

	if (t90 != 2147499951U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MAX;
	int8_t x400 = -1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x397^(x398+(x399^x400)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x402 = -1;
	volatile int8_t x404 = -1;
	int32_t t92 = -61706;

	t92 = (x401^(x402+(x403^x404)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x405 = 821929089914663LLU;
	uint32_t x406 = 470U;
	uint64_t t93 = 135794806368LLU;

	t93 = (x405^(x406+(x407^x408)));

	if (t93 != 821929089914512LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x410 = 54U;
	static int32_t x412 = -1;
	uint32_t t94 = 112U;

	t94 = (x409^(x410+(x411^x412)));

	if (t94 != 4294940180U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = -158206117636LL;
	static int16_t x414 = INT16_MIN;
	static volatile int16_t x416 = -4464;
	volatile int64_t t95 = -158780735153LL;

	t95 = (x413^(x414+(x415^x416)));

	if (t95 != 158206110003LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x417 = 1U;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MAX;
	static int8_t x420 = 5;
	int32_t t96 = -894174474;

	t96 = (x417^(x418+(x419^x420)));

	if (t96 != -2147483525) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x426 = -362;
	static volatile uint16_t x427 = 0U;
	static volatile uint8_t x428 = UINT8_MAX;
	int64_t t97 = -173LL;

	t97 = (x425^(x426+(x427^x428)));

	if (t97 != -210935838551803LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MAX;
	int8_t x430 = -1;
	int64_t x431 = 2704576029672842LL;
	uint32_t x432 = 23579948U;
	volatile int64_t t98 = 8024LL;

	t98 = (x429^(x430+(x431^x432)));

	if (t98 != 9220667460835637082LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x433 = 745U;
	int8_t x434 = 15;
	int64_t x435 = INT64_MAX;
	int64_t t99 = -3426200124LL;

	t99 = (x433^(x434+(x435^x436)));

	if (t99 != -9223372036854742297LL) { NG(); } else { ; }
	
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


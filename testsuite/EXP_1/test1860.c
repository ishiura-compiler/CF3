#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = 1;
volatile int64_t t0 = -150285457484304LL;
int8_t x7 = INT8_MAX;
int32_t x25 = INT32_MIN;
static volatile uint64_t x27 = 45677626431367743LLU;
volatile int64_t x30 = 16045LL;
volatile int64_t t7 = -3357LL;
volatile uint32_t t9 = 554363190U;
uint16_t x45 = 1U;
volatile uint8_t x57 = 1U;
int64_t x60 = 3504817394281LL;
int64_t t13 = -1633288886945675LL;
static volatile uint16_t x65 = 6U;
int8_t x69 = -11;
int8_t x70 = -1;
static volatile int64_t t16 = 15124135132LL;
uint64_t x73 = 301908LLU;
volatile uint8_t x81 = UINT8_MAX;
volatile int16_t x84 = INT16_MIN;
volatile uint64_t x97 = 32604LLU;
uint64_t x104 = 40LLU;
static volatile int32_t t23 = 294;
static uint16_t x112 = 8145U;
volatile int32_t t24 = 524375595;
uint32_t x114 = UINT32_MAX;
uint64_t x116 = 216843930405582832LLU;
static int64_t x121 = INT64_MIN;
static int8_t x126 = INT8_MIN;
int32_t x129 = INT32_MIN;
volatile int32_t x131 = 1;
volatile uint8_t x141 = 46U;
int8_t x145 = INT8_MIN;
volatile int8_t x146 = INT8_MAX;
static int16_t x148 = 0;
int32_t x149 = INT32_MAX;
uint16_t x152 = 242U;
int16_t x156 = -25;
int64_t x160 = INT64_MIN;
static int8_t x164 = -1;
int64_t x166 = -1LL;
volatile int64_t t37 = 216028773010307537LL;
int32_t x172 = INT32_MIN;
volatile int32_t t39 = 1;
int8_t x177 = INT8_MAX;
int16_t x187 = INT16_MIN;
volatile uint32_t x191 = UINT32_MAX;
volatile int64_t t42 = 117872190LL;
uint8_t x213 = 1U;
volatile int64_t t47 = -29062362225LL;
uint8_t x218 = 0U;
static volatile uint32_t x222 = 9882U;
volatile int8_t x224 = INT8_MAX;
int32_t x226 = INT32_MAX;
int32_t x227 = -1;
volatile uint32_t t50 = 27077155U;
int64_t x248 = INT64_MAX;
volatile uint64_t t55 = 1LLU;
int32_t x261 = -1;
int64_t x263 = -11871951717LL;
uint16_t x269 = 109U;
uint16_t x270 = UINT16_MAX;
int64_t x276 = 19293833687124977LL;
uint64_t t62 = 43981941818227LLU;
uint32_t x281 = 53471408U;
static volatile uint32_t t63 = 882851837U;
int32_t x295 = INT32_MAX;
volatile uint8_t x296 = 1U;
int16_t x297 = -2627;
volatile int32_t x305 = INT32_MIN;
int32_t x310 = INT32_MIN;
static int64_t x312 = INT64_MIN;
uint32_t x318 = 14080111U;
volatile uint64_t t71 = 4456597833818557LLU;
int32_t x322 = -1;
volatile uint64_t x323 = UINT64_MAX;
uint64_t t72 = 1691676387659LLU;
static volatile int16_t x327 = INT16_MIN;
volatile uint64_t t73 = 108093LLU;
int64_t x330 = -1LL;
uint16_t x335 = 187U;
uint64_t x336 = UINT64_MAX;
int32_t x345 = -784332389;
int16_t x347 = INT16_MIN;
int64_t x353 = -1LL;
static volatile int16_t x358 = INT16_MAX;
uint32_t x388 = UINT32_MAX;
uint16_t x390 = UINT16_MAX;
int32_t x396 = -1;
static uint8_t x405 = 96U;
uint8_t x414 = 116U;
uint16_t x415 = UINT16_MAX;
uint32_t x419 = UINT32_MAX;
static volatile int32_t t91 = 122398;
volatile uint32_t x432 = 169550257U;
static uint16_t x433 = 1U;
uint64_t x434 = 165010644965737LLU;
int16_t x437 = 0;
int8_t x438 = INT8_MAX;
volatile int64_t t96 = 3665764916LL;
int64_t x452 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;

	t0 = (((x1|x2)+x3)+x4);

	if (t0 != -9223372036854710401LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	static int16_t x6 = INT16_MAX;
	volatile uint16_t x8 = 116U;
	static volatile int32_t t1 = 143106872;

	t1 = (((x5|x6)+x7)+x8);

	if (t1 != 242) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int32_t x10 = -13;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -123427771;

	t2 = (((x9|x10)+x11)+x12);

	if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int16_t x14 = INT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -5;
	uint64_t t3 = 108LLU;

	t3 = (((x13|x14)+x15)+x16);

	if (t3 != 32761LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 35U;
	int8_t x18 = 1;
	int64_t x19 = -1LL;
	volatile int8_t x20 = -1;
	int64_t t4 = 1LL;

	t4 = (((x17|x18)+x19)+x20);

	if (t4 != 33LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 13901358747696LLU;
	static int16_t x22 = -1;
	uint32_t x23 = 96U;
	int8_t x24 = INT8_MIN;
	static uint64_t t5 = 105636953452365637LLU;

	t5 = (((x21|x22)+x23)+x24);

	if (t5 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 1775LLU;
	uint64_t x28 = 8LLU;
	uint64_t t6 = 11LLU;

	t6 = (((x25|x26)+x27)+x28);

	if (t6 != 45677624283885878LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MAX;
	int32_t x31 = -5;
	int64_t x32 = INT64_MIN;

	t7 = (((x29|x30)+x31)+x32);

	if (t7 != -9223372036854759686LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 7495;
	uint64_t x34 = 24949335201LLU;
	int8_t x35 = -1;
	int64_t x36 = 62260511LL;
	static volatile uint64_t t8 = 8826379476949452669LLU;

	t8 = (((x33|x34)+x35)+x36);

	if (t8 != 25011602181LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int32_t x38 = -1;
	uint32_t x39 = 58308U;
	int32_t x40 = INT32_MAX;

	t9 = (((x37|x38)+x39)+x40);

	if (t9 != 2147541954U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MIN;
	volatile uint8_t x42 = 1U;
	uint16_t x43 = 22U;
	int16_t x44 = INT16_MIN;
	static int32_t t10 = 140062645;

	t10 = (((x41|x42)+x43)+x44);

	if (t10 != -65513) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = 46;
	int64_t x47 = -1LL;
	uint8_t x48 = 7U;
	int64_t t11 = -2413954576980132LL;

	t11 = (((x45|x46)+x47)+x48);

	if (t11 != 53LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	static uint32_t x54 = 77614518U;
	int8_t x55 = -3;
	static volatile int64_t x56 = 1519889505123LL;
	volatile int64_t t12 = -121953748LL;

	t12 = (((x53|x54)+x55)+x56);

	if (t12 != 1524184472415LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = INT8_MIN;
	static volatile int32_t x59 = 2877;

	t13 = (((x57|x58)+x59)+x60);

	if (t13 != 3504817397031LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -1;
	int16_t x62 = -1;
	int16_t x63 = -1;
	int16_t x64 = -1;
	volatile int32_t t14 = -1868868;

	t14 = (((x61|x62)+x63)+x64);

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 17997U;
	static int64_t x67 = 460498005066405999LL;
	int8_t x68 = INT8_MAX;
	int64_t t15 = -179162563364LL;

	t15 = (((x65|x66)+x67)+x68);

	if (t15 != 460498005066424125LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MIN;

	t16 = (((x69|x70)+x71)+x72);

	if (t16 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x74 = -12547602LL;
	int32_t x75 = INT32_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 1846347370762917LLU;

	t17 = (((x73|x74)+x75)+x76);

	if (t17 != 18446744071549787133LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	int8_t x79 = 0;
	static uint8_t x80 = UINT8_MAX;
	int64_t t18 = -15397LL;

	t18 = (((x77|x78)+x79)+x80);

	if (t18 != -32513LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	volatile int32_t t19 = -12561859;

	t19 = (((x81|x82)+x83)+x84);

	if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x93 = UINT32_MAX;
	volatile int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t20 = -9651289194473394LL;

	t20 = (((x93|x94)+x95)+x96);

	if (t20 != -9223372028264841219LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = 2794U;
	static uint16_t x99 = 1002U;
	uint64_t x100 = 4669829437296983797LLU;
	static uint64_t t21 = 1255LLU;

	t21 = (((x97|x98)+x99)+x100);

	if (t21 != 4669829437297017565LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = -49LL;
	int8_t x102 = 0;
	int8_t x103 = INT8_MIN;
	uint64_t t22 = 233817030710LLU;

	t22 = (((x101|x102)+x103)+x104);

	if (t22 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 15U;
	static int32_t x106 = -1;
	static int8_t x107 = 56;
	uint8_t x108 = 1U;

	t23 = (((x105|x106)+x107)+x108);

	if (t23 != 56) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -6;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;

	t24 = (((x109|x110)+x111)+x112);

	if (t24 != 8011) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -146424;
	int64_t x115 = -232744LL;
	volatile uint64_t t25 = 1142688LLU;

	t25 = (((x113|x114)+x115)+x116);

	if (t25 != 216843934700317383LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 5;
	volatile int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MIN;
	volatile int8_t x120 = -1;
	static volatile int32_t t26 = 4173092;

	t26 = (((x117|x118)+x119)+x120);

	if (t26 != -252) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x122 = UINT32_MAX;
	static int8_t x123 = -14;
	int32_t x124 = 96024135;
	static volatile int64_t t27 = 3367LL;

	t27 = (((x121|x122)+x123)+x124);

	if (t27 != -9223372032463784392LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -116905;
	int8_t x127 = -4;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t28 = -6;

	t28 = (((x125|x126)+x127)+x128);

	if (t28 != 210) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = INT32_MIN;
	int64_t x132 = -1LL;
	int64_t t29 = 40LL;

	t29 = (((x129|x130)+x131)+x132);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	uint16_t x136 = 1U;
	uint32_t t30 = 54349U;

	t30 = (((x133|x134)+x135)+x136);

	if (t30 != 4294967168U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x142 = 28;
	int64_t x143 = INT64_MIN;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t31 = 3275479680LLU;

	t31 = (((x141|x142)+x143)+x144);

	if (t31 != 9223372036854775869LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x147 = INT8_MAX;
	volatile int32_t t32 = -1579;

	t32 = (((x145|x146)+x147)+x148);

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = INT8_MIN;
	uint64_t x151 = UINT64_MAX;
	uint64_t t33 = 439158991LLU;

	t33 = (((x149|x150)+x151)+x152);

	if (t33 != 240LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = 100020277;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	volatile uint64_t t34 = 947825263004097LLU;

	t34 = (((x153|x154)+x155)+x156);

	if (t34 != 18446744073709551462LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = -4;
	int64_t x159 = 8144649894LL;
	int64_t t35 = -797012824121150461LL;

	t35 = (((x157|x158)+x159)+x160);

	if (t35 != -9223372028710125918LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	static uint64_t x162 = 3649599787178LLU;
	static int64_t x163 = INT64_MAX;
	volatile uint64_t t36 = 13667LLU;

	t36 = (((x161|x162)+x163)+x164);

	if (t36 != 9223375686454607869LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;

	t37 = (((x165|x166)+x167)+x168);

	if (t37 != -4294967297LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	int64_t x170 = -20831LL;
	static volatile uint16_t x171 = 5U;
	volatile int64_t t38 = 5865567388991908LL;

	t38 = (((x169|x170)+x171)+x172);

	if (t38 != -2147483644LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	static int8_t x176 = INT8_MIN;

	t39 = (((x173|x174)+x175)+x176);

	if (t39 != -257) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	uint64_t t40 = 116659LLU;

	t40 = (((x177|x178)+x179)+x180);

	if (t40 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x186 = 374489U;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t41 = 446U;

	t41 = (((x185|x186)+x187)+x188);

	if (t41 != 4294934616U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = INT64_MAX;
	int8_t x192 = INT8_MIN;

	t42 = (((x189|x190)+x191)+x192);

	if (t42 != 4294967166LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = 1;
	uint64_t x198 = 96638100786LLU;
	uint16_t x199 = 3U;
	static int16_t x200 = INT16_MIN;
	volatile uint64_t t43 = 65462275762007LLU;

	t43 = (((x197|x198)+x199)+x200);

	if (t43 != 96638068022LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = UINT8_MAX;
	int32_t x202 = -238132;
	volatile int8_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	static volatile int32_t t44 = 153227998;

	t44 = (((x201|x202)+x203)+x204);

	if (t44 != -172547) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 12U;
	volatile int32_t t45 = -60;

	t45 = (((x205|x206)+x207)+x208);

	if (t45 != -117) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = -65LL;
	int8_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	volatile uint32_t x212 = UINT32_MAX;
	int64_t t46 = -5LL;

	t46 = (((x209|x210)+x211)+x212);

	if (t46 != 4294967166LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x214 = 3U;
	static volatile int64_t x215 = -1LL;
	volatile uint32_t x216 = UINT32_MAX;

	t47 = (((x213|x214)+x215)+x216);

	if (t47 != 4294967297LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = -209443582;
	int32_t x219 = -725146342;
	uint32_t x220 = 1965U;
	static volatile uint32_t t48 = 232180698U;

	t48 = (((x217|x218)+x219)+x220);

	if (t48 != 3360379337U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = INT32_MIN;
	uint8_t x223 = 50U;
	volatile uint32_t t49 = 1U;

	t49 = (((x221|x222)+x223)+x224);

	if (t49 != 2147493707U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = 6277302;
	static uint32_t x228 = UINT32_MAX;

	t50 = (((x225|x226)+x227)+x228);

	if (t50 != 2147483645U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	uint8_t x231 = 4U;
	static uint16_t x232 = UINT16_MAX;
	static volatile int64_t t51 = -260234309770240LL;

	t51 = (((x229|x230)+x231)+x232);

	if (t51 != 65538LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x233 = 332430217040LL;
	static uint64_t x234 = 3021031663659458629LLU;
	int64_t x235 = INT64_MIN;
	volatile uint32_t x236 = 117089428U;
	static volatile uint64_t t52 = 674811592LLU;

	t52 = (((x233|x234)+x235)+x236);

	if (t52 != 12244403723184264169LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = -8145;
	uint8_t x238 = 3U;
	uint64_t x239 = 15LLU;
	volatile uint64_t x240 = 7552871164442304413LLU;
	volatile uint64_t t53 = 5LLU;

	t53 = (((x237|x238)+x239)+x240);

	if (t53 != 7552871164442296283LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = 846LLU;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	volatile uint64_t t54 = 6210LLU;

	t54 = (((x241|x242)+x243)+x244);

	if (t54 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x245 = UINT16_MAX;
	static int16_t x246 = -1;
	uint64_t x247 = UINT64_MAX;

	t55 = (((x245|x246)+x247)+x248);

	if (t55 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = -1;
	int16_t x254 = -7359;
	int16_t x255 = -1;
	volatile int64_t x256 = -1LL;
	static volatile int64_t t56 = 49LL;

	t56 = (((x253|x254)+x255)+x256);

	if (t56 != -3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = -55;
	uint32_t x260 = 699U;
	volatile uint32_t t57 = 221U;

	t57 = (((x257|x258)+x259)+x260);

	if (t57 != 643U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x262 = INT8_MIN;
	volatile uint32_t x264 = 0U;
	int64_t t58 = -26336LL;

	t58 = (((x261|x262)+x263)+x264);

	if (t58 != -11871951718LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x265 = INT64_MAX;
	int32_t x266 = -331084225;
	static int8_t x267 = INT8_MAX;
	uint8_t x268 = 1U;
	int64_t t59 = 601336LL;

	t59 = (((x265|x266)+x267)+x268);

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = 3;
	uint32_t t60 = 0U;

	t60 = (((x269|x270)+x271)+x272);

	if (t60 != 65537U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x273 = -170513251LL;
	static int32_t x274 = -2;
	int64_t x275 = 847379249427LL;
	int64_t t61 = 483950LL;

	t61 = (((x273|x274)+x275)+x276);

	if (t61 != 19294681066374403LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MAX;
	uint32_t x279 = 7813U;
	volatile uint8_t x280 = UINT8_MAX;

	t62 = (((x277|x278)+x279)+x280);

	if (t62 != 8067LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 15U;
	volatile int32_t x284 = -1;

	t63 = (((x281|x282)+x283)+x284);

	if (t63 != 4294961342U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = 5427U;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	static volatile uint32_t t64 = 42695748U;

	t64 = (((x285|x286)+x287)+x288);

	if (t64 != 2147549182U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	static int32_t x290 = -1;
	volatile uint32_t x291 = UINT32_MAX;
	int16_t x292 = -1;
	volatile uint32_t t65 = 48747U;

	t65 = (((x289|x290)+x291)+x292);

	if (t65 != 4294967293U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MAX;
	volatile int64_t x294 = INT64_MIN;
	int64_t t66 = 3LL;

	t66 = (((x293|x294)+x295)+x296);

	if (t66 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x298 = 614U;
	static int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t67 = 2093032;

	t67 = (((x297|x298)+x299)+x300);

	if (t67 != 30590) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x306 = -1LL;
	static uint16_t x307 = 59U;
	int16_t x308 = -1;
	volatile int64_t t68 = -17983794722LL;

	t68 = (((x305|x306)+x307)+x308);

	if (t68 != 57LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x311 = 29808U;
	static volatile uint64_t t69 = 63LLU;

	t69 = (((x309|x310)+x311)+x312);

	if (t69 != 9223372036854805615LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = -49;
	static int16_t x314 = -2879;
	int64_t x315 = 10980779564755397LL;
	int8_t x316 = 1;
	int64_t t70 = 5978559263879LL;

	t70 = (((x313|x314)+x315)+x316);

	if (t70 != 10980779564755349LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = 12024U;
	int8_t x319 = INT8_MIN;
	static volatile uint64_t x320 = UINT64_MAX;

	t71 = (((x317|x318)+x319)+x320);

	if (t71 != 14089854LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x321 = UINT16_MAX;
	volatile int16_t x324 = -1;

	t72 = (((x321|x322)+x323)+x324);

	if (t72 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x325 = 6LLU;
	static int16_t x326 = INT16_MAX;
	int8_t x328 = INT8_MIN;

	t73 = (((x325|x326)+x327)+x328);

	if (t73 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = -205997130970519350LL;
	int8_t x331 = -15;
	int16_t x332 = INT16_MIN;
	static volatile int64_t t74 = 61LL;

	t74 = (((x329|x330)+x331)+x332);

	if (t74 != -32784LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile uint8_t x334 = 2U;
	static volatile uint64_t t75 = 7573269104340900LLU;

	t75 = (((x333|x334)+x335)+x336);

	if (t75 != 9223372036854775996LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x346 = -1LL;
	int8_t x348 = INT8_MIN;
	volatile int64_t t76 = 114LL;

	t76 = (((x345|x346)+x347)+x348);

	if (t76 != -32897LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = 0U;
	static int8_t x350 = 60;
	uint32_t x351 = 910U;
	uint16_t x352 = UINT16_MAX;
	volatile uint32_t t77 = 1383122228U;

	t77 = (((x349|x350)+x351)+x352);

	if (t77 != 66505U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x354 = 3267669978128990LL;
	static int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t78 = 239962765LL;

	t78 = (((x353|x354)+x355)+x356);

	if (t78 != -2147516417LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x357 = -1;
	volatile int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	static uint64_t t79 = 424358055633644176LLU;

	t79 = (((x357|x358)+x359)+x360);

	if (t79 != 32765LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = -1;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MAX;
	uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t80 = 6U;

	t80 = (((x365|x366)+x367)+x368);

	if (t80 != 32765U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x373 = -1;
	int32_t x374 = -486;
	static uint64_t x375 = 4224022628630903LLU;
	uint32_t x376 = UINT32_MAX;
	uint64_t t81 = 5484LLU;

	t81 = (((x373|x374)+x375)+x376);

	if (t81 != 4224026923598197LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x381 = INT16_MAX;
	int32_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = -22;
	int32_t t82 = -24251747;

	t82 = (((x381|x382)+x383)+x384);

	if (t82 != 65512) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile uint64_t x386 = 7077055111255883810LLU;
	uint16_t x387 = 53U;
	volatile uint64_t t83 = 96LLU;

	t83 = (((x385|x386)+x387)+x388);

	if (t83 != 4294934614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x389 = -43;
	volatile int16_t x391 = 937;
	int8_t x392 = 2;
	volatile int32_t t84 = 26892;

	t84 = (((x389|x390)+x391)+x392);

	if (t84 != 938) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x393 = 22354276U;
	volatile int64_t x394 = -624739314LL;
	volatile int8_t x395 = 24;
	int64_t t85 = 6156446061942LL;

	t85 = (((x393|x394)+x395)+x396);

	if (t85 != -606651003LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = 4557578616759648LLU;
	uint32_t x402 = 27872808U;
	int16_t x403 = 7783;
	int16_t x404 = INT16_MAX;
	volatile uint64_t t86 = 1417LLU;

	t86 = (((x401|x402)+x403)+x404);

	if (t86 != 4557578642034126LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x406 = 17395U;
	int16_t x407 = INT16_MAX;
	static int8_t x408 = 1;
	volatile int32_t t87 = 1057602844;

	t87 = (((x405|x406)+x407)+x408);

	if (t87 != 50163) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x410 = -2189LL;
	int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;
	volatile int64_t t88 = 771859929LL;

	t88 = (((x409|x410)+x411)+x412);

	if (t88 != -130LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t89 = -16524831182LL;

	t89 = (((x413|x414)+x415)+x416);

	if (t89 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x417 = 517U;
	uint64_t x418 = 2888362LLU;
	uint32_t x420 = 1285150U;
	static uint64_t t90 = 5272662851950LLU;

	t90 = (((x417|x418)+x419)+x420);

	if (t90 != 4299140812LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = INT8_MAX;
	volatile int32_t x422 = INT32_MIN;
	uint8_t x423 = 13U;
	int8_t x424 = 0;

	t91 = (((x421|x422)+x423)+x424);

	if (t91 != -2147483508) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = INT16_MIN;
	volatile uint16_t x426 = 55U;
	int64_t x427 = 3791843LL;
	static uint32_t x428 = UINT32_MAX;
	volatile int64_t t92 = 191578269798LL;

	t92 = (((x425|x426)+x427)+x428);

	if (t92 != 4298726425LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	static int64_t x430 = INT64_MIN;
	int8_t x431 = INT8_MAX;
	static volatile int64_t t93 = 0LL;

	t93 = (((x429|x430)+x431)+x432);

	if (t93 != -1977933264LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x435 = 29U;
	uint32_t x436 = 234U;
	uint64_t t94 = 50LLU;

	t94 = (((x433|x434)+x435)+x436);

	if (t94 != 165010644966000LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x439 = INT64_MIN;
	static uint64_t x440 = UINT64_MAX;
	volatile uint64_t t95 = 38574985407LLU;

	t95 = (((x437|x438)+x439)+x440);

	if (t95 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MIN;
	static uint16_t x442 = UINT16_MAX;
	static volatile int64_t x443 = -224390484LL;
	static int32_t x444 = INT32_MIN;

	t96 = (((x441|x442)+x443)+x444);

	if (t96 != -2371874133LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x445 = 262310149918586227LLU;
	int8_t x446 = -14;
	int16_t x447 = INT16_MAX;
	int64_t x448 = -1LL;
	volatile uint64_t t97 = 2275683LLU;

	t97 = (((x445|x446)+x447)+x448);

	if (t97 != 32753LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x449 = 254U;
	volatile uint32_t x450 = 1422607830U;
	uint16_t x451 = 0U;
	int64_t t98 = -10225811763671469LL;

	t98 = (((x449|x450)+x451)+x452);

	if (t98 != -9223372035432167938LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = INT16_MIN;
	volatile int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = UINT64_MAX;
	uint64_t t99 = 1664883088529488LLU;

	t99 = (((x453|x454)+x455)+x456);

	if (t99 != 18446744073709551486LLU) { NG(); } else { ; }
	
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


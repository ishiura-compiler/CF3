#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = 1U;
uint64_t t1 = 3212136471635633LLU;
static int32_t x11 = -794;
uint16_t x14 = UINT16_MAX;
int32_t x17 = 257999;
volatile int64_t x24 = INT64_MAX;
volatile uint64_t t5 = 185LLU;
int64_t x37 = -34411322291671748LL;
volatile int64_t x38 = -1700LL;
int64_t t11 = -526840949701327514LL;
uint16_t x77 = 3457U;
uint32_t x78 = UINT32_MAX;
uint8_t x79 = 50U;
uint16_t x91 = 10675U;
int8_t x92 = 0;
static volatile int64_t x94 = INT64_MAX;
static int64_t x102 = INT64_MAX;
volatile int16_t x104 = INT16_MIN;
static int8_t x109 = INT8_MIN;
int32_t x112 = INT32_MIN;
uint8_t x121 = 7U;
uint32_t x123 = 16U;
static volatile int8_t x124 = INT8_MIN;
static volatile int16_t x140 = INT16_MIN;
static uint16_t x145 = 0U;
static int32_t x152 = 65469;
static volatile uint16_t x157 = UINT16_MAX;
volatile uint32_t t28 = 55115112U;
uint64_t t29 = 199048723LLU;
volatile int64_t t30 = -579193993943428057LL;
uint64_t t31 = 520722066LLU;
uint32_t x174 = 4049562U;
int64_t t32 = 125037LL;
volatile int32_t x180 = INT32_MIN;
volatile int16_t x185 = INT16_MAX;
int16_t x190 = 177;
uint64_t t36 = 4026300609638830LLU;
int32_t x197 = INT32_MIN;
int16_t x198 = INT16_MIN;
int8_t x227 = INT8_MIN;
volatile int64_t t41 = 5682358817568LL;
int64_t x234 = -1LL;
int32_t x236 = -1;
volatile int32_t x237 = 360015324;
static int64_t x244 = 42LL;
uint16_t x253 = UINT16_MAX;
uint64_t x258 = UINT64_MAX;
int16_t x274 = INT16_MAX;
int64_t x277 = INT64_MIN;
int16_t x281 = -1;
uint64_t x284 = UINT64_MAX;
uint64_t t51 = 7LLU;
int8_t x288 = INT8_MAX;
int16_t x300 = -15;
int64_t t54 = 17LL;
static int32_t x302 = INT32_MIN;
uint64_t t55 = 13972LLU;
int16_t x310 = 127;
uint8_t x311 = UINT8_MAX;
uint32_t x317 = 2U;
int8_t x318 = 26;
uint32_t x322 = UINT32_MAX;
uint32_t x327 = UINT32_MAX;
int8_t x328 = INT8_MIN;
static volatile uint8_t x331 = 0U;
volatile int32_t t62 = 2;
int8_t x337 = -1;
uint64_t x348 = 59742112827041772LLU;
static volatile uint32_t x355 = UINT32_MAX;
int32_t x358 = INT32_MIN;
int16_t x366 = INT16_MIN;
int64_t x368 = INT64_MIN;
static volatile int64_t t70 = 5LL;
uint64_t x374 = UINT64_MAX;
static volatile uint32_t t72 = 112789418U;
uint16_t x393 = 0U;
volatile int16_t x396 = INT16_MAX;
int64_t x404 = -1051329411355307582LL;
int8_t x407 = -1;
int32_t x408 = INT32_MAX;
volatile uint64_t t79 = 54750LLU;
static volatile uint8_t x421 = 3U;
uint64_t x426 = 1118210135485574LLU;
int16_t x433 = INT16_MIN;
static uint16_t x434 = UINT16_MAX;
int32_t x437 = INT32_MAX;
int32_t x445 = -602;
uint32_t x448 = 0U;
uint64_t x456 = 183025082657624690LLU;
uint64_t t88 = 746LLU;
volatile uint64_t t89 = 29281554910978LLU;
int64_t x474 = 13957879LL;
int16_t x475 = 0;
int64_t x481 = 56427LL;
static volatile int32_t x484 = -1;
static uint8_t x498 = 4U;
uint32_t x500 = UINT32_MAX;
volatile int32_t x504 = 28;
volatile int32_t t96 = -58;
static volatile uint16_t x506 = 7373U;
volatile uint8_t x520 = UINT8_MAX;


void f0(void) {
	uint64_t x1 = 0LLU;
	volatile uint16_t x2 = 4682U;
	int16_t x3 = 14419;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 969511865610784620LLU;

	t0 = (x1-(x2%(x3-x4)));

	if (t0 != 18446744073709546934LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -620LL;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = 1;

	t1 = (x5-(x6%(x7-x8)));

	if (t1 != 621LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	static int8_t x10 = 12;
	uint8_t x12 = 56U;
	volatile int32_t t2 = -2983605;

	t2 = (x9-(x10%(x11-x12)));

	if (t2 != -11) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -32207759;

	t3 = (x13-(x14%(x15-x16)));

	if (t3 != -43) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 6U;
	int64_t x19 = -555119851372467LL;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 3442400366573521LL;

	t4 = (x17-(x18%(x19-x20)));

	if (t4 != 257993LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 724219;
	static uint64_t x22 = UINT64_MAX;
	volatile int32_t x23 = -1;

	t5 = (x21-(x22%(x23-x24)));

	if (t5 != 9223372036855500028LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int16_t x26 = -358;
	int32_t x27 = INT32_MIN;
	static volatile int64_t x28 = -1LL;
	volatile int64_t t6 = 44175LL;

	t6 = (x25-(x26%(x27-x28)));

	if (t6 != 357LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x39 = INT16_MAX;
	static volatile int64_t x40 = 2LL;
	int64_t t7 = 719910474768LL;

	t7 = (x37-(x38%(x39-x40)));

	if (t7 != -34411322291670048LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MIN;
	static uint16_t x46 = 0U;
	int16_t x47 = INT16_MIN;
	int64_t x48 = -1LL;
	int64_t t8 = -7LL;

	t8 = (x45-(x46%(x47-x48)));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = 5;
	int32_t x51 = 2683;
	uint8_t x52 = 30U;
	uint64_t t9 = 3563278297642LLU;

	t9 = (x49-(x50%(x51-x52)));

	if (t9 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 2723645LLU;
	uint32_t x62 = 4737U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	static uint64_t t10 = 338LLU;

	t10 = (x61-(x62%(x63-x64)));

	if (t10 != 2718908LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = 1;
	volatile int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MIN;
	int64_t x68 = 3829941370688LL;

	t11 = (x65-(x66%(x67-x68)));

	if (t11 != 3819238672577LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	uint32_t x75 = 69780447U;
	static uint16_t x76 = 2136U;
	static uint32_t t12 = 3601U;

	t12 = (x73-(x74%(x75-x76)));

	if (t12 != 4256476971U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x80 = INT16_MIN;
	static uint32_t t13 = 3U;

	t13 = (x77-(x78%(x79-x80)));

	if (t13 != 4294960754U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -1;
	int16_t x82 = INT16_MAX;
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = INT8_MIN;
	uint64_t t14 = 1LLU;

	t14 = (x81-(x82%(x83-x84)));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x85 = -1LL;
	int32_t x86 = -1;
	int32_t x87 = -221403146;
	static volatile int64_t x88 = -206827LL;
	int64_t t15 = 18002526205LL;

	t15 = (x85-(x86%(x87-x88)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = -1;
	int32_t t16 = -96;

	t16 = (x89-(x90%(x91-x92)));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	int32_t x95 = -1;
	uint32_t x96 = 5211740U;
	int64_t t17 = -113826231536838307LL;

	t17 = (x93-(x94%(x95-x96)));

	if (t17 != -4048399835LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x103 = -1LL;
	volatile int64_t t18 = -15335038LL;

	t18 = (x101-(x102%(x103-x104)));

	if (t18 != -2147483655LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	static volatile int16_t x106 = -1;
	static int16_t x107 = INT16_MAX;
	int64_t x108 = -339616421120LL;
	static volatile int64_t t19 = -43896363451259LL;

	t19 = (x105-(x106%(x107-x108)));

	if (t19 != -127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x110 = INT16_MAX;
	volatile int64_t x111 = -1LL;
	static volatile int64_t t20 = -34717LL;

	t20 = (x109-(x110%(x111-x112)));

	if (t20 != -32895LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 3LLU;
	static int64_t x119 = INT64_MAX;
	volatile uint64_t x120 = 39667834125273528LLU;
	uint64_t t21 = 17162450776426LLU;

	t21 = (x117-(x118%(x119-x120)));

	if (t21 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x122 = UINT32_MAX;
	static uint32_t t22 = 53U;

	t22 = (x121-(x122%(x123-x124)));

	if (t22 != 4294967192U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	static volatile int64_t x135 = 67992221882LL;
	static int32_t x136 = 7446273;
	static uint64_t t23 = 1736LLU;

	t23 = (x133-(x134%(x135-x136)));

	if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 609808718;
	volatile int32_t t24 = 2;

	t24 = (x137-(x138%(x139-x140)));

	if (t24 != 2147483520) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x146 = UINT8_MAX;
	int8_t x147 = -1;
	int16_t x148 = 11347;
	int32_t t25 = 149;

	t25 = (x145-(x146%(x147-x148)));

	if (t25 != -255) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x149 = 34512LLU;
	static int16_t x150 = -176;
	int64_t x151 = INT64_MAX;
	uint64_t t26 = 6320LLU;

	t26 = (x149-(x150%(x151-x152)));

	if (t26 != 34688LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = 137;
	static volatile int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 1U;
	volatile int32_t t27 = -1372522;

	t27 = (x153-(x154%(x155-x156)));

	if (t27 != 32905) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x158 = INT16_MIN;
	int32_t x159 = 0;
	uint32_t x160 = 7062U;

	t28 = (x157-(x158%(x159-x160)));

	if (t28 != 98303U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = 13627047LLU;
	static volatile int32_t x162 = 42496;
	uint8_t x163 = 0U;
	int32_t x164 = 58128;

	t29 = (x161-(x162%(x163-x164)));

	if (t29 != 13584551LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x165 = 227U;
	int16_t x166 = -21;
	int8_t x167 = INT8_MAX;
	int64_t x168 = 450LL;

	t30 = (x165-(x166%(x167-x168)));

	if (t30 != 248LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 90104797LLU;
	int32_t x170 = -25193;
	volatile uint64_t x171 = UINT64_MAX;
	static uint64_t x172 = 11468LLU;

	t31 = (x169-(x170%(x171-x172)));

	if (t31 != 90129990LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = -1;
	static int16_t x175 = INT16_MIN;
	int64_t x176 = 2349LL;

	t32 = (x173-(x174%(x175-x176)));

	if (t32 != -11108LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 15780952397451LLU;
	static int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	static volatile uint64_t t33 = 158731LLU;

	t33 = (x177-(x178%(x179-x180)));

	if (t33 != 15780952430219LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x186 = INT16_MAX;
	uint64_t x187 = 29500LLU;
	int16_t x188 = -1;
	uint64_t t34 = 2036128998LLU;

	t34 = (x185-(x186%(x187-x188)));

	if (t34 != 29501LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = -1;
	int64_t t35 = 1116035LL;

	t35 = (x189-(x190%(x191-x192)));

	if (t35 != -2147483825LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = 7;
	uint64_t x196 = UINT64_MAX;

	t36 = (x193-(x194%(x195-x196)));

	if (t36 != 65528LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x199 = 7028214U;
	int16_t x200 = INT16_MIN;
	static uint32_t t37 = 1113U;

	t37 = (x197-(x198%(x199-x200)));

	if (t37 != 2145626176U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x201 = UINT32_MAX;
	static volatile int16_t x202 = -25;
	int64_t x203 = INT64_MIN;
	static volatile int32_t x204 = -1;
	int64_t t38 = 602092110899LL;

	t38 = (x201-(x202%(x203-x204)));

	if (t38 != 4294967320LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x213 = 4U;
	static int64_t x214 = INT64_MAX;
	uint32_t x215 = 162U;
	volatile uint64_t x216 = 8790578137681886LLU;
	static uint64_t t39 = 2262874LLU;

	t39 = (x213-(x214%(x215-x216)));

	if (t39 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x221 = UINT32_MAX;
	int32_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	static int8_t x224 = INT8_MIN;
	volatile uint64_t t40 = 931LLU;

	t40 = (x221-(x222%(x223-x224)));

	if (t40 != 4294967294LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = 1556772;
	int64_t x228 = -1LL;

	t41 = (x225-(x226%(x227-x228)));

	if (t41 != 121LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x235 = -358394469767LL;
	volatile int64_t t42 = 171159337030751289LL;

	t42 = (x233-(x234%(x235-x236)));

	if (t42 != 256LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x238 = INT64_MIN;
	int8_t x239 = 1;
	volatile uint16_t x240 = UINT16_MAX;
	int64_t t43 = 16901696399LL;

	t43 = (x237-(x238%(x239-x240)));

	if (t43 != 360015332LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	volatile int64_t t44 = -605887627036LL;

	t44 = (x241-(x242%(x243-x244)));

	if (t44 != 32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x245 = 22U;
	int64_t x246 = -69281742826652LL;
	static volatile int64_t x247 = INT64_MIN;
	static int32_t x248 = -204;
	static volatile int64_t t45 = 1292372366LL;

	t45 = (x245-(x246%(x247-x248)));

	if (t45 != 69281742826674LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x254 = 1;
	int32_t x255 = 1;
	static volatile int64_t x256 = INT64_MAX;
	volatile int64_t t46 = 1854847845475110250LL;

	t46 = (x253-(x254%(x255-x256)));

	if (t46 != 65534LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = 21;
	uint32_t x259 = 2307U;
	uint8_t x260 = 2U;
	static volatile uint64_t t47 = 90LLU;

	t47 = (x257-(x258%(x259-x260)));

	if (t47 != 18446744073709550807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	uint64_t x267 = 133455973578393415LLU;
	int32_t x268 = -31624056;
	volatile uint64_t t48 = 4648579477LLU;

	t48 = (x265-(x266%(x267-x268)));

	if (t48 != 18416924360329894645LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x273 = 3444U;
	static uint16_t x275 = 239U;
	volatile int8_t x276 = -1;
	int32_t t49 = -1049581208;

	t49 = (x273-(x274%(x275-x276)));

	if (t49 != 3317) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x278 = INT16_MIN;
	uint64_t x279 = 354069490243LLU;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t50 = 807587740159104LLU;

	t50 = (x277-(x278%(x279-x280)));

	if (t50 != 9223371883202377209LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x282 = 5U;
	int8_t x283 = -3;

	t51 = (x281-(x282%(x283-x284)));

	if (t51 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x287 = -244534;
	volatile int32_t t52 = 254;

	t52 = (x285-(x286%(x287-x288)));

	if (t52 != -2147450880) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = -25776590;
	uint64_t x294 = 4946963293789267LLU;
	uint64_t x295 = 49115406638053104LLU;
	int16_t x296 = INT16_MIN;
	static uint64_t t53 = 3988329557176LLU;

	t53 = (x293-(x294%(x295-x296)));

	if (t53 != 18441797110389985759LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MAX;
	volatile int8_t x299 = INT8_MIN;

	t54 = (x297-(x298%(x299-x300)));

	if (t54 != -142LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint64_t x303 = 337855LLU;
	int32_t x304 = INT32_MAX;

	t55 = (x301-(x302%(x303-x304)));

	if (t55 != 2147483903LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -1;
	static volatile uint8_t x307 = UINT8_MAX;
	static volatile int16_t x308 = -1;
	static volatile int32_t t56 = -1;

	t56 = (x305-(x306%(x307-x308)));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x309 = -1;
	static uint16_t x312 = 5457U;
	static volatile int32_t t57 = -201;

	t57 = (x309-(x310%(x311-x312)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x313 = -1LL;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -16276963292228228LL;
	uint32_t x316 = 79667377U;
	int64_t t58 = 7LL;

	t58 = (x313-(x314%(x315-x316)));

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x319 = 1U;
	int64_t x320 = INT64_MAX;
	int64_t t59 = -3920042817LL;

	t59 = (x317-(x318%(x319-x320)));

	if (t59 != -24LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x323 = 5961;
	int16_t x324 = INT16_MIN;
	uint64_t t60 = 382180477LLU;

	t60 = (x321-(x322%(x323-x324)));

	if (t60 != 18446744073709514233LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MAX;
	int32_t x326 = -1467;
	uint32_t t61 = 29110010U;

	t61 = (x325-(x326%(x327-x328)));

	if (t61 != 32694U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x329 = INT32_MAX;
	int8_t x330 = INT8_MAX;
	static int16_t x332 = INT16_MIN;

	t62 = (x329-(x330%(x331-x332)));

	if (t62 != 2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x338 = 2;
	uint64_t x339 = 591383961633297LLU;
	static int64_t x340 = INT64_MIN;
	uint64_t t63 = 514689099677553LLU;

	t63 = (x337-(x338%(x339-x340)));

	if (t63 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = 0;
	uint32_t x342 = 232U;
	static volatile uint64_t x343 = 2865001476207379LLU;
	uint8_t x344 = UINT8_MAX;
	uint64_t t64 = 11LLU;

	t64 = (x341-(x342%(x343-x344)));

	if (t64 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = -1LL;
	static int16_t x346 = -1;
	static uint16_t x347 = 0U;
	static uint64_t t65 = 1LLU;

	t65 = (x345-(x346%(x347-x348)));

	if (t65 != 18387001960882509844LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = -1LL;
	volatile uint64_t x350 = 26960LLU;
	uint32_t x351 = UINT32_MAX;
	volatile int16_t x352 = INT16_MAX;
	uint64_t t66 = 219111930550763198LLU;

	t66 = (x349-(x350%(x351-x352)));

	if (t66 != 18446744073709524655LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x353 = 1U;
	uint32_t x354 = 19U;
	static int16_t x356 = 4;
	static uint32_t t67 = 1944U;

	t67 = (x353-(x354%(x355-x356)));

	if (t67 != 4294967278U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MAX;
	int16_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int64_t t68 = -52491260644LL;

	t68 = (x357-(x358%(x359-x360)));

	if (t68 != 2147516415LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int64_t t69 = 11310904570964LL;

	t69 = (x365-(x366%(x367-x368)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x369 = INT32_MIN;
	int64_t x370 = -19LL;
	static uint32_t x371 = 1216U;
	int8_t x372 = INT8_MIN;

	t70 = (x369-(x370%(x371-x372)));

	if (t70 != -2147483629LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x373 = INT16_MAX;
	int64_t x375 = -1LL;
	int64_t x376 = INT64_MIN;
	static volatile uint64_t t71 = 5377LLU;

	t71 = (x373-(x374%(x375-x376)));

	if (t71 != 32766LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int16_t x379 = 0;
	uint32_t x380 = 6U;

	t72 = (x377-(x378%(x379-x380)));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	int32_t t73 = 878283;

	t73 = (x393-(x394%(x395-x396)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = 0;
	int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t74 = 1334419826995215510LLU;

	t74 = (x397-(x398%(x399-x400)));

	if (t74 != 2147483648LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int32_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	volatile int64_t t75 = 533554724222763791LL;

	t75 = (x401-(x402%(x403-x404)));

	if (t75 != 4294967296LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int64_t x406 = INT64_MIN;
	int64_t t76 = -8494470209131740LL;

	t76 = (x405-(x406%(x407-x408)));

	if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x409 = 1315U;
	volatile int16_t x410 = -1469;
	static uint32_t x411 = 43402762U;
	int32_t x412 = INT32_MIN;
	volatile uint32_t t77 = 0U;

	t77 = (x409-(x410%(x411-x412)));

	if (t77 != 2190889194U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MAX;
	static int32_t x415 = 30488090;
	uint64_t x416 = 51574714LLU;
	static volatile uint64_t t78 = 51084263LLU;

	t78 = (x413-(x414%(x415-x416)));

	if (t78 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x417 = 33088LLU;
	volatile int8_t x418 = INT8_MIN;
	static uint16_t x419 = UINT16_MAX;
	volatile uint32_t x420 = 2947374U;

	t79 = (x417-(x418%(x419-x420)));

	if (t79 != 18446744073706702993LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x422 = 0;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t80 = 17;

	t80 = (x421-(x422%(x423-x424)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = -73;
	int32_t x427 = -411871;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t81 = 156010901558782LLU;

	t81 = (x425-(x426%(x427-x428)));

	if (t81 != 18445625863574065969LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x429 = 3580723U;
	volatile int32_t x430 = INT32_MAX;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = INT32_MIN;
	uint64_t t82 = 1LLU;

	t82 = (x429-(x430%(x431-x432)));

	if (t82 != 3580723LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x435 = 3U;
	int64_t x436 = 1922378160825LL;
	int64_t t83 = 11735459022859LL;

	t83 = (x433-(x434%(x435-x436)));

	if (t83 != -98303LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x438 = -1;
	int64_t x439 = 220506510937000LL;
	int16_t x440 = INT16_MIN;
	static int64_t t84 = 136068343708507704LL;

	t84 = (x437-(x438%(x439-x440)));

	if (t84 != 2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x441 = INT16_MIN;
	static uint32_t x442 = 1897060U;
	static int32_t x443 = -57;
	volatile int16_t x444 = INT16_MIN;
	volatile uint32_t t85 = 2826539U;

	t85 = (x441-(x442%(x443-x444)));

	if (t85 != 4294901995U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	volatile uint32_t t86 = 76284U;

	t86 = (x445-(x446%(x447-x448)));

	if (t86 != 2147483047U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = -3;
	static volatile int8_t x450 = INT8_MIN;
	volatile uint32_t x451 = UINT32_MAX;
	uint8_t x452 = 0U;
	static uint32_t t87 = 502U;

	t87 = (x449-(x450%(x451-x452)));

	if (t87 != 125U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x453 = -3740264857266879LL;
	uint32_t x454 = 63U;
	uint8_t x455 = 55U;

	t88 = (x453-(x454%(x455-x456)));

	if (t88 != 18443003808852284674LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	uint64_t x463 = UINT64_MAX;
	uint64_t x464 = 8735910173868LLU;

	t89 = (x461-(x462%(x463-x464)));

	if (t89 != 18446735335651894227LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x465 = 6U;
	uint16_t x466 = UINT16_MAX;
	volatile uint32_t x467 = 44893U;
	volatile int32_t x468 = -10173195;
	static volatile uint32_t t90 = 7811613U;

	t90 = (x465-(x466%(x467-x468)));

	if (t90 != 4294901767U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x469 = 32;
	int32_t x470 = -78055;
	int8_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t91 = -566033596;

	t91 = (x469-(x470%(x471-x472)));

	if (t91 != 12551) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x473 = 2308116216799576680LLU;
	int16_t x476 = INT16_MIN;
	uint64_t t92 = 12LLU;

	t92 = (x473-(x474%(x475-x476)));

	if (t92 != 2308116216799545201LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x477 = INT64_MIN;
	static int16_t x478 = -34;
	int64_t x479 = -1LL;
	uint64_t x480 = 6185043944781009509LLU;
	volatile uint64_t t93 = 975635028LLU;

	t93 = (x477-(x478%(x479-x480)));

	if (t93 != 3038328092073766332LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x482 = -1;
	int64_t x483 = -2LL;
	volatile int64_t t94 = -68879888453LL;

	t94 = (x481-(x482%(x483-x484)));

	if (t94 != 56427LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x497 = 807045579LLU;
	int32_t x499 = -2070522;
	volatile uint64_t t95 = 14504803679LLU;

	t95 = (x497-(x498%(x499-x500)));

	if (t95 != 807045575LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x501 = 45U;
	int32_t x502 = -1;
	int32_t x503 = INT32_MAX;

	t96 = (x501-(x502%(x503-x504)));

	if (t96 != 46) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = -1;
	static uint8_t x507 = 31U;
	uint16_t x508 = 0U;
	volatile int32_t t97 = 126;

	t97 = (x505-(x506%(x507-x508)));

	if (t97 != -27) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = INT32_MAX;
	int64_t x510 = -1LL;
	static int8_t x511 = 1;
	static int16_t x512 = INT16_MIN;
	int64_t t98 = 14930333358760012LL;

	t98 = (x509-(x510%(x511-x512)));

	if (t98 != 2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x517 = 477610U;
	volatile int8_t x518 = -1;
	static int64_t x519 = 3584341LL;
	volatile int64_t t99 = -502225742643761810LL;

	t99 = (x517-(x518%(x519-x520)));

	if (t99 != 477611LL) { NG(); } else { ; }
	
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


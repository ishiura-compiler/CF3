#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
volatile int64_t x8 = 25746368002LL;
int16_t x10 = 27;
volatile int8_t x11 = -1;
int16_t x14 = INT16_MIN;
uint64_t x15 = 2886793418227515171LLU;
int64_t x17 = INT64_MIN;
static volatile uint64_t t4 = 116LLU;
int16_t x22 = -1;
static uint16_t x42 = 12494U;
int32_t x43 = INT32_MIN;
int64_t x45 = INT64_MIN;
volatile int16_t x74 = INT16_MIN;
int32_t x76 = INT32_MAX;
volatile int64_t t14 = INT64_MIN;
int64_t t16 = 749LL;
int16_t x98 = -1;
int32_t x102 = -1;
volatile uint16_t x105 = UINT16_MAX;
uint64_t t20 = 17533473690256446LLU;
int64_t x110 = -1LL;
static volatile uint64_t x111 = 502LLU;
int16_t x112 = 46;
uint8_t x113 = 1U;
uint64_t t23 = UINT64_MAX;
int64_t x132 = INT64_MIN;
static int64_t x133 = 2507580286839069LL;
static int16_t x135 = INT16_MIN;
static int64_t t27 = -127265378LL;
int8_t x145 = INT8_MAX;
uint32_t x150 = 35U;
static int8_t x152 = INT8_MIN;
static int8_t x154 = INT8_MIN;
int8_t x157 = INT8_MIN;
static int8_t x161 = INT8_MIN;
int16_t x165 = INT16_MIN;
uint32_t t34 = 18065U;
uint32_t x178 = 191221U;
int16_t x187 = -110;
int64_t t37 = -1182679188LL;
int16_t x201 = -1;
int64_t t45 = 29LL;
int32_t x234 = 90;
volatile uint32_t t47 = 29U;
uint32_t x241 = 104525600U;
volatile uint32_t x242 = 4922U;
uint16_t x247 = 10U;
static int8_t x249 = INT8_MIN;
int8_t x252 = INT8_MAX;
volatile uint64_t t50 = 226992445LLU;
static volatile uint8_t x253 = UINT8_MAX;
uint8_t x255 = UINT8_MAX;
uint64_t x263 = UINT64_MAX;
volatile uint16_t x267 = 4U;
int32_t x280 = -403634005;
uint16_t x287 = 1U;
int64_t x288 = INT64_MIN;
volatile int64_t x289 = INT64_MIN;
static volatile uint16_t x293 = 116U;
volatile uint64_t x298 = UINT64_MAX;
static uint64_t t60 = 0LLU;
volatile int64_t x305 = -1LL;
int32_t x307 = INT32_MIN;
uint32_t x318 = 46U;
static int32_t x321 = -106090578;
int32_t t63 = -727;
volatile int16_t x333 = INT16_MAX;
volatile uint64_t x336 = UINT64_MAX;
int16_t x366 = INT16_MAX;
static uint64_t x372 = 21577851LLU;
volatile int32_t x373 = -1;
volatile int16_t x385 = INT16_MAX;
volatile uint32_t t78 = 1443819U;
int8_t x414 = INT8_MIN;
int64_t x420 = INT64_MIN;
int64_t t84 = -2792LL;
int8_t x434 = 0;
volatile int8_t x455 = INT8_MAX;
static volatile uint32_t t90 = 2954U;
int32_t x469 = INT32_MIN;
uint8_t x492 = 19U;
uint16_t x497 = UINT16_MAX;
volatile int16_t x502 = INT16_MAX;
uint64_t t95 = 189LLU;
static volatile int16_t x520 = 4;
int32_t t97 = 2352848;
int16_t x521 = 13974;
static int8_t x524 = -12;
static volatile uint8_t x526 = UINT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint64_t x3 = 73728801305LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 2961873839LLU;

	t0 = (x1^(x2%(x3%x4)));

	if (t0 != 9223372032740648492LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 0;
	uint16_t x6 = 248U;
	static int32_t x7 = 8;
	int64_t t1 = -784717855063119588LL;

	t1 = (x5^(x6%(x7%x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -1795449133LL;

	t2 = (x9^(x10%(x11%x12)));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -31;
	volatile int64_t x16 = INT64_MIN;
	uint64_t t3 = 107240439077921887LLU;

	t3 = (x13^(x14%(x15%x16)));

	if (t3 != 17320760509365123791LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 3422LLU;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = UINT64_MAX;

	t4 = (x17^(x18%(x19%x20)));

	if (t4 != 9223372036854779230LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 355U;
	static int64_t x23 = 3862684962244185474LL;
	int8_t x24 = INT8_MIN;
	static volatile int64_t t5 = -18LL;

	t5 = (x21^(x22%(x23%x24)));

	if (t5 != -356LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 783551118LL;
	int16_t x30 = INT16_MIN;
	static uint16_t x31 = 316U;
	int64_t x32 = 2633783912489621578LL;
	static int64_t t6 = -459930LL;

	t6 = (x29^(x30%(x31%x32)));

	if (t6 != -783551062LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -442812486117LL;
	static int64_t t7 = 4LL;

	t7 = (x33^(x34%(x35%x36)));

	if (t7 != 4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 1;
	static int32_t x38 = INT32_MIN;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 16119U;
	static int32_t t8 = 533441;

	t8 = (x37^(x38%(x39%x40)));

	if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 111U;
	volatile uint16_t x44 = UINT16_MAX;
	static volatile int32_t t9 = -456;

	t9 = (x41^(x42%(x43%x44)));

	if (t9 != 12449) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x46 = -24;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;
	volatile int64_t t10 = 1962LL;

	t10 = (x45^(x46%(x47%x48)));

	if (t10 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = 235;
	uint8_t x50 = 0U;
	static uint32_t x51 = 64969U;
	int16_t x52 = INT16_MIN;
	volatile uint32_t t11 = 3504U;

	t11 = (x49^(x50%(x51%x52)));

	if (t11 != 235U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = -1;
	int32_t x54 = -779408911;
	volatile uint64_t x55 = 1574890783552733LLU;
	int64_t x56 = -1LL;
	volatile uint64_t t12 = 475306LLU;

	t12 = (x53^(x54%(x55%x56)));

	if (t12 != 18446695748532570539LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -417;
	static volatile int8_t x58 = 41;
	uint64_t x59 = 4197355009574605517LLU;
	int32_t x60 = INT32_MAX;
	uint64_t t13 = 131687632LLU;

	t13 = (x57^(x58%(x59%x60)));

	if (t13 != 18446744073709551222LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MIN;

	t14 = (x73^(x74%(x75%x76)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -7702;
	static int64_t x78 = INT64_MIN;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	int64_t t15 = 33016910916469LL;

	t15 = (x77^(x78%(x79%x80)));

	if (t15 != -7702LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -34;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -874706412583808562LL;
	int32_t x84 = INT32_MIN;

	t16 = (x81^(x82%(x83%x84)));

	if (t16 != 94LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = 2;
	volatile int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile int32_t t17 = -1761797;

	t17 = (x89^(x90%(x91%x92)));

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x97 = -1;
	uint16_t x99 = 3009U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t18 = -138502275665577LL;

	t18 = (x97^(x98%(x99%x100)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x101 = INT16_MIN;
	static uint16_t x103 = UINT16_MAX;
	static int64_t x104 = INT64_MIN;
	int64_t t19 = -2174062663174LL;

	t19 = (x101^(x102%(x103%x104)));

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x106 = 2;
	uint64_t x107 = 162353705576314LLU;
	int64_t x108 = INT64_MIN;

	t20 = (x105^(x106%(x107%x108)));

	if (t20 != 65533LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = 1;
	uint64_t t21 = 0LLU;

	t21 = (x109^(x110%(x111%x112)));

	if (t21 != 14LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x114 = 48U;
	int8_t x115 = 17;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t22 = 3782619692586958309LL;

	t22 = (x113^(x114%(x115%x116)));

	if (t22 != 15LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;
	volatile uint64_t x119 = 5LLU;
	int16_t x120 = INT16_MAX;

	t23 = (x117^(x118%(x119%x120)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x121 = 308U;
	int8_t x122 = -8;
	static uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MAX;
	volatile uint32_t t24 = 769212U;

	t24 = (x121^(x122%(x123%x124)));

	if (t24 != 308U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = -5;
	volatile int64_t x130 = -24791239486505LL;
	static uint64_t x131 = 777030894268LLU;
	uint64_t t25 = 7LLU;

	t25 = (x129^(x130%(x131%x132)));

	if (t25 != 18446743660378066376LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x134 = INT8_MIN;
	static int64_t x136 = -2070167418804398LL;
	volatile int64_t t26 = -136392LL;

	t26 = (x133^(x134%(x135%x136)));

	if (t26 != -2507580286839139LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MAX;
	static volatile int16_t x142 = -720;
	volatile int64_t x143 = 721508598845LL;
	int8_t x144 = INT8_MAX;

	t27 = (x141^(x142%(x143%x144)));

	if (t27 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x146 = INT64_MIN;
	int32_t x147 = -1;
	volatile int32_t x148 = INT32_MIN;
	int64_t t28 = -19LL;

	t28 = (x145^(x146%(x147%x148)));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x149 = -1LL;
	int16_t x151 = INT16_MAX;
	int64_t t29 = 653328312LL;

	t29 = (x149^(x150%(x151%x152)));

	if (t29 != -36LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int64_t x155 = INT64_MIN;
	int64_t x156 = 184LL;
	int64_t t30 = -1871595917LL;

	t30 = (x153^(x154%(x155%x156)));

	if (t30 != -4294967241LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x158 = INT32_MIN;
	uint32_t x159 = 1199963766U;
	int64_t x160 = INT64_MIN;
	int64_t t31 = -422441540024112LL;

	t31 = (x157^(x158%(x159%x160)));

	if (t31 != 947519990LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x162 = 329U;
	int64_t x163 = 23LL;
	uint64_t x164 = 1995880945488373LLU;
	uint64_t t32 = 111154465104383417LLU;

	t32 = (x161^(x162%(x163%x164)));

	if (t32 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x166 = 3718085;
	static uint32_t x167 = 88736U;
	int16_t x168 = INT16_MAX;
	uint32_t t33 = 577U;

	t33 = (x165^(x166%(x167%x168)));

	if (t33 != 4294940293U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 15U;
	int8_t x174 = 8;
	int32_t x175 = -3821;
	static int32_t x176 = -3798901;

	t34 = (x173^(x174%(x175%x176)));

	if (t34 != 7U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	uint64_t x179 = 981509074150213774LLU;
	int16_t x180 = INT16_MAX;
	volatile uint64_t t35 = 447355LLU;

	t35 = (x177^(x178%(x179%x180)));

	if (t35 != 18446744073709551398LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 3761;
	uint32_t x183 = 151U;
	int8_t x184 = INT8_MIN;
	static uint32_t t36 = 487991605U;

	t36 = (x181^(x182%(x183%x184)));

	if (t36 != 4294934665U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 20U;
	static volatile int32_t x186 = INT32_MAX;
	volatile int64_t x188 = INT64_MIN;

	t37 = (x185^(x186%(x187%x188)));

	if (t37 != 87LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = -27LL;
	static uint64_t x194 = 2866780013933LLU;
	uint16_t x195 = 29U;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t38 = 5992677700531LLU;

	t38 = (x193^(x194%(x195%x196)));

	if (t38 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	int64_t x204 = 57010898LL;
	volatile int64_t t39 = 5579318901046LL;

	t39 = (x201^(x202%(x203%x204)));

	if (t39 != 7LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x205 = 14U;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MAX;
	volatile int64_t t40 = -1913797615LL;

	t40 = (x205^(x206%(x207%x208)));

	if (t40 != -10LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = INT32_MIN;
	static uint64_t x210 = 401392LLU;
	static volatile int8_t x211 = INT8_MAX;
	int16_t x212 = 11;
	volatile uint64_t t41 = 4935339926390911LLU;

	t41 = (x209^(x210%(x211%x212)));

	if (t41 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x213 = -14;
	uint64_t x214 = 197397902535LLU;
	int64_t x215 = INT64_MIN;
	volatile uint8_t x216 = 7U;
	volatile uint64_t t42 = 99LLU;

	t42 = (x213^(x214%(x215%x216)));

	if (t42 != 18446743876311649077LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x217 = -1;
	int32_t x218 = -16359973;
	uint64_t x219 = 29802256LLU;
	volatile uint32_t x220 = 15620380U;
	uint64_t t43 = 5584220468397LLU;

	t43 = (x217^(x218%(x219%x220)));

	if (t43 != 18446744073698724048LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = -110612;
	int64_t x226 = -11260804827LL;
	int8_t x227 = INT8_MIN;
	static uint32_t x228 = 7715U;
	volatile int64_t t44 = -9680LL;

	t44 = (x225^(x226%(x227%x228)));

	if (t44 != 110969LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x229 = 18U;
	volatile int8_t x230 = -20;
	int64_t x231 = -1LL;
	volatile int32_t x232 = 21338520;

	t45 = (x229^(x230%(x231%x232)));

	if (t45 != 18LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x233 = 67413U;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = -12LL;
	static volatile int64_t t46 = 1014659599028635LL;

	t46 = (x233^(x234%(x235%x236)));

	if (t46 != 67413LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x237 = INT16_MAX;
	uint32_t x238 = 4052U;
	int16_t x239 = 143;
	int8_t x240 = INT8_MIN;

	t47 = (x237^(x238%(x239%x240)));

	if (t47 != 32765U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x243 = UINT8_MAX;
	uint8_t x244 = 109U;
	uint32_t t48 = 178647U;

	t48 = (x241^(x242%(x243%x244)));

	if (t48 != 104525601U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x246 = 13414U;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t49 = 58304934U;

	t49 = (x245^(x246%(x247%x248)));

	if (t49 != 32763U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x250 = 428;
	volatile uint64_t x251 = 2986243744527862100LLU;

	t50 = (x249^(x250%(x251%x252)));

	if (t50 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x254 = 86105U;
	static int16_t x256 = INT16_MAX;
	uint32_t t51 = 215398897U;

	t51 = (x253^(x254%(x255%x256)));

	if (t51 != 85U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 41LLU;
	volatile uint8_t x258 = UINT8_MAX;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t52 = 2149050916436824742LLU;

	t52 = (x257^(x258%(x259%x260)));

	if (t52 != 46LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	volatile uint64_t t53 = 2412951073812642LLU;

	t53 = (x261^(x262%(x263%x264)));

	if (t53 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x265 = -1;
	volatile int64_t x266 = 1891LL;
	int32_t x268 = INT32_MIN;
	static int64_t t54 = 715250176187LL;

	t54 = (x265^(x266%(x267%x268)));

	if (t54 != -4LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x269 = 17U;
	int16_t x270 = 13;
	static uint8_t x271 = 3U;
	int64_t x272 = 2LL;
	volatile int64_t t55 = -251500793949670074LL;

	t55 = (x269^(x270%(x271%x272)));

	if (t55 != 17LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x277 = 7;
	int32_t x278 = INT32_MAX;
	int64_t x279 = INT64_MIN;
	static volatile int64_t t56 = 359LL;

	t56 = (x277^(x278%(x279%x280)));

	if (t56 != 190789254LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MIN;
	static uint32_t x286 = 0U;
	volatile int64_t t57 = 1824220331LL;

	t57 = (x285^(x286%(x287%x288)));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x290 = 9U;
	int64_t x291 = INT64_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t58 = 49113150702166LL;

	t58 = (x289^(x290%(x291%x292)));

	if (t58 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x294 = 2122478LLU;
	static volatile int64_t x295 = INT64_MIN;
	static volatile int8_t x296 = -15;
	volatile uint64_t t59 = 16021588LLU;

	t59 = (x293^(x294%(x295%x296)));

	if (t59 != 2122394LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = -1;
	int64_t x299 = INT64_MIN;
	static volatile int16_t x300 = INT16_MAX;

	t60 = (x297^(x298%(x299%x300)));

	if (t60 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x306 = INT64_MAX;
	int32_t x308 = -510764128;
	static volatile int64_t t61 = 1LL;

	t61 = (x305^(x306%(x307%x308)));

	if (t61 != -18759936LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x317 = INT64_MAX;
	int16_t x319 = -1;
	static int16_t x320 = INT16_MAX;
	static int64_t t62 = 126116068LL;

	t62 = (x317^(x318%(x319%x320)));

	if (t62 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x322 = 6U;
	uint16_t x323 = 134U;
	static volatile uint16_t x324 = UINT16_MAX;

	t63 = (x321^(x322%(x323%x324)));

	if (t63 != -106090584) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = 0U;
	uint8_t x330 = 1U;
	int32_t x331 = -1139;
	int32_t x332 = INT32_MIN;
	int32_t t64 = -1;

	t64 = (x329^(x330%(x331%x332)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x334 = -1;
	uint8_t x335 = 91U;
	static volatile uint64_t t65 = 542LLU;

	t65 = (x333^(x334%(x335%x336)));

	if (t65 != 32752LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = 291U;
	volatile int64_t t66 = -14070LL;

	t66 = (x337^(x338%(x339%x340)));

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = 1585521183072LL;
	static volatile int16_t x348 = INT16_MAX;
	volatile int64_t t67 = -52846554126630LL;

	t67 = (x345^(x346%(x347%x348)));

	if (t67 != -2147483641LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x361 = UINT64_MAX;
	static int8_t x362 = INT8_MIN;
	uint32_t x363 = 2U;
	int16_t x364 = INT16_MIN;
	uint64_t t68 = UINT64_MAX;

	t68 = (x361^(x362%(x363%x364)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x365 = 0U;
	volatile uint16_t x367 = 5979U;
	static volatile int32_t x368 = 960004;
	static volatile int32_t t69 = -253856;

	t69 = (x365^(x366%(x367%x368)));

	if (t69 != 2872) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x369 = 0;
	int64_t x370 = 6764365567383LL;
	static int64_t x371 = -1LL;
	static uint64_t t70 = 3955989981963974628LLU;

	t70 = (x369^(x370%(x371%x372)));

	if (t70 != 11807295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x374 = 1047289654578LL;
	int8_t x375 = INT8_MIN;
	int32_t x376 = 74;
	volatile int64_t t71 = 2133448172562977LL;

	t71 = (x373^(x374%(x375%x376)));

	if (t71 != -31LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x377 = 0U;
	int16_t x378 = -1;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = 11U;
	int64_t t72 = -27722LL;

	t72 = (x377^(x378%(x379%x380)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 9608717U;
	volatile int64_t t73 = -1LL;

	t73 = (x381^(x382%(x383%x384)));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x386 = 1619712192U;
	int16_t x387 = -1;
	int32_t x388 = -160731806;
	uint32_t t74 = 56994U;

	t74 = (x385^(x386%(x387%x388)));

	if (t74 != 1619699519U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = -3;
	volatile int8_t x390 = INT8_MAX;
	uint64_t x391 = 110694964LLU;
	uint32_t x392 = 965263U;
	uint64_t t75 = 2932680408650762LLU;

	t75 = (x389^(x390%(x391%x392)));

	if (t75 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -149;
	uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 1518U;
	static uint32_t t76 = 30612246U;

	t76 = (x393^(x394%(x395%x396)));

	if (t76 != 4294967188U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = 315886161U;
	volatile uint32_t t77 = 72704U;

	t77 = (x397^(x398%(x399%x400)));

	if (t77 != 4145117693U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x401 = 0;
	int16_t x402 = INT16_MIN;
	static volatile uint32_t x403 = 934154U;
	uint32_t x404 = UINT32_MAX;

	t78 = (x401^(x402%(x403%x404)));

	if (t78 != 628590U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = -93;
	static int64_t x406 = INT64_MIN;
	volatile uint16_t x407 = 23608U;
	static int32_t x408 = INT32_MIN;
	volatile int64_t t79 = 55760022767811150LL;

	t79 = (x405^(x406%(x407%x408)));

	if (t79 != 8259LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x413 = INT16_MIN;
	int32_t x415 = -48776597;
	uint32_t x416 = 318915381U;
	uint32_t t80 = 24U;

	t80 = (x413^(x414%(x415%x416)));

	if (t80 != 4212211964U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x417 = -1;
	int16_t x418 = 251;
	int16_t x419 = -7;
	volatile int64_t t81 = 1867674401129232LL;

	t81 = (x417^(x418%(x419%x420)));

	if (t81 != -7LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = -1;
	uint8_t x422 = 2U;
	int32_t x423 = INT32_MIN;
	uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t82 = 1179LLU;

	t82 = (x421^(x422%(x423%x424)));

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = INT64_MIN;
	volatile uint8_t x426 = 103U;
	static uint64_t x427 = 97083425LLU;
	volatile int64_t x428 = 1000196LL;
	volatile uint64_t t83 = 2LLU;

	t83 = (x425^(x426%(x427%x428)));

	if (t83 != 9223372036854775911LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x429 = -1LL;
	volatile int32_t x430 = INT32_MIN;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;

	t84 = (x429^(x430%(x431%x432)));

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x433 = -66187;
	uint8_t x435 = 5U;
	static int16_t x436 = INT16_MIN;
	int32_t t85 = -27;

	t85 = (x433^(x434%(x435%x436)));

	if (t85 != -66187) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = 9LLU;
	uint64_t x439 = 1136980289LLU;
	int8_t x440 = -1;
	volatile uint64_t t86 = 1991780849LLU;

	t86 = (x437^(x438%(x439%x440)));

	if (t86 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x441 = UINT64_MAX;
	int16_t x442 = INT16_MAX;
	static int16_t x443 = INT16_MAX;
	volatile uint64_t x444 = 462LLU;
	static volatile uint64_t t87 = 120321254LLU;

	t87 = (x441^(x442%(x443%x444)));

	if (t87 != 18446744073709551300LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x449 = 472220701434033022LL;
	int16_t x450 = -1;
	static volatile int8_t x451 = INT8_MIN;
	int32_t x452 = 285;
	volatile int64_t t88 = -71471130651LL;

	t88 = (x449^(x450%(x451%x452)));

	if (t88 != -472220701434033023LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x453 = INT64_MIN;
	uint64_t x454 = 177519427LLU;
	int32_t x456 = -92966000;
	uint64_t t89 = 49LLU;

	t89 = (x453^(x454%(x455%x456)));

	if (t89 != 9223372036854775905LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x461 = INT16_MAX;
	int16_t x462 = INT16_MAX;
	int32_t x463 = -1;
	uint32_t x464 = 29U;

	t90 = (x461^(x462%(x463%x464)));

	if (t90 != 32760U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x470 = 1;
	int8_t x471 = -1;
	int32_t x472 = -36;
	int32_t t91 = INT32_MIN;

	t91 = (x469^(x470%(x471%x472)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x473 = INT64_MAX;
	static int32_t x474 = -679617;
	static uint64_t x475 = UINT64_MAX;
	int64_t x476 = -1280619945126640233LL;
	volatile uint64_t t92 = 12320LLU;

	t92 = (x473^(x474%(x475%x476)));

	if (t92 != 8705307194918867056LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x489 = 1;
	static volatile int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	int32_t t93 = -235;

	t93 = (x489^(x490%(x491%x492)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x498 = INT16_MIN;
	int16_t x499 = 184;
	uint16_t x500 = UINT16_MAX;
	int32_t t94 = -3;

	t94 = (x497^(x498%(x499%x500)));

	if (t94 != -65521) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x501 = 4747U;
	uint16_t x503 = UINT16_MAX;
	uint64_t x504 = 10408905430246LLU;

	t95 = (x501^(x502%(x503%x504)));

	if (t95 != 28020LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x505 = INT16_MIN;
	static int16_t x506 = -25;
	static volatile int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MIN;
	static int32_t t96 = -7;

	t96 = (x505^(x506%(x507%x508)));

	if (t96 != 32743) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x517 = INT16_MAX;
	int32_t x518 = -1;
	static volatile int16_t x519 = -15;

	t97 = (x517^(x518%(x519%x520)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = 1;
	volatile uint32_t t98 = 5085U;

	t98 = (x521^(x522%(x523%x524)));

	if (t98 != 13974U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x525 = INT64_MIN;
	int64_t x527 = INT64_MIN;
	uint32_t x528 = UINT32_MAX;
	int64_t t99 = -182302982534LL;

	t99 = (x525^(x526%(x527%x528)));

	if (t99 != -9223372036854775553LL) { NG(); } else { ; }
	
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


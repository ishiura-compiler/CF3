#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x8 = UINT32_MAX;
int16_t x9 = INT16_MIN;
volatile uint16_t x10 = 0U;
volatile int8_t x11 = 0;
int8_t x13 = -55;
uint16_t x14 = 21U;
static int8_t x15 = -1;
volatile int8_t x23 = -1;
int16_t x33 = 161;
uint32_t x36 = UINT32_MAX;
static volatile uint16_t x37 = 44U;
volatile uint64_t x38 = 5LLU;
volatile int64_t t7 = 177698167LL;
volatile int32_t x51 = -1;
int32_t t9 = 3;
volatile uint64_t x63 = 0LLU;
volatile uint64_t t11 = UINT64_MAX;
volatile uint16_t x66 = 3U;
int32_t t12 = 1;
int64_t x71 = INT64_MAX;
static uint32_t x91 = 152561U;
int8_t x99 = INT8_MIN;
static uint32_t x119 = 820U;
int16_t x126 = -1;
int16_t x128 = 9871;
static volatile int64_t t21 = -8777030025000LL;
int16_t x148 = -3683;
int64_t x149 = -35076441187063LL;
int64_t x151 = INT64_MAX;
volatile uint64_t t23 = 15506LLU;
int16_t x157 = 244;
uint64_t x159 = UINT64_MAX;
uint8_t x164 = 20U;
volatile uint16_t x173 = UINT16_MAX;
uint16_t x177 = UINT16_MAX;
int32_t x178 = -1;
int16_t x179 = 316;
uint32_t x180 = 41318U;
volatile uint32_t t29 = 285779815U;
static int8_t x185 = INT8_MIN;
int16_t x189 = INT16_MAX;
int8_t x190 = -1;
volatile int64_t x192 = -20737586729246LL;
int64_t t31 = 0LL;
volatile uint32_t x193 = 658385735U;
uint32_t t32 = 51U;
uint8_t x197 = UINT8_MAX;
static volatile int32_t t33 = -44806499;
uint32_t x213 = UINT32_MAX;
volatile int8_t x215 = INT8_MIN;
static volatile uint32_t t34 = 823590354U;
static uint64_t x220 = UINT64_MAX;
int64_t x225 = INT64_MIN;
int16_t x228 = -1;
static int32_t x241 = INT32_MIN;
int8_t x253 = INT8_MIN;
uint8_t x273 = UINT8_MAX;
static int64_t x275 = -1LL;
int64_t x278 = 49043LL;
uint8_t x280 = 50U;
uint64_t t43 = 456LLU;
uint64_t x301 = 1073592LLU;
int64_t x302 = 102237798LL;
uint64_t x303 = 3194700445LLU;
uint8_t x304 = UINT8_MAX;
int8_t x307 = -5;
volatile int8_t x308 = INT8_MIN;
int64_t x313 = INT64_MIN;
static volatile uint64_t x314 = 417079245263147100LLU;
uint32_t x316 = 935U;
volatile uint32_t x323 = UINT32_MAX;
static int8_t x328 = INT8_MAX;
uint16_t x335 = 1U;
uint32_t t50 = 330U;
int16_t x347 = -7884;
int8_t x348 = 1;
uint64_t x349 = 24380LLU;
int8_t x352 = -1;
volatile uint64_t t52 = 623LLU;
uint64_t x365 = UINT64_MAX;
uint64_t t54 = 101683909323LLU;
int16_t x380 = INT16_MIN;
volatile uint64_t x383 = 657744217226972LLU;
static volatile uint64_t t57 = 38LLU;
int32_t x405 = 867758007;
uint16_t x406 = 22535U;
uint64_t t60 = 27LLU;
uint8_t x444 = UINT8_MAX;
uint64_t t63 = 4081982204337LLU;
uint32_t x465 = UINT32_MAX;
uint64_t t66 = 30488782006133687LLU;
static volatile int64_t x476 = -1LL;
int64_t t69 = -36569LL;
uint64_t x496 = 1694922201LLU;
static uint8_t x516 = UINT8_MAX;
int64_t t74 = 3011608091465440LL;
volatile int64_t x542 = -12329LL;
static int16_t x546 = -9;
uint64_t t76 = 12065117764LLU;
int64_t x559 = -1LL;
static uint64_t t77 = 3360LLU;
int32_t x564 = -1;
uint64_t x565 = 97966882403033LLU;
uint16_t x567 = 6U;
volatile int64_t x572 = -40LL;
static int8_t x574 = INT8_MAX;
volatile uint32_t x576 = 48466U;
uint32_t x597 = UINT32_MAX;
int64_t x613 = -1LL;
volatile uint64_t t89 = 1559596012824859084LLU;
volatile uint64_t x660 = UINT64_MAX;
static volatile uint64_t t91 = 58LLU;
uint16_t x669 = UINT16_MAX;
volatile int64_t x673 = INT64_MIN;
static int16_t x680 = INT16_MIN;
int32_t t94 = -1596;
volatile uint8_t x700 = 0U;
volatile int16_t x709 = -1;
volatile uint64_t x711 = UINT64_MAX;
volatile int64_t x712 = -477566508835LL;
int8_t x740 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 7880594934LLU;
	int16_t x3 = 53;
	static int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 31824147561LLU;

	t0 = (x1^((x2*x3)*x4));

	if (t0 != 11499068597603401600LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	volatile uint8_t x6 = 33U;
	uint8_t x7 = 2U;
	volatile uint32_t t1 = 14193U;

	t1 = (x5^((x6*x7)*x8));

	if (t1 != 2147483713U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x12 = 210200LLU;
	uint64_t t2 = 212750LLU;

	t2 = (x9^((x10*x11)*x12));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x16 = 1;
	static int32_t t3 = 1731;

	t3 = (x13^((x14*x15)*x16));

	if (t3 != 34) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -7317087782424853LL;
	int32_t x22 = 1026510;
	int64_t x24 = -1LL;
	int64_t t4 = 1502039LL;

	t4 = (x21^((x22*x23)*x24));

	if (t4 != -7317087781419227LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x34 = -1;
	int64_t x35 = 0LL;
	static volatile int64_t t5 = 3670026088915534338LL;

	t5 = (x33^((x34*x35)*x36));

	if (t5 != 161LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 0U;
	uint64_t t6 = 38LLU;

	t6 = (x37^((x38*x39)*x40));

	if (t6 != 44LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -46;
	static uint32_t x46 = 1872U;
	int32_t x47 = INT32_MIN;
	int64_t x48 = INT64_MIN;

	t7 = (x45^((x46*x47)*x48));

	if (t7 != -46LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x49 = UINT32_MAX;
	static int16_t x50 = 502;
	int32_t x52 = -1;
	volatile uint32_t t8 = 4546U;

	t8 = (x49^((x50*x51)*x52));

	if (t8 != 4294966793U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = UINT16_MAX;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	static volatile int16_t x56 = 0;

	t9 = (x53^((x54*x55)*x56));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = UINT32_MAX;
	static int8_t x58 = INT8_MIN;
	int8_t x59 = -43;
	volatile int8_t x60 = -1;
	static uint32_t t10 = 753U;

	t10 = (x57^((x58*x59)*x60));

	if (t10 != 5503U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	int16_t x64 = -1;

	t11 = (x61^((x62*x63)*x64));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x65 = 15U;
	volatile int16_t x67 = INT16_MIN;
	static volatile uint8_t x68 = 126U;

	t12 = (x65^((x66*x67)*x68));

	if (t12 != -12386289) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x69 = INT32_MIN;
	uint64_t x70 = 2228307162711367LLU;
	static int8_t x72 = 63;
	static uint64_t t13 = 17672394430604916LLU;

	t13 = (x69^((x70*x71)*x72));

	if (t13 != 9363755389995250567LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x73 = 11813U;
	volatile uint8_t x74 = 25U;
	int64_t x75 = -1LL;
	static int32_t x76 = INT32_MAX;
	static int64_t t14 = -133433847953120018LL;

	t14 = (x73^((x74*x75)*x76));

	if (t14 != -53687079364LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	volatile int16_t x78 = INT16_MIN;
	uint8_t x79 = 6U;
	static int32_t x80 = -1;
	static volatile int64_t t15 = -879769561081792LL;

	t15 = (x77^((x78*x79)*x80));

	if (t15 != 9223372036854579199LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 18054U;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = -1;
	int32_t t16 = 7;

	t16 = (x85^((x86*x87)*x88));

	if (t16 != -4603783) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = 16;
	volatile uint8_t x90 = 1U;
	int16_t x92 = 1355;
	uint32_t t17 = 204904871U;

	t17 = (x89^((x90*x91)*x92));

	if (t17 != 206720139U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x97 = INT32_MIN;
	int8_t x98 = -4;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t18 = -62392;

	t18 = (x97^((x98*x99)*x100));

	if (t18 != 2130706432) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = -53936LL;
	static volatile int16_t x103 = 46;
	int16_t x104 = -1;
	volatile uint64_t t19 = 141187097LLU;

	t19 = (x101^((x102*x103)*x104));

	if (t19 != 18446744073707070559LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int8_t x118 = -9;
	int32_t x120 = INT32_MAX;
	uint32_t t20 = 6U;

	t20 = (x117^((x118*x119)*x120));

	if (t20 != 58155U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;

	t21 = (x125^((x126*x127)*x128));

	if (t21 != 9223372036207879823LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MIN;
	int8_t x147 = 0;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x145^((x146*x147)*x148));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x150 = -1;
	volatile uint64_t x152 = 11418779157042LLU;

	t23 = (x149^((x150*x151)*x152));

	if (t23 != 18446720414972927803LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x158 = -1;
	uint16_t x160 = 6U;
	uint64_t t24 = 86829LLU;

	t24 = (x157^((x158*x159)*x160));

	if (t24 != 242LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x161 = -1;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 13585LLU;
	uint64_t t25 = 18050LLU;

	t25 = (x161^((x162*x163)*x164));

	if (t25 != 8903065599LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 0U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t26 = INT32_MIN;

	t26 = (x165^((x166*x167)*x168));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MAX;
	int64_t x171 = -1LL;
	volatile int16_t x172 = INT16_MAX;
	int64_t t27 = 218565982LL;

	t27 = (x169^((x170*x171)*x172));

	if (t27 != -3221291008LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = 7LL;
	int32_t x176 = -1;
	uint64_t t28 = 2908615769840818319LLU;

	t28 = (x173^((x174*x175)*x176));

	if (t28 != 65528LLU) { NG(); } else { ; }
	
}

void f29(void) {


	t29 = (x177^((x178*x179)*x180));

	if (t29 != 4281874919U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x186 = 5948512446334LLU;
	int16_t x187 = INT16_MIN;
	static int16_t x188 = -404;
	uint64_t t30 = 2128LLU;

	t30 = (x185^((x186*x187)*x188));

	if (t30 != 13485694608592863104LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x191 = 15U;

	t31 = (x189^((x190*x191)*x192));

	if (t31 != 311063800971069LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x194 = 43;
	int16_t x195 = -1;
	int32_t x196 = -1;

	t32 = (x193^((x194*x195)*x196));

	if (t32 != 658385772U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x198 = UINT16_MAX;
	static uint8_t x199 = 1U;
	static int16_t x200 = 1;

	t33 = (x197^((x198*x199)*x200));

	if (t33 != 65280) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x214 = 13U;
	int8_t x216 = INT8_MAX;

	t34 = (x213^((x214*x215)*x216));

	if (t34 != 211327U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x217 = 1276648U;
	uint32_t x218 = 861U;
	static uint16_t x219 = 3U;
	static volatile uint64_t t35 = 2589382993822029LLU;

	t35 = (x217^((x218*x219)*x220));

	if (t35 != 18446744073708277505LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x226 = 500799943760LL;
	volatile uint64_t x227 = UINT64_MAX;
	static volatile uint64_t t36 = 20LLU;

	t36 = (x225^((x226*x227)*x228));

	if (t36 != 9223372537654719568LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x237 = 43;
	int16_t x238 = -1;
	uint32_t x239 = 107459U;
	int32_t x240 = INT32_MAX;
	static volatile uint32_t t37 = 106U;

	t37 = (x237^((x238*x239)*x240));

	if (t37 != 2147591144U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x242 = UINT64_MAX;
	uint32_t x243 = UINT32_MAX;
	static volatile uint64_t x244 = UINT64_MAX;
	static uint64_t t38 = 1635551164870099419LLU;

	t38 = (x241^((x242*x243)*x244));

	if (t38 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = -201;
	uint64_t x251 = 11806LLU;
	int32_t x252 = -1;
	uint64_t t39 = 109881714288582LLU;

	t39 = (x249^((x250*x251)*x252));

	if (t39 != 2145110641LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x254 = 110971LLU;
	static int16_t x255 = INT16_MIN;
	uint32_t x256 = 100834259U;
	uint64_t t40 = 7416770LLU;

	t40 = (x253^((x254*x255)*x256));

	if (t40 != 366663386906263424LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x274 = -1LL;
	static int16_t x276 = INT16_MIN;
	volatile int64_t t41 = 1899505156LL;

	t41 = (x273^((x274*x275)*x276));

	if (t41 != -32513LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x277 = 28U;
	uint32_t x279 = 167U;
	int64_t t42 = -5499387005680595LL;

	t42 = (x277^((x278*x279)*x280));

	if (t42 != 409509030LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = -7;
	static volatile int64_t x283 = 139191LL;
	uint64_t x284 = 3020LLU;

	t43 = (x281^((x282*x283)*x284));

	if (t43 != 9223372033912278068LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t t44 = 4LLU;

	t44 = (x301^((x302*x303)*x304));

	if (t44 != 9500904090597864650LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x305 = 3U;
	uint64_t x306 = 8761530928754LLU;
	uint64_t t45 = 25033203LLU;

	t45 = (x305^((x306*x307)*x308));

	if (t45 != 5607379794402563LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x315 = 8U;
	uint64_t t46 = 216336540LLU;

	t46 = (x313^((x314*x315)*x316));

	if (t46 != 11476378148280860704LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = 4465097855013152927LLU;
	int8_t x324 = INT8_MIN;
	uint64_t t47 = 42LLU;

	t47 = (x321^((x322*x323)*x324));

	if (t47 != 14278412237914001280LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x325 = -2;
	volatile int16_t x326 = 0;
	uint32_t x327 = UINT32_MAX;
	static volatile uint32_t t48 = 340U;

	t48 = (x325^((x326*x327)*x328));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x333 = -15769;
	uint8_t x334 = UINT8_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t49 = 40445;

	t49 = (x333^((x334*x335)*x336));

	if (t49 != 8340071) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x341 = -1;
	uint32_t x342 = 51U;
	uint16_t x343 = 289U;
	int16_t x344 = -13;

	t50 = (x341^((x342*x343)*x344));

	if (t50 != 191606U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	uint32_t t51 = 267231U;

	t51 = (x345^((x346*x347)*x348));

	if (t51 != 4294959411U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x350 = 152977U;
	int8_t x351 = INT8_MIN;

	t52 = (x349^((x350*x351)*x352));

	if (t52 != 19568572LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x357 = 1101;
	int8_t x358 = -1;
	volatile int64_t x359 = -2247276LL;
	int16_t x360 = INT16_MIN;
	int64_t t53 = -12LL;

	t53 = (x357^((x358*x359)*x360));

	if (t53 != -73638738867LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x366 = 2699437782062963LLU;
	int8_t x367 = -1;
	static uint16_t x368 = 1056U;

	t54 = (x365^((x366*x367)*x368));

	if (t54 != 2850606297858488927LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x373 = INT64_MIN;
	volatile int32_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = -1;
	static volatile int64_t t55 = -767LL;

	t55 = (x373^((x374*x375)*x376));

	if (t55 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x377 = -1;
	static int32_t x378 = -4143;
	uint64_t x379 = 2833067658770742LLU;
	uint64_t t56 = 524724601089168760LLU;

	t56 = (x377^((x378*x379)*x380));

	if (t56 != 3513337353702408191LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x381 = 24039181793LLU;
	int8_t x382 = INT8_MIN;
	volatile int64_t x384 = 125986LL;

	t57 = (x381^((x382*x383)*x384));

	if (t57 != 18404528637894437345LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	int16_t x391 = INT16_MAX;
	static int64_t x392 = 923165LL;
	int64_t t58 = 226262591887LL;

	t58 = (x389^((x390*x391)*x392));

	if (t58 != -30249326110LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x407 = INT16_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t59 = 70427719655521LLU;

	t59 = (x405^((x406*x407)*x408));

	if (t59 != 532377527LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x417 = 2718076453LLU;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = 1;
	volatile uint16_t x420 = 0U;

	t60 = (x417^((x418*x419)*x420));

	if (t60 != 2718076453LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x421 = 21477U;
	static int32_t x422 = 42;
	int8_t x423 = 19;
	volatile int8_t x424 = -1;
	volatile int32_t t61 = 2010311;

	t61 = (x421^((x422*x423)*x424));

	if (t61 != -20729) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x441 = 114U;
	int8_t x442 = INT8_MIN;
	uint8_t x443 = 90U;
	volatile int32_t t62 = 768644;

	t62 = (x441^((x442*x443)*x444));

	if (t62 != -2937486) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x449 = 229U;
	int64_t x450 = INT64_MAX;
	uint64_t x451 = UINT64_MAX;
	volatile uint8_t x452 = 1U;

	t63 = (x449^((x450*x451)*x452));

	if (t63 != 9223372036854776036LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x457 = INT16_MAX;
	volatile int16_t x458 = -2;
	int64_t x459 = -42LL;
	volatile int8_t x460 = INT8_MIN;
	int64_t t64 = -109708869745LL;

	t64 = (x457^((x458*x459)*x460));

	if (t64 != -22017LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x461 = 3612U;
	static int16_t x462 = -1;
	int8_t x463 = -1;
	int32_t x464 = INT32_MIN;
	volatile uint32_t t65 = 15457U;

	t65 = (x461^((x462*x463)*x464));

	if (t65 != 2147487260U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x466 = -13;
	uint64_t x467 = 5LLU;
	uint16_t x468 = 387U;

	t66 = (x465^((x466*x467)*x468));

	if (t66 != 18446744069414609474LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x474 = 78U;
	int16_t x475 = INT16_MAX;
	int64_t t67 = 1986128954LL;

	t67 = (x473^((x474*x475)*x476));

	if (t67 != 2144927822LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x481 = 0U;
	volatile int8_t x482 = 44;
	static uint16_t x483 = UINT16_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t68 = -1415529;

	t68 = (x481^((x482*x483)*x484));

	if (t68 != -369093120) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x485 = INT64_MAX;
	volatile uint8_t x486 = 105U;
	uint8_t x487 = 15U;
	uint8_t x488 = 9U;

	t69 = (x485^((x486*x487)*x488));

	if (t69 != 9223372036854761632LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x489 = INT16_MIN;
	uint64_t x490 = 4265242845LLU;
	uint8_t x491 = UINT8_MAX;
	volatile int32_t x492 = 638240991;
	volatile uint64_t t70 = 208083838509616890LLU;

	t70 = (x489^((x490*x491)*x492));

	if (t70 != 6801805637605788285LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x493 = 22680U;
	static uint8_t x494 = 4U;
	uint16_t x495 = UINT16_MAX;
	uint64_t t71 = 15325270LLU;

	t71 = (x493^((x494*x495)*x496));

	if (t71 != 444306905788420LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x505 = INT64_MAX;
	uint8_t x506 = 3U;
	uint64_t x507 = 2783271284LLU;
	int16_t x508 = INT16_MAX;
	static volatile uint64_t t72 = 2435929LLU;

	t72 = (x505^((x506*x507)*x508));

	if (t72 != 9223098438504287323LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x513 = INT8_MIN;
	int16_t x514 = 5;
	volatile int8_t x515 = INT8_MIN;
	static int32_t t73 = -1;

	t73 = (x513^((x514*x515)*x516));

	if (t73 != 163072) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x529 = -1478952LL;
	static int16_t x530 = INT16_MAX;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = 13;

	t74 = (x529^((x530*x531)*x532));

	if (t74 != -107995691LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x541 = 1;
	static uint64_t x543 = 153738990661LLU;
	int16_t x544 = 4;
	uint64_t t75 = 238282016527LLU;

	t75 = (x541^((x542*x543)*x544));

	if (t75 != 18439162281646113741LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x545 = INT32_MIN;
	uint8_t x547 = UINT8_MAX;
	static uint64_t x548 = 2804155047594078051LLU;

	t76 = (x545^((x546*x547)*x548));

	if (t76 != 16068896575824441211LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x557 = UINT16_MAX;
	uint64_t x558 = UINT64_MAX;
	volatile int32_t x560 = -118487954;

	t77 = (x557^((x558*x559)*x560));

	if (t77 != 18446744073591126929LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x561 = 0U;
	int32_t x562 = -140835;
	uint32_t x563 = 12812343U;
	static uint32_t t78 = 231677041U;

	t78 = (x561^((x562*x563)*x564));

	if (t78 != 540062085U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x566 = INT8_MIN;
	static int64_t x568 = 12557282532233LL;
	static volatile uint64_t t79 = 239224378292783LLU;

	t79 = (x565^((x566*x567)*x568));

	if (t79 != 18437145128202459097LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x569 = INT64_MIN;
	uint32_t x570 = UINT32_MAX;
	volatile uint8_t x571 = 17U;
	volatile int64_t t80 = 217953416589270868LL;

	t80 = (x569^((x570*x571)*x572));

	if (t80 != 9223371865056084648LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x573 = 183342393756LLU;
	int64_t x575 = -1LL;
	uint64_t t81 = 816911277LLU;

	t81 = (x573^((x574*x575)*x576));

	if (t81 != 18446743890362695118LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x593 = -1LL;
	int8_t x594 = INT8_MIN;
	static uint64_t x595 = 29919082382225LLU;
	static int32_t x596 = INT32_MIN;
	volatile uint64_t t82 = 3106628080409562LLU;

	t82 = (x593^((x594*x595)*x596));

	if (t82 != 17167470816007290879LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x598 = 2420LLU;
	static int16_t x599 = 111;
	int32_t x600 = 348040;
	volatile uint64_t t83 = 12350LLU;

	t83 = (x597^((x598*x599)*x600));

	if (t83 != 91193088927LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x601 = -700;
	uint8_t x602 = 2U;
	int64_t x603 = -1LL;
	volatile int16_t x604 = INT16_MAX;
	int64_t t84 = -63135301LL;

	t84 = (x601^((x602*x603)*x604));

	if (t84 != 64838LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x605 = -1;
	uint16_t x606 = 1056U;
	int16_t x607 = -191;
	uint8_t x608 = 5U;
	int32_t t85 = -4026978;

	t85 = (x605^((x606*x607)*x608));

	if (t85 != 1008479) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x609 = -1;
	static volatile uint64_t x610 = 6752893230003LLU;
	int16_t x611 = INT16_MIN;
	int64_t x612 = -1LL;
	static volatile uint64_t t86 = 57LLU;

	t86 = (x609^((x610*x611)*x612));

	if (t86 != 18225465268348813311LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;
	int16_t x616 = INT16_MIN;
	static int64_t t87 = 8270011LL;

	t87 = (x613^((x614*x615)*x616));

	if (t87 != 1073741823LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x625 = -343872803489LL;
	int64_t x626 = INT64_MAX;
	int64_t x627 = -1LL;
	uint64_t x628 = UINT64_MAX;
	uint64_t t88 = 630306634147LLU;

	t88 = (x625^((x626*x627)*x628));

	if (t88 != 9223372380727579296LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x645 = 23;
	volatile int32_t x646 = INT32_MIN;
	uint64_t x647 = 4702625102209LLU;
	int16_t x648 = INT16_MIN;

	t89 = (x645^((x646*x647)*x648));

	if (t89 != 2188819787646238743LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x653 = INT8_MIN;
	volatile int16_t x654 = -1;
	uint64_t x655 = 9999150275350663LLU;
	volatile int32_t x656 = 11;
	volatile uint64_t t90 = 2012LLU;

	t90 = (x653^((x654*x655)*x656));

	if (t90 != 109990653028857267LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x657 = -5;
	uint16_t x658 = UINT16_MAX;
	static int8_t x659 = INT8_MIN;

	t91 = (x657^((x658*x659)*x660));

	if (t91 != 18446744073701163131LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x670 = INT8_MAX;
	int8_t x671 = 2;
	static int32_t x672 = -1;
	int32_t t92 = -484740190;

	t92 = (x669^((x670*x671)*x672));

	if (t92 != -65283) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x674 = -103556389272350LL;
	volatile uint64_t x675 = 1112004196017238LLU;
	uint8_t x676 = 31U;
	uint64_t t93 = 587549862503LLU;

	t93 = (x673^((x674*x675)*x676));

	if (t93 != 8155318082439811476LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x677 = INT16_MIN;
	int8_t x678 = -1;
	static int8_t x679 = 19;

	t94 = (x677^((x678*x679)*x680));

	if (t94 != -655360) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x697 = 9075568U;
	static volatile uint32_t x698 = UINT32_MAX;
	uint16_t x699 = 6U;
	static volatile uint32_t t95 = 75U;

	t95 = (x697^((x698*x699)*x700));

	if (t95 != 9075568U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x710 = -41;
	volatile uint64_t t96 = 7471415165514905LLU;

	t96 = (x709^((x710*x711)*x712));

	if (t96 != 19580226862234LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x717 = INT64_MAX;
	volatile uint64_t x718 = 1434705027017LLU;
	int8_t x719 = 1;
	int64_t x720 = INT64_MIN;
	uint64_t t97 = UINT64_MAX;

	t97 = (x717^((x718*x719)*x720));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x729 = INT64_MIN;
	int64_t x730 = -12113326948LL;
	static uint64_t x731 = UINT64_MAX;
	uint32_t x732 = 67U;
	uint64_t t98 = 5433944311039042805LLU;

	t98 = (x729^((x730*x731)*x732));

	if (t98 != 9223372848447681324LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x737 = -1;
	uint32_t x738 = 344150620U;
	static uint64_t x739 = 6406214392125011LLU;
	volatile uint64_t t99 = 12832789LLU;

	t99 = (x737^((x738*x739)*x740));

	if (t99 != 6610829072681382355LLU) { NG(); } else { ; }
	
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


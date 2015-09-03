#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1;
uint16_t x29 = UINT16_MAX;
int32_t x31 = -20492710;
uint8_t x37 = 125U;
static int16_t x67 = INT16_MAX;
static int16_t x69 = INT16_MIN;
uint64_t x72 = 43LLU;
uint32_t x101 = 313173U;
int64_t x111 = -2001LL;
volatile int8_t x117 = INT8_MIN;
int8_t x119 = INT8_MAX;
int8_t x125 = INT8_MAX;
static volatile uint32_t t12 = 84423616U;
volatile int16_t x135 = -6;
uint64_t x139 = 9146992061046825961LLU;
static int64_t x151 = INT64_MAX;
static int64_t t16 = 24337LL;
volatile uint64_t x157 = 500270052LLU;
volatile int32_t x159 = INT32_MIN;
int32_t x162 = -1;
uint32_t t18 = 84U;
uint64_t x197 = UINT64_MAX;
static int8_t x198 = INT8_MIN;
uint64_t t22 = UINT64_MAX;
static volatile int16_t x203 = -628;
uint8_t x204 = UINT8_MAX;
static volatile int32_t t24 = 19574531;
volatile int32_t x213 = -5385563;
int8_t x215 = INT8_MIN;
int8_t x229 = -1;
uint16_t x231 = UINT16_MAX;
int8_t x239 = INT8_MIN;
int64_t t29 = 647416407945213LL;
volatile int32_t t34 = -8022;
int8_t x304 = INT8_MAX;
int64_t x334 = -84173574878LL;
volatile uint16_t x336 = 522U;
int16_t x337 = INT16_MIN;
static volatile uint16_t x340 = 1U;
static volatile int32_t t39 = -349394974;
volatile int8_t x365 = INT8_MIN;
static int16_t x377 = INT16_MAX;
int32_t x378 = INT32_MIN;
uint32_t x388 = 28U;
volatile int16_t x395 = -84;
volatile int32_t x409 = INT32_MAX;
uint64_t x412 = 82119953LLU;
volatile int8_t x434 = INT8_MAX;
int8_t x436 = INT8_MIN;
uint16_t x449 = 14043U;
int64_t x458 = INT64_MIN;
int8_t x459 = INT8_MIN;
int32_t x460 = 1;
volatile int64_t t50 = 995625LL;
uint64_t x469 = 7991539720165LLU;
static int16_t x470 = 17;
uint16_t x471 = UINT16_MAX;
int64_t x475 = -20953LL;
uint64_t x485 = 3647432266555737544LLU;
int8_t x490 = INT8_MAX;
volatile uint16_t x491 = 752U;
static int64_t x507 = INT64_MAX;
int64_t x512 = -1LL;
int8_t x520 = 1;
int16_t x564 = INT16_MIN;
uint16_t x585 = 4U;
static int16_t x600 = -1;
int32_t t65 = -56581;
volatile int32_t x647 = INT32_MIN;
uint64_t x648 = 28975544192LLU;
static volatile uint8_t x677 = 1U;
volatile uint8_t x680 = 3U;
int16_t x684 = -1;
uint32_t x693 = 444U;
int32_t x695 = INT32_MAX;
uint32_t t76 = 4030457U;
int32_t x703 = INT32_MAX;
uint32_t t77 = 974046U;
volatile int8_t x710 = INT8_MAX;
static int16_t x713 = INT16_MAX;
static int32_t x714 = -187323;
int64_t x719 = -272189953519LL;
int64_t t81 = -263726337LL;
int64_t x722 = INT64_MAX;
int32_t x728 = -1189;
uint32_t x733 = 534289831U;
int64_t x747 = INT64_MIN;
volatile int64_t t86 = -49LL;
static uint8_t x761 = 80U;
static int8_t x764 = -1;
int64_t x769 = INT64_MAX;
uint64_t x771 = 4510475969528871364LLU;
static volatile int16_t x781 = 97;
static int64_t x782 = -1788LL;
volatile int64_t x793 = INT64_MAX;
int8_t x796 = -1;
int8_t x800 = 13;
static int32_t x803 = INT32_MIN;
volatile int16_t x804 = INT16_MIN;
volatile uint64_t x808 = 420015535894561LLU;
static int8_t x825 = INT8_MIN;
static volatile int16_t x826 = INT16_MAX;
uint32_t x828 = 579U;


void f0(void) {
	int8_t x17 = -1;
	volatile int32_t x18 = 245069502;
	int16_t x19 = 1701;
	uint16_t x20 = 59U;

	t0 = (x17-(x18%(x19/x20)));

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 53277764510LLU;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t1 = 1795LLU;

	t1 = (x25-(x26%(x27/x28)));

	if (t1 != 18446744073708113317LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x30 = 3056923131230763340LL;
	uint8_t x32 = 2U;
	int64_t t2 = -16331659LL;

	t2 = (x29-(x30%(x31/x32)));

	if (t2 != -3368910LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x38 = INT64_MIN;
	static int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	volatile int64_t t3 = -1LL;

	t3 = (x37-(x38%(x39/x40)));

	if (t3 != 133LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile int64_t t4 = -707LL;

	t4 = (x41-(x42%(x43/x44)));

	if (t4 != -2147483775LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x65 = 162796254913LLU;
	int64_t x66 = INT64_MIN;
	int16_t x68 = -1855;
	uint64_t t5 = 420400415626764531LLU;

	t5 = (x65-(x66%(x67/x68)));

	if (t5 != 162796254922LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x70 = INT64_MIN;
	static uint8_t x71 = UINT8_MAX;
	volatile uint64_t t6 = 34095037444883LLU;

	t6 = (x69-(x70%(x71/x72)));

	if (t6 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MIN;
	volatile uint16_t x75 = 29U;
	int8_t x76 = -11;
	volatile int32_t t7 = -3;

	t7 = (x73-(x74%(x75/x76)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MAX;
	volatile uint32_t x91 = 7319236U;
	static volatile int16_t x92 = 102;
	uint32_t t8 = 459566U;

	t8 = (x89-(x90%(x91/x92)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x102 = INT64_MAX;
	int16_t x103 = -232;
	uint64_t x104 = 2433LLU;
	static volatile uint64_t t9 = 40886481LLU;

	t9 = (x101-(x102%(x103/x104)));

	if (t9 != 18442953127537708822LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MIN;
	static int8_t x112 = INT8_MIN;
	int64_t t10 = -133378889LL;

	t10 = (x109-(x110%(x111/x112)));

	if (t10 != -120LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x118 = 8734026LLU;
	int8_t x120 = -1;
	static uint64_t t11 = 23946LLU;

	t11 = (x117-(x118%(x119/x120)));

	if (t11 != 18446744073700817462LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x126 = INT16_MAX;
	int32_t x127 = -1;
	static uint32_t x128 = 4499U;

	t12 = (x125-(x126%(x127/x128)));

	if (t12 != 4294934656U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x133 = -1;
	uint32_t x134 = 1085U;
	static int32_t x136 = -2;
	volatile uint32_t t13 = 907U;

	t13 = (x133-(x134%(x135/x136)));

	if (t13 != 4294967293U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x137 = -1058;
	int16_t x138 = 2;
	volatile uint32_t x140 = 14U;
	volatile uint64_t t14 = 1793LLU;

	t14 = (x137-(x138%(x139/x140)));

	if (t14 != 18446744073709550556LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x141 = -1;
	int64_t x142 = INT64_MAX;
	uint8_t x143 = UINT8_MAX;
	static int16_t x144 = 215;
	int64_t t15 = -2152961182264873653LL;

	t15 = (x141-(x142%(x143/x144)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x149 = 44458;
	static int32_t x150 = INT32_MIN;
	int8_t x152 = -1;

	t16 = (x149-(x150%(x151/x152)));

	if (t16 != 2147528106LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x158 = -1;
	static int8_t x160 = -4;
	volatile uint64_t t17 = 538693790166425LLU;

	t17 = (x157-(x158%(x159/x160)));

	if (t17 != 500270053LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x163 = INT32_MAX;
	int8_t x164 = INT8_MAX;

	t18 = (x161-(x162%(x163/x164)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x165 = -228967633585LL;
	static int32_t x166 = -1;
	uint64_t x167 = 238404536293435LLU;
	uint32_t x168 = 699507311U;
	volatile uint64_t t19 = 6777648696845346114LLU;

	t19 = (x165-(x166%(x167/x168)));

	if (t19 != 18446743844741614609LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x169 = 114585LLU;
	static volatile int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 111956U;
	volatile uint64_t t20 = 786522503906LLU;

	t20 = (x169-(x170%(x171/x172)));

	if (t20 != 129879LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = INT16_MIN;
	static volatile int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	static volatile uint16_t x180 = 1U;
	uint64_t t21 = 1621LLU;

	t21 = (x177-(x178%(x179/x180)));

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x199 = -1;
	volatile int32_t x200 = -1;

	t22 = (x197-(x198%(x199/x200)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x201 = INT32_MIN;
	static int32_t x202 = -83380635;
	volatile int32_t t23 = 61;

	t23 = (x201-(x202%(x203/x204)));

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x209 = 517167221;
	volatile int32_t x210 = INT32_MIN;
	volatile int32_t x211 = 8184047;
	int16_t x212 = INT16_MIN;

	t24 = (x209-(x210%(x211/x212)));

	if (t24 != 517167301) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x214 = 476100U;
	static int32_t x216 = -1;
	uint32_t t25 = 13006U;

	t25 = (x213-(x214%(x215/x216)));

	if (t25 != 4289581665U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x217 = 621134644LL;
	uint32_t x218 = 300U;
	uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = -1;
	static volatile int64_t t26 = 4600660LL;

	t26 = (x217-(x218%(x219/x220)));

	if (t26 != 621134344LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -3;
	volatile int32_t t27 = 3;

	t27 = (x225-(x226%(x227/x228)));

	if (t27 != -43) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x230 = 20LLU;
	int8_t x232 = INT8_MAX;
	volatile uint64_t t28 = 1928893454922LLU;

	t28 = (x229-(x230%(x231/x232)));

	if (t28 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = INT64_MAX;
	uint32_t x240 = 3128804U;

	t29 = (x237-(x238%(x239/x240)));

	if (t29 != 32620LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x249 = 48457LLU;
	int16_t x250 = -14578;
	int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MAX;
	volatile uint64_t t30 = 69752528642205752LLU;

	t30 = (x249-(x250%(x251/x252)));

	if (t30 != 63035LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 16669764033692930LLU;
	uint16_t x255 = 3472U;
	static uint16_t x256 = 227U;
	uint64_t t31 = 1304629750910494372LLU;

	t31 = (x253-(x254%(x255/x256)));

	if (t31 != 250LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x269 = -1;
	int32_t x270 = 171656695;
	int16_t x271 = INT16_MAX;
	int32_t x272 = -12819;
	volatile int32_t t32 = -10790;

	t32 = (x269-(x270%(x271/x272)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x289 = 34;
	int32_t x290 = INT32_MAX;
	volatile int64_t x291 = 7473509151846223LL;
	volatile uint16_t x292 = 13U;
	volatile int64_t t33 = -46036231LL;

	t33 = (x289-(x290%(x291/x292)));

	if (t33 != -2147483613LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x297 = 0U;
	int16_t x298 = 1228;
	int8_t x299 = INT8_MAX;
	volatile int16_t x300 = -1;

	t34 = (x297-(x298%(x299/x300)));

	if (t34 != -85) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int64_t x303 = 117475840358LL;
	volatile int64_t t35 = 884985971978687LL;

	t35 = (x301-(x302%(x303/x304)));

	if (t35 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x325 = INT16_MAX;
	static uint64_t x326 = 172657619323889LLU;
	int32_t x327 = -1;
	uint64_t x328 = 11431650434814LLU;
	volatile uint64_t t36 = 15596254687LLU;

	t36 = (x325-(x326%(x327/x328)));

	if (t36 != 18446744073709129554LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x333 = UINT16_MAX;
	volatile uint32_t x335 = 5176U;
	volatile int64_t t37 = -527239601930LL;

	t37 = (x333-(x334%(x335/x336)));

	if (t37 != 65543LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x338 = 3U;
	int32_t x339 = -57;
	static volatile uint32_t t38 = 125U;

	t38 = (x337-(x338%(x339/x340)));

	if (t38 != 4294934525U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x345 = 1;
	uint8_t x346 = 84U;
	uint16_t x347 = UINT16_MAX;
	uint16_t x348 = 7668U;

	t39 = (x345-(x346%(x347/x348)));

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x366 = -1LL;
	int8_t x367 = INT8_MAX;
	int16_t x368 = -1;
	int64_t t40 = 6637932665LL;

	t40 = (x365-(x366%(x367/x368)));

	if (t40 != -127LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x373 = 38712130382LLU;
	int8_t x374 = 12;
	int64_t x375 = -159418740LL;
	int32_t x376 = -6467203;
	volatile uint64_t t41 = 3080789869LLU;

	t41 = (x373-(x374%(x375/x376)));

	if (t41 != 38712130370LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x379 = UINT64_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	volatile uint64_t t42 = 2LLU;

	t42 = (x377-(x378%(x379/x380)));

	if (t42 != 18446462596585324541LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 6254966U;
	static uint64_t x387 = 5145LLU;
	static volatile uint64_t t43 = 1806154717235LLU;

	t43 = (x385-(x386%(x387/x388)));

	if (t43 != 18446744073709518822LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x393 = INT32_MIN;
	static volatile uint64_t x394 = 96165370LLU;
	int32_t x396 = -1;
	uint64_t t44 = 2035699404289893LLU;

	t44 = (x393-(x394%(x395/x396)));

	if (t44 != 18446744071562067898LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x405 = 5508129U;
	int8_t x406 = -1;
	volatile int64_t x407 = INT64_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile int64_t t45 = 670305545259728266LL;

	t45 = (x405-(x406%(x407/x408)));

	if (t45 != 5508130LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	volatile uint64_t t46 = 22334166875362859LLU;

	t46 = (x409-(x410%(x411/x412)));

	if (t46 != 2125599890LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x433 = 825;
	volatile int8_t x435 = INT8_MIN;
	volatile int32_t t47 = -3734;

	t47 = (x433-(x434%(x435/x436)));

	if (t47 != 825) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x445 = 8U;
	int64_t x446 = INT64_MAX;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	static volatile int64_t t48 = 12121384635225220LL;

	t48 = (x445-(x446%(x447/x448)));

	if (t48 != 8LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x450 = UINT32_MAX;
	static int64_t x451 = INT64_MIN;
	volatile uint64_t x452 = 1453422501710LLU;
	uint64_t t49 = 233455LLU;

	t49 = (x449-(x450%(x451/x452)));

	if (t49 != 18446744073704472056LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x457 = 1U;

	t50 = (x457-(x458%(x459/x460)));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x472 = INT8_MAX;
	volatile uint64_t t51 = 8129721575637LLU;

	t51 = (x469-(x470%(x471/x472)));

	if (t51 != 7991539720148LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x473 = INT8_MIN;
	int64_t x474 = 351056711LL;
	int8_t x476 = INT8_MAX;
	int64_t t52 = -237010413LL;

	t52 = (x473-(x474%(x475/x476)));

	if (t52 != -243LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x486 = -1;
	int32_t x487 = INT32_MAX;
	volatile uint32_t x488 = 64379664U;
	volatile uint64_t t53 = 8183064749LLU;

	t53 = (x485-(x486%(x487/x488)));

	if (t53 != 3647432266555737541LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x489 = 27788502LLU;
	uint8_t x492 = UINT8_MAX;
	volatile uint64_t t54 = 2120361257633LLU;

	t54 = (x489-(x490%(x491/x492)));

	if (t54 != 27788501LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x497 = INT8_MIN;
	int32_t x498 = -178297;
	int8_t x499 = -1;
	volatile uint32_t x500 = UINT32_MAX;
	uint32_t t55 = 4724083U;

	t55 = (x497-(x498%(x499/x500)));

	if (t55 != 4294967168U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x501 = 2U;
	int32_t x502 = INT32_MIN;
	static uint64_t x503 = 5709078843415LLU;
	static uint32_t x504 = 211302U;
	volatile uint64_t t56 = 30935881LLU;

	t56 = (x501-(x502%(x503/x504)));

	if (t56 != 18446744073687000966LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x505 = INT32_MIN;
	volatile int32_t x506 = INT32_MAX;
	static int16_t x508 = 1;
	volatile int64_t t57 = 1026920838406044LL;

	t57 = (x505-(x506%(x507/x508)));

	if (t57 != -4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	volatile int8_t x511 = INT8_MIN;
	uint64_t t58 = 875468899568LLU;

	t58 = (x509-(x510%(x511/x512)));

	if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x517 = UINT16_MAX;
	int16_t x518 = INT16_MAX;
	volatile int8_t x519 = -7;
	volatile int32_t t59 = -3;

	t59 = (x517-(x518%(x519/x520)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x533 = UINT16_MAX;
	static int8_t x534 = -20;
	volatile int32_t x535 = INT32_MIN;
	volatile int32_t x536 = INT32_MAX;
	volatile int32_t t60 = -687;

	t60 = (x533-(x534%(x535/x536)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x549 = INT32_MAX;
	static int16_t x550 = INT16_MAX;
	int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MAX;
	int32_t t61 = 4590612;

	t61 = (x549-(x550%(x551/x552)));

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x561 = 16;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = UINT64_MAX;
	uint64_t t62 = 114626322589666LLU;

	t62 = (x561-(x562%(x563/x564)));

	if (t62 != 16LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x569 = -13898897;
	uint64_t x570 = 46922516748LLU;
	int64_t x571 = INT64_MIN;
	uint16_t x572 = UINT16_MAX;
	uint64_t t63 = 4003179LLU;

	t63 = (x569-(x570%(x571/x572)));

	if (t63 != 18446744026773135971LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x586 = -55521LL;
	volatile uint8_t x587 = 9U;
	int16_t x588 = -1;
	int64_t t64 = -2951089819LL;

	t64 = (x585-(x586%(x587/x588)));

	if (t64 != 4LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x597 = 1420;
	int8_t x598 = INT8_MIN;
	int16_t x599 = -52;

	t65 = (x597-(x598%(x599/x600)));

	if (t65 != 1444) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x601 = 2LLU;
	int64_t x602 = INT64_MIN;
	volatile int8_t x603 = 4;
	volatile int16_t x604 = -1;
	volatile uint64_t t66 = 409LLU;

	t66 = (x601-(x602%(x603/x604)));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x609 = 1893599767LLU;
	static uint32_t x610 = 201663172U;
	int64_t x611 = 6389116LL;
	static uint32_t x612 = 196223U;
	uint64_t t67 = 4076480750LLU;

	t67 = (x609-(x610%(x611/x612)));

	if (t67 != 1893599763LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x617 = INT32_MAX;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MAX;
	int16_t x620 = INT16_MAX;
	int64_t t68 = -8708389688624138LL;

	t68 = (x617-(x618%(x619/x620)));

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x629 = -1;
	uint8_t x630 = 0U;
	int32_t x631 = 130352;
	uint64_t x632 = 1LLU;
	static uint64_t t69 = UINT64_MAX;

	t69 = (x629-(x630%(x631/x632)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x633 = INT64_MIN;
	volatile int16_t x634 = INT16_MIN;
	static int64_t x635 = INT64_MIN;
	volatile int32_t x636 = INT32_MIN;
	static volatile int64_t t70 = 13798423LL;

	t70 = (x633-(x634%(x635/x636)));

	if (t70 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x645 = -1LL;
	int16_t x646 = INT16_MAX;
	uint64_t t71 = 23047349LLU;

	t71 = (x645-(x646%(x647/x648)));

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x649 = INT64_MAX;
	int64_t x650 = INT64_MAX;
	volatile uint32_t x651 = UINT32_MAX;
	int16_t x652 = -170;
	int64_t t72 = INT64_MAX;

	t72 = (x649-(x650%(x651/x652)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x678 = UINT32_MAX;
	int8_t x679 = -23;
	volatile uint32_t t73 = 128U;

	t73 = (x677-(x678%(x679/x680)));

	if (t73 != 4294967291U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x681 = -227547107;
	uint8_t x682 = 5U;
	int16_t x683 = INT16_MIN;
	static volatile int32_t t74 = 23821243;

	t74 = (x681-(x682%(x683/x684)));

	if (t74 != -227547112) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x685 = INT8_MAX;
	static int8_t x686 = INT8_MIN;
	int64_t x687 = -132136660852219LL;
	int8_t x688 = INT8_MAX;
	volatile int64_t t75 = 8787127204149LL;

	t75 = (x685-(x686%(x687/x688)));

	if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x694 = 3U;
	int8_t x696 = INT8_MIN;

	t76 = (x693-(x694%(x695/x696)));

	if (t76 != 441U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x701 = -4911;
	uint32_t x702 = UINT32_MAX;
	int32_t x704 = 248;

	t77 = (x701-(x702%(x703/x704)));

	if (t77 != 4294962258U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x705 = INT64_MIN;
	uint32_t x706 = 0U;
	static int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x705-(x706%(x707/x708)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x709 = INT16_MAX;
	int16_t x711 = INT16_MAX;
	volatile int16_t x712 = INT16_MAX;
	volatile int32_t t79 = -376;

	t79 = (x709-(x710%(x711/x712)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x715 = -1;
	volatile int16_t x716 = -1;
	volatile int32_t t80 = 16717;

	t80 = (x713-(x714%(x715/x716)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x717 = INT16_MIN;
	uint8_t x718 = UINT8_MAX;
	int64_t x720 = -104329LL;

	t81 = (x717-(x718%(x719/x720)));

	if (t81 != -33023LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x721 = -1;
	int16_t x723 = 4347;
	static int8_t x724 = -1;
	int64_t t82 = 7LL;

	t82 = (x721-(x722%(x723/x724)));

	if (t82 != -1268LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x725 = -60;
	static int32_t x726 = -100694158;
	volatile int64_t x727 = 7321288027230LL;
	volatile int64_t t83 = -14684068634729536LL;

	t83 = (x725-(x726%(x727/x728)));

	if (t83 != 100694098LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x734 = 726349349525207908LL;
	uint8_t x735 = 77U;
	int16_t x736 = 6;
	static int64_t t84 = 22LL;

	t84 = (x733-(x734%(x735/x736)));

	if (t84 != 534289827LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x745 = INT16_MAX;
	int16_t x746 = -1;
	uint16_t x748 = 172U;
	volatile int64_t t85 = -72966096LL;

	t85 = (x745-(x746%(x747/x748)));

	if (t85 != 32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x749 = UINT8_MAX;
	int64_t x750 = 498332086LL;
	int8_t x751 = INT8_MIN;
	volatile int64_t x752 = -1LL;

	t86 = (x749-(x750%(x751/x752)));

	if (t86 != 201LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x753 = 295LLU;
	uint64_t x754 = UINT64_MAX;
	volatile int64_t x755 = INT64_MAX;
	uint64_t x756 = 16865687637543LLU;
	volatile uint64_t t87 = 198861885686LLU;

	t87 = (x753-(x754%(x755/x756)));

	if (t87 != 18446744073709430190LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x762 = 0;
	volatile int8_t x763 = -1;
	int32_t t88 = -1355709;

	t88 = (x761-(x762%(x763/x764)));

	if (t88 != 80) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x770 = -3;
	uint8_t x772 = 6U;
	static volatile uint64_t t89 = 201225550257000888LLU;

	t89 = (x769-(x770%(x771/x772)));

	if (t89 != 8818531841260709634LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x773 = 1128817805U;
	uint16_t x774 = 1U;
	int64_t x775 = INT64_MAX;
	int16_t x776 = 4;
	volatile int64_t t90 = -1218069LL;

	t90 = (x773-(x774%(x775/x776)));

	if (t90 != 1128817804LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x783 = INT16_MIN;
	int64_t x784 = 1LL;
	volatile int64_t t91 = -50LL;

	t91 = (x781-(x782%(x783/x784)));

	if (t91 != 1885LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x789 = 2388U;
	uint32_t x790 = 51443626U;
	int16_t x791 = INT16_MIN;
	int16_t x792 = -1;
	volatile uint32_t t92 = 560U;

	t92 = (x789-(x790%(x791/x792)));

	if (t92 != 4294939050U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x794 = INT16_MAX;
	int8_t x795 = INT8_MIN;
	static int64_t t93 = 8096856LL;

	t93 = (x793-(x794%(x795/x796)));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x797 = UINT16_MAX;
	int16_t x798 = 4404;
	static uint32_t x799 = 139U;
	uint32_t t94 = 161588423U;

	t94 = (x797-(x798%(x799/x800)));

	if (t94 != 65531U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x801 = INT16_MAX;
	static int64_t x802 = -4417246476465776482LL;
	volatile int64_t t95 = -32456892866LL;

	t95 = (x801-(x802%(x803/x804)));

	if (t95 != 75617LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x805 = -387448630LL;
	static int32_t x806 = INT32_MIN;
	uint64_t x807 = 2972260999879136653LLU;
	volatile uint64_t t96 = 186833208565478LLU;

	t96 = (x805-(x806%(x807/x808)));

	if (t96 != 18446744073322100650LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x809 = 57U;
	int32_t x810 = INT32_MAX;
	int64_t x811 = INT64_MIN;
	uint16_t x812 = UINT16_MAX;
	int64_t t97 = -19234LL;

	t97 = (x809-(x810%(x811/x812)));

	if (t97 != -2147483590LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x813 = INT64_MIN;
	int8_t x814 = -11;
	uint64_t x815 = 68001590434957882LLU;
	volatile uint8_t x816 = 1U;
	uint64_t t98 = 1067415999LLU;

	t98 = (x813-(x814%(x815/x816)));

	if (t98 != 9205058971018810225LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x827 = INT32_MAX;
	volatile uint32_t t99 = 30665627U;

	t99 = (x825-(x826%(x827/x828)));

	if (t99 != 4294934401U) { NG(); } else { ; }
	
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


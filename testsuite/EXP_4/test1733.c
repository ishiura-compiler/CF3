#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
int8_t x42 = INT8_MIN;
int8_t x44 = INT8_MAX;
uint32_t x47 = UINT32_MAX;
int32_t x50 = INT32_MIN;
static int8_t x77 = 0;
static int32_t x85 = INT32_MIN;
int64_t x89 = -37LL;
uint64_t x132 = 3910768778862957LLU;
int16_t x133 = 483;
int32_t t13 = 0;
uint64_t t14 = 497522959LLU;
int16_t x143 = INT16_MAX;
uint64_t t15 = 6641LLU;
int16_t x149 = INT16_MIN;
volatile int32_t t16 = -514256659;
int32_t x154 = INT32_MIN;
volatile int16_t x163 = INT16_MAX;
static int8_t x167 = 14;
int16_t x168 = 3837;
int16_t x177 = INT16_MIN;
static int64_t x178 = -1LL;
static int64_t x180 = -1LL;
uint64_t x190 = 434461298533166586LLU;
int32_t x191 = -1310;
int64_t x234 = INT64_MIN;
static uint32_t x235 = 3867861U;
int16_t x260 = INT16_MIN;
uint64_t x279 = UINT64_MAX;
volatile int32_t x280 = INT32_MIN;
static uint64_t x285 = 40099069LLU;
int16_t x288 = INT16_MIN;
volatile int16_t x298 = 975;
static volatile int64_t x315 = -1LL;
static uint8_t x316 = 5U;
volatile uint16_t x317 = 833U;
uint32_t t37 = 3U;
int64_t x325 = INT64_MIN;
volatile uint8_t x328 = UINT8_MAX;
static volatile uint16_t x351 = 15312U;
int32_t x367 = INT32_MIN;
volatile uint64_t t43 = 3768LLU;
int32_t x383 = -4;
int8_t x384 = 42;
volatile int64_t t44 = 42690686LL;
int16_t x394 = INT16_MIN;
int32_t t45 = -220360;
int32_t t47 = 145186894;
uint64_t x427 = 7642030038277LLU;
int8_t x434 = INT8_MIN;
static volatile int32_t x446 = -1;
volatile uint64_t x463 = 14LLU;
int64_t x481 = INT64_MIN;
static int64_t x482 = INT64_MIN;
static volatile uint64_t x495 = 2024147163302632LLU;
uint8_t x503 = 21U;
uint32_t x504 = UINT32_MAX;
volatile int16_t x511 = -1;
int8_t x518 = INT8_MIN;
int32_t x523 = -1;
int8_t x535 = INT8_MAX;
static volatile int64_t t63 = 23LL;
uint64_t x566 = UINT64_MAX;
static uint8_t x568 = UINT8_MAX;
volatile uint64_t t65 = 14LLU;
volatile uint64_t x577 = UINT64_MAX;
static volatile uint64_t t66 = 14886643LLU;
int8_t x585 = -3;
uint32_t x603 = UINT32_MAX;
static int64_t x664 = -801032625249246LL;
static int8_t x701 = INT8_MIN;
volatile uint64_t t72 = 20207840780977LLU;
int64_t x711 = INT64_MAX;
int32_t x714 = INT32_MAX;
uint32_t x717 = UINT32_MAX;
uint16_t x721 = 0U;
int32_t t77 = 107447824;
int16_t x745 = -379;
volatile int64_t x755 = INT64_MAX;
volatile int64_t t80 = -3LL;
int16_t x762 = 910;
int8_t x764 = INT8_MIN;
uint8_t x815 = UINT8_MAX;
int16_t x833 = 815;
int8_t x838 = INT8_MIN;
uint64_t x843 = 2359478574203LLU;
int64_t x845 = -3448LL;
volatile uint8_t x846 = 14U;
int8_t x847 = 1;
int32_t x874 = INT32_MAX;
uint64_t x900 = 5682886696209636041LLU;
volatile uint8_t x902 = 38U;
uint8_t x904 = 2U;
volatile uint64_t t93 = 959991LLU;
static int64_t x910 = 110985698061LL;
static int16_t x928 = -1;
volatile uint32_t x932 = 2U;
uint64_t t96 = 4132665LLU;
int64_t x937 = INT64_MIN;
static int64_t t98 = 2005143187988904LL;
volatile int64_t t99 = 880078370847783LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile int16_t x2 = 7838;
	int64_t x3 = 5LL;
	static volatile uint64_t t0 = 4323LLU;

	t0 = (x1/(x2/(x3&x4)));

	if (t0 != 11772012810280484LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MIN;
	static int32_t x26 = INT32_MAX;
	uint64_t x27 = 254372LLU;
	int32_t x28 = -1;
	uint64_t t1 = 4822455431478LLU;

	t1 = (x25/(x26/(x27&x28)));

	if (t1 != 2185115383980344LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 29319002363LLU;
	volatile uint8_t x35 = 1U;
	uint32_t x36 = 471253U;
	volatile uint64_t t2 = 118596158LLU;

	t2 = (x33/(x34/(x35&x36)));

	if (t2 != 314586830LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = -60;
	volatile int8_t x43 = -1;
	int32_t t3 = 4357029;

	t3 = (x41/(x42/(x43&x44)));

	if (t3 != 60) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x45 = 58U;
	int64_t x46 = INT64_MIN;
	int16_t x48 = INT16_MAX;
	volatile int64_t t4 = 31013357368LL;

	t4 = (x45/(x46/(x47&x48)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x49 = 10U;
	int32_t x51 = -21;
	volatile int16_t x52 = -1;
	int32_t t5 = 118368121;

	t5 = (x49/(x50/(x51&x52)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x57 = 1246;
	uint32_t x58 = 1887391U;
	uint32_t x59 = 1272222U;
	volatile int8_t x60 = -59;
	uint32_t t6 = 53U;

	t6 = (x57/(x58/(x59&x60)));

	if (t6 != 1246U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x78 = 62;
	static int16_t x79 = 1;
	uint16_t x80 = 227U;
	volatile int32_t t7 = -56832;

	t7 = (x77/(x78/(x79&x80)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x86 = INT32_MAX;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MAX;
	static int64_t t8 = -133065973LL;

	t8 = (x85/(x86/(x87&x88)));

	if (t8 != -255LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x90 = -1LL;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 1U;
	int64_t t9 = -54914101985328121LL;

	t9 = (x89/(x90/(x91&x92)));

	if (t9 != 37LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x98 = 717U;
	int32_t x99 = 46999;
	int16_t x100 = 1;
	int32_t t10 = -33430511;

	t10 = (x97/(x98/(x99&x100)));

	if (t10 != -45) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x117 = INT32_MAX;
	volatile uint16_t x118 = 3U;
	static int64_t x119 = -1LL;
	volatile int32_t x120 = -3;
	int64_t t11 = 5098206538366916LL;

	t11 = (x117/(x118/(x119&x120)));

	if (t11 != -2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x129 = 13352406481LLU;
	static volatile int32_t x130 = -1;
	int16_t x131 = INT16_MIN;
	volatile uint64_t t12 = 53832LLU;

	t12 = (x129/(x130/(x131&x132)));

	if (t12 != 2831299LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x134 = -13;
	uint16_t x135 = 11U;
	volatile int8_t x136 = 8;

	t13 = (x133/(x134/(x135&x136)));

	if (t13 != -483) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x137 = 748719733LLU;
	volatile int16_t x138 = -1;
	int64_t x139 = -1LL;
	uint64_t x140 = UINT64_MAX;

	t14 = (x137/(x138/(x139&x140)));

	if (t14 != 748719733LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x141 = 518217389461045LLU;
	volatile int64_t x142 = INT64_MAX;
	int16_t x144 = -22;

	t15 = (x141/(x142/(x143&x144)));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x150 = INT32_MAX;
	static int16_t x151 = INT16_MIN;
	int32_t x152 = -13583242;

	t16 = (x149/(x150/(x151&x152)));

	if (t16 != 208) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x153 = UINT32_MAX;
	static int32_t x155 = -1;
	int16_t x156 = 1337;
	volatile uint32_t t17 = 4370747U;

	t17 = (x153/(x154/(x155&x156)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x161 = UINT8_MAX;
	static volatile int64_t x162 = INT64_MAX;
	int64_t x164 = -1LL;
	static int64_t t18 = 102245LL;

	t18 = (x161/(x162/(x163&x164)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x165 = -20585432793990469LL;
	int64_t x166 = -15LL;
	volatile int64_t t19 = 569254859308LL;

	t19 = (x165/(x166/(x167&x168)));

	if (t19 != 20585432793990469LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x169 = -2970;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = INT16_MIN;
	volatile int64_t t20 = -228533856254661LL;

	t20 = (x169/(x170/(x171&x172)));

	if (t20 != -2970LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x179 = 1U;
	static int64_t t21 = -837546325LL;

	t21 = (x177/(x178/(x179&x180)));

	if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = 63374091114LL;
	int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = 20525071U;
	volatile int64_t t22 = -1LL;

	t22 = (x181/(x182/(x183&x184)));

	if (t22 != -10LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x189 = -1;
	uint16_t x192 = 15658U;
	uint64_t t23 = 426478850034226LLU;

	t23 = (x189/(x190/(x191&x192)));

	if (t23 != 610134LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x205 = INT32_MIN;
	int64_t x206 = -1303851564024499LL;
	int32_t x207 = 14098;
	uint16_t x208 = UINT16_MAX;
	int64_t t24 = 7LL;

	t24 = (x205/(x206/(x207&x208)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = 83819836U;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 7267814U;
	uint32_t t25 = 316U;

	t25 = (x217/(x218/(x219&x220)));

	if (t25 != 195225786U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x221 = 32U;
	volatile uint16_t x222 = 4420U;
	uint16_t x223 = 4U;
	int16_t x224 = -1;
	volatile int32_t t26 = -1107065;

	t26 = (x221/(x222/(x223&x224)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x233 = 48U;
	int8_t x236 = -1;
	int64_t t27 = 116981LL;

	t27 = (x233/(x234/(x235&x236)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x249 = UINT32_MAX;
	static uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	static int8_t x252 = INT8_MAX;
	static uint32_t t28 = 81U;

	t28 = (x249/(x250/(x251&x252)));

	if (t28 != 8323580U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MAX;
	static uint64_t x255 = 4LLU;
	int16_t x256 = 68;
	uint64_t t29 = 632512733331483LLU;

	t29 = (x253/(x254/(x255&x256)));

	if (t29 != 595056260442242543LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x257 = 11U;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = 365169486414815LL;
	volatile uint64_t t30 = 2280405496560LLU;

	t30 = (x257/(x258/(x259&x260)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x269 = -568;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 17U;
	static int16_t x272 = 8852;
	int64_t t31 = -640536150253919LL;

	t31 = (x269/(x270/(x271&x272)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	uint64_t t32 = UINT64_MAX;

	t32 = (x277/(x278/(x279&x280)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = -499038;
	uint64_t t33 = 203973LLU;

	t33 = (x285/(x286/(x287&x288)));

	if (t33 != 40099069LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint16_t x294 = 14U;
	static volatile int32_t x295 = 1993;
	static volatile uint16_t x296 = 1U;
	uint32_t t34 = 4620004U;

	t34 = (x293/(x294/(x295&x296)));

	if (t34 != 306783378U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int64_t x299 = -1LL;
	int8_t x300 = INT8_MIN;
	static volatile int64_t t35 = 5899762848657059LL;

	t35 = (x297/(x298/(x299&x300)));

	if (t35 != -613566756LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	int64_t t36 = -1LL;

	t36 = (x313/(x314/(x315&x316)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = UINT16_MAX;
	volatile uint32_t x320 = UINT32_MAX;

	t37 = (x317/(x318/(x319&x320)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 2U;
	volatile int64_t t38 = -18LL;

	t38 = (x325/(x326/(x327&x328)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = 6340014LL;
	uint32_t x343 = 4166123U;
	uint16_t x344 = UINT16_MAX;
	volatile int64_t t39 = 3658443901522458LL;

	t39 = (x341/(x342/(x343&x344)));

	if (t39 != 54576165898548969LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x349 = -8572233;
	int32_t x350 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	int64_t t40 = 68835300LL;

	t40 = (x349/(x350/(x351&x352)));

	if (t40 != 61LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x353 = 14189279U;
	int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MAX;
	static uint16_t x356 = UINT16_MAX;
	static uint32_t t41 = 47U;

	t41 = (x353/(x354/(x355&x356)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x365 = -656439LL;
	int32_t x366 = INT32_MIN;
	static int16_t x368 = -1;
	volatile int64_t t42 = 14087850629275510LL;

	t42 = (x365/(x366/(x367&x368)));

	if (t42 != -656439LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile uint64_t x375 = 117496766560004939LLU;
	int16_t x376 = 23;

	t43 = (x373/(x374/(x375&x376)));

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x382 = INT64_MIN;

	t44 = (x381/(x382/(x383&x384)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x393 = -5;
	volatile uint8_t x395 = UINT8_MAX;
	int16_t x396 = -1;

	t45 = (x393/(x394/(x395&x396)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x397 = -253263;
	int32_t x398 = INT32_MAX;
	static int8_t x399 = -53;
	static volatile uint16_t x400 = 937U;
	static int32_t t46 = 1573016;

	t46 = (x397/(x398/(x399&x400)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x405 = INT8_MIN;
	static volatile int32_t x406 = -44557;
	int8_t x407 = -6;
	int16_t x408 = INT16_MIN;

	t47 = (x405/(x406/(x407&x408)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x409 = 0;
	int16_t x410 = INT16_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	uint16_t x412 = 947U;
	volatile int32_t t48 = -15;

	t48 = (x409/(x410/(x411&x412)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x425 = 7;
	static volatile int16_t x426 = -1;
	int8_t x428 = -1;
	volatile uint64_t t49 = 142176329643730061LLU;

	t49 = (x425/(x426/(x427&x428)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x433 = -717;
	int8_t x435 = -1;
	uint64_t x436 = 83796223010360393LLU;
	static uint64_t t50 = 1500LLU;

	t50 = (x433/(x434/(x435&x436)));

	if (t50 != 83848836698679776LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x437 = INT8_MIN;
	static int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = 379;
	volatile int32_t t51 = 15;

	t51 = (x437/(x438/(x439&x440)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MIN;
	static int8_t x443 = 6;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t52 = 67123;

	t52 = (x441/(x442/(x443&x444)));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x445 = -1;
	uint8_t x447 = 1U;
	int8_t x448 = INT8_MAX;
	int32_t t53 = -152716425;

	t53 = (x445/(x446/(x447&x448)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x461 = 109U;
	int8_t x462 = INT8_MIN;
	int64_t x464 = 2066606019LL;
	uint64_t t54 = 968314972532LLU;

	t54 = (x461/(x462/(x463&x464)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x483 = 726U;
	uint64_t x484 = 451LLU;
	volatile uint64_t t55 = 6451992630796LLU;

	t55 = (x481/(x482/(x483&x484)));

	if (t55 != 194LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x489 = INT16_MAX;
	static uint64_t x490 = UINT64_MAX;
	int8_t x491 = -3;
	int32_t x492 = -1151090;
	uint64_t t56 = 70957157063LLU;

	t56 = (x489/(x490/(x491&x492)));

	if (t56 != 32767LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x493 = -12;
	int16_t x494 = -1;
	int64_t x496 = -63559064700161488LL;
	uint64_t t57 = 1541167LLU;

	t57 = (x493/(x494/(x495&x496)));

	if (t57 != 1742066679923463LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x501 = INT32_MAX;
	uint16_t x502 = 605U;
	uint32_t t58 = 33744712U;

	t58 = (x501/(x502/(x503&x504)));

	if (t58 != 76695844U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x509 = INT16_MIN;
	static uint16_t x510 = UINT16_MAX;
	int8_t x512 = INT8_MIN;
	volatile int32_t t59 = 340011;

	t59 = (x509/(x510/(x511&x512)));

	if (t59 != 64) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x517 = -1;
	static uint16_t x519 = UINT16_MAX;
	volatile int16_t x520 = 2;
	static int32_t t60 = -1;

	t60 = (x517/(x518/(x519&x520)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x521 = UINT64_MAX;
	int64_t x522 = INT64_MIN;
	uint16_t x524 = UINT16_MAX;
	uint64_t t61 = 60003508590434975LLU;

	t61 = (x521/(x522/(x523&x524)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = -7554LL;
	static volatile int32_t x534 = 3046374;
	int32_t x536 = INT32_MAX;
	int64_t t62 = 25144LL;

	t62 = (x533/(x534/(x535&x536)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x549 = 3U;
	int64_t x550 = 130232367765LL;
	int8_t x551 = 6;
	static uint16_t x552 = UINT16_MAX;

	t63 = (x549/(x550/(x551&x552)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x561 = 6160972300928029LL;
	int64_t x562 = INT64_MAX;
	static uint8_t x563 = 8U;
	volatile int8_t x564 = -1;
	static volatile int64_t t64 = -7384721300022685LL;

	t64 = (x561/(x562/(x563&x564)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x565 = UINT8_MAX;
	int64_t x567 = INT64_MAX;

	t65 = (x565/(x566/(x567&x568)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x578 = UINT16_MAX;
	uint32_t x579 = UINT32_MAX;
	uint32_t x580 = 1U;

	t66 = (x577/(x578/(x579&x580)));

	if (t66 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x586 = INT64_MIN;
	int32_t x587 = INT32_MIN;
	int32_t x588 = INT32_MIN;
	volatile int64_t t67 = -543632117424529196LL;

	t67 = (x585/(x586/(x587&x588)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x601 = INT64_MAX;
	static int8_t x602 = -1;
	static int32_t x604 = -1;
	static int64_t t68 = INT64_MAX;

	t68 = (x601/(x602/(x603&x604)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x653 = 368589440042LLU;
	uint16_t x654 = 27U;
	volatile int8_t x655 = INT8_MAX;
	int16_t x656 = 5;
	uint64_t t69 = 2085348282502LLU;

	t69 = (x653/(x654/(x655&x656)));

	if (t69 != 73717888008LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x661 = -1;
	int32_t x662 = INT32_MAX;
	volatile uint16_t x663 = 407U;
	volatile int64_t t70 = 115886328LL;

	t70 = (x661/(x662/(x663&x664)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x673 = INT64_MIN;
	volatile uint32_t x674 = UINT32_MAX;
	uint32_t x675 = 211011U;
	int8_t x676 = -1;
	volatile int64_t t71 = 386213964125417214LL;

	t71 = (x673/(x674/(x675&x676)));

	if (t71 != -453147884290791LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x702 = 26LLU;
	static uint32_t x703 = 3U;
	int64_t x704 = -1LL;

	t72 = (x701/(x702/(x703&x704)));

	if (t72 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x709 = 148068;
	volatile int64_t x710 = INT64_MIN;
	static int8_t x712 = INT8_MAX;
	volatile int64_t t73 = -500288LL;

	t73 = (x709/(x710/(x711&x712)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x713 = -1;
	uint64_t x715 = 10140572388001LLU;
	int32_t x716 = INT32_MAX;
	uint64_t t74 = 10016433065677LLU;

	t74 = (x713/(x714/(x715&x716)));

	if (t74 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x718 = UINT64_MAX;
	static int8_t x719 = -1;
	uint8_t x720 = 27U;
	uint64_t t75 = 405746164LLU;

	t75 = (x717/(x718/(x719&x720)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x722 = 2952702137LL;
	volatile uint16_t x723 = 19U;
	int16_t x724 = -1;
	int64_t t76 = -224930LL;

	t76 = (x721/(x722/(x723&x724)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x733 = -135;
	int16_t x734 = INT16_MAX;
	volatile int16_t x735 = INT16_MAX;
	int32_t x736 = INT32_MAX;

	t77 = (x733/(x734/(x735&x736)));

	if (t77 != -135) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x746 = INT64_MIN;
	int32_t x747 = -1;
	volatile int8_t x748 = 1;
	int64_t t78 = -4369330423178940LL;

	t78 = (x745/(x746/(x747&x748)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x749 = 4548U;
	uint8_t x750 = 112U;
	uint16_t x751 = 10U;
	int16_t x752 = 647;
	static uint32_t t79 = 22479U;

	t79 = (x749/(x750/(x751&x752)));

	if (t79 != 81U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x753 = INT16_MIN;
	uint32_t x754 = UINT32_MAX;
	int8_t x756 = INT8_MAX;

	t80 = (x753/(x754/(x755&x756)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x761 = INT16_MIN;
	int32_t x763 = -1;
	static volatile int32_t t81 = 4;

	t81 = (x761/(x762/(x763&x764)));

	if (t81 != 4681) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x765 = -3;
	uint8_t x766 = 12U;
	volatile int32_t x767 = -1;
	int32_t x768 = -1;
	int32_t t82 = -2;

	t82 = (x765/(x766/(x767&x768)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x813 = 6071LL;
	static volatile uint16_t x814 = 237U;
	uint32_t x816 = 13U;
	int64_t t83 = -41LL;

	t83 = (x813/(x814/(x815&x816)));

	if (t83 != 337LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x817 = INT8_MAX;
	int32_t x818 = INT32_MAX;
	int8_t x819 = INT8_MAX;
	int64_t x820 = 6017912638310828LL;
	volatile int64_t t84 = -57902LL;

	t84 = (x817/(x818/(x819&x820)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x834 = -474280;
	int8_t x835 = -1;
	static volatile int8_t x836 = INT8_MAX;
	volatile int32_t t85 = 72023173;

	t85 = (x833/(x834/(x835&x836)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x837 = INT8_MAX;
	uint8_t x839 = 93U;
	int8_t x840 = INT8_MAX;
	volatile int32_t t86 = 0;

	t86 = (x837/(x838/(x839&x840)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x841 = 25977540LLU;
	int32_t x842 = -32133;
	int64_t x844 = 964726753004061LL;
	volatile uint64_t t87 = 634482817999LLU;

	t87 = (x841/(x842/(x843&x844)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x848 = -731LL;
	volatile int64_t t88 = -2105467350LL;

	t88 = (x845/(x846/(x847&x848)));

	if (t88 != -246LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x861 = UINT64_MAX;
	uint32_t x862 = UINT32_MAX;
	static uint32_t x863 = 1347251859U;
	uint16_t x864 = 102U;
	uint64_t t89 = 3723LLU;

	t89 = (x861/(x862/(x863&x864)));

	if (t89 != 8589934596LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x873 = 256320003470753LLU;
	volatile int8_t x875 = INT8_MAX;
	static uint8_t x876 = 29U;
	uint64_t t90 = 14230073340184414LLU;

	t90 = (x873/(x874/(x875&x876)));

	if (t90 != 3461390LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x881 = -2;
	int16_t x882 = -1;
	static uint64_t x883 = 144499LLU;
	static int64_t x884 = INT64_MAX;
	volatile uint64_t t91 = 813292793LLU;

	t91 = (x881/(x882/(x883&x884)));

	if (t91 != 144499LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x897 = 563U;
	static int16_t x898 = -1;
	int8_t x899 = INT8_MIN;
	uint64_t t92 = 701LLU;

	t92 = (x897/(x898/(x899&x900)));

	if (t92 != 187LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x901 = UINT64_MAX;
	int32_t x903 = -4073;

	t93 = (x901/(x902/(x903&x904)));

	if (t93 != 970881267037344821LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x909 = UINT32_MAX;
	static int16_t x911 = -1;
	int32_t x912 = INT32_MIN;
	int64_t t94 = 1818LL;

	t94 = (x909/(x910/(x911&x912)));

	if (t94 != -84215045LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x925 = -1;
	int64_t x926 = -3356003564098910LL;
	uint64_t x927 = 308365999819659LLU;
	volatile uint64_t t95 = 5855LLU;

	t95 = (x925/(x926/(x927&x928)));

	if (t95 != 308422405512615LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x929 = 4082LLU;
	uint8_t x930 = UINT8_MAX;
	uint16_t x931 = 10U;

	t96 = (x929/(x930/(x931&x932)));

	if (t96 != 32LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x933 = 2U;
	int16_t x934 = 37;
	volatile int64_t x935 = -1LL;
	int8_t x936 = -2;
	int64_t t97 = -206LL;

	t97 = (x933/(x934/(x935&x936)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x938 = INT8_MIN;
	int8_t x939 = -3;
	int16_t x940 = -1;

	t98 = (x937/(x938/(x939&x940)));

	if (t98 != -219604096115589900LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x945 = INT64_MAX;
	volatile int64_t x946 = INT64_MAX;
	int32_t x947 = -28988;
	static int64_t x948 = 23151092770333186LL;

	t99 = (x945/(x946/(x947&x948)));

	if (t99 != 23174301600137627LL) { NG(); } else { ; }
	
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


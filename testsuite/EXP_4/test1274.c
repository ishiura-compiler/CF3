#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = 7514U;
int8_t x23 = INT8_MAX;
uint32_t x24 = UINT32_MAX;
uint64_t t3 = 1310179569411459214LLU;
static uint16_t x32 = 7U;
static volatile int64_t x33 = INT64_MIN;
int8_t x36 = INT8_MAX;
int16_t x57 = INT16_MIN;
static uint64_t x58 = 2707205932835LLU;
uint64_t t9 = 31979LLU;
uint32_t x74 = 29372U;
static volatile uint32_t x76 = 182U;
static volatile uint32_t t10 = 123933U;
int16_t x79 = INT16_MAX;
volatile int32_t t12 = -196004592;
uint32_t x118 = 488396098U;
static volatile uint32_t t14 = 46U;
int16_t x124 = 83;
int8_t x133 = INT8_MIN;
int32_t x139 = 22002;
static uint32_t x145 = UINT32_MAX;
int8_t x146 = INT8_MAX;
uint64_t x149 = 4898822480LLU;
uint64_t t21 = 2970983099LLU;
volatile uint32_t x154 = UINT32_MAX;
int32_t x155 = INT32_MIN;
uint32_t x166 = UINT32_MAX;
int32_t x169 = -1;
int16_t x173 = INT16_MIN;
uint16_t x182 = 75U;
uint64_t x185 = 21071LLU;
static int64_t x186 = INT64_MAX;
int32_t t29 = -27089;
volatile int32_t t30 = -1;
uint32_t x197 = 9360564U;
uint16_t x213 = 70U;
uint64_t t33 = 10875786913543617LLU;
int32_t x231 = -834002;
uint64_t x252 = 63159176070LLU;
uint64_t t38 = 16324898872096LLU;
int32_t x254 = INT32_MAX;
uint64_t x261 = UINT64_MAX;
static uint64_t x264 = UINT64_MAX;
static uint16_t x269 = 255U;
int8_t x270 = INT8_MAX;
uint64_t x314 = 3193565919LLU;
int32_t x317 = INT32_MAX;
static uint32_t x325 = UINT32_MAX;
int16_t x328 = 7;
int8_t x329 = 0;
volatile uint32_t x330 = 4U;
int16_t x331 = 3;
volatile int64_t x333 = INT64_MAX;
static uint16_t x346 = 3948U;
int32_t x351 = -4249;
static int32_t t54 = -444;
int16_t x366 = INT16_MAX;
uint16_t x368 = 31340U;
uint32_t x370 = 1677U;
volatile uint32_t t56 = 16331U;
static int32_t x377 = 1046;
int8_t x391 = INT8_MIN;
uint64_t t59 = 9083328093254278997LLU;
volatile int64_t t60 = 83903436108023338LL;
int8_t x412 = 7;
int16_t x418 = 1;
volatile int32_t t62 = -950124;
uint64_t x433 = UINT64_MAX;
uint32_t x436 = 998077004U;
int16_t x437 = INT16_MIN;
uint16_t x453 = UINT16_MAX;
volatile uint32_t t66 = 25U;
int8_t x461 = INT8_MAX;
static uint16_t x469 = 286U;
volatile int64_t x472 = -1LL;
volatile int32_t t71 = 18;
static uint16_t x490 = UINT16_MAX;
volatile int32_t t74 = 439088;
volatile int32_t x511 = INT32_MAX;
volatile int64_t x526 = INT64_MAX;
int8_t x537 = -1;
static int8_t x541 = INT8_MIN;
static int16_t x543 = INT16_MIN;
int16_t x545 = INT16_MIN;
uint8_t x550 = 40U;
uint32_t x553 = 13420U;
int16_t x559 = INT16_MAX;
volatile int64_t x560 = INT64_MIN;
static uint32_t x561 = 63U;
static uint8_t x562 = UINT8_MAX;
volatile int32_t x564 = 3;
volatile uint32_t t85 = 163U;
static volatile int32_t t86 = 15;
int16_t x585 = INT16_MIN;
int16_t x596 = INT16_MIN;
volatile int32_t t90 = -1007;
int64_t x614 = 29278LL;
int16_t x635 = INT16_MIN;
int8_t x641 = INT8_MAX;
int64_t x643 = -187940696942525870LL;
static int16_t x653 = INT16_MIN;
volatile int32_t x657 = -1;
volatile uint8_t x658 = UINT8_MAX;
static int64_t x660 = -2207659050328LL;
volatile int16_t x663 = INT16_MIN;
volatile int64_t t98 = 4270LL;


void f0(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	static uint8_t x7 = 11U;
	static int32_t t0 = 111214931;

	t0 = (x5^(x6>>(x7==x8)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 308;
	uint8_t x14 = UINT8_MAX;
	volatile int32_t x15 = INT32_MAX;
	volatile int16_t x16 = -2691;
	static volatile int32_t t1 = -201342241;

	t1 = (x13^(x14>>(x15==x16)));

	if (t1 != 459) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 49674961466922673LLU;
	int32_t x19 = -1;
	uint64_t x20 = 5983502135LLU;
	volatile uint64_t t2 = 419319LLU;

	t2 = (x17^(x18>>(x19==x20)));

	if (t2 != 49674963598731598LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = UINT32_MAX;
	uint64_t x22 = 47LLU;

	t3 = (x21^(x22>>(x23==x24)));

	if (t3 != 4294967248LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MAX;
	int8_t x31 = -1;
	int32_t t4 = -175;

	t4 = (x29^(x30>>(x31==x32)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x34 = UINT16_MAX;
	int16_t x35 = 3;
	static volatile int64_t t5 = 763992655497LL;

	t5 = (x33^(x34>>(x35==x36)));

	if (t5 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	volatile uint32_t x46 = 400U;
	int64_t x47 = -1LL;
	volatile uint8_t x48 = 66U;
	static volatile uint32_t t6 = 1U;

	t6 = (x45^(x46>>(x47==x48)));

	if (t6 != 4294966895U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x59 = 28216058;
	static int16_t x60 = -1;
	static volatile uint64_t t7 = 3602LLU;

	t7 = (x57^(x58>>(x59==x60)));

	if (t7 != 18446741366503622435LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = 4U;
	int64_t x66 = 306686117964LL;
	int16_t x67 = 0;
	int16_t x68 = 0;
	static volatile int64_t t8 = -327856383LL;

	t8 = (x65^(x66>>(x67==x68)));

	if (t8 != 153343058978LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 486631491854060LLU;
	uint16_t x70 = 9U;
	int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MIN;

	t9 = (x69^(x70>>(x71==x72)));

	if (t9 != 486631491854053LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x73 = INT16_MAX;
	uint16_t x75 = UINT16_MAX;

	t10 = (x73^(x74>>(x75==x76)));

	if (t10 != 3395U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 1459U;
	uint32_t x78 = 5849068U;
	volatile int8_t x80 = 29;
	volatile uint32_t t11 = 15567221U;

	t11 = (x77^(x78>>(x79==x80)));

	if (t11 != 5847647U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = -1000408762;

	t12 = (x89^(x90>>(x91==x92)));

	if (t12 != -32513) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x113 = 1936867463644LL;
	uint64_t x114 = 1792895739520087LLU;
	int64_t x115 = 31687LL;
	uint8_t x116 = 3U;
	volatile uint64_t t13 = 635572885223415668LLU;

	t13 = (x113^(x114>>(x115==x116)));

	if (t13 != 1793732556912011LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x117 = -1;
	int8_t x119 = -1;
	static volatile int16_t x120 = INT16_MIN;

	t14 = (x117^(x118>>(x119==x120)));

	if (t14 != 3806571197U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = 11;
	int8_t x123 = -1;
	int64_t t15 = -8166028689416022LL;

	t15 = (x121^(x122>>(x123==x124)));

	if (t15 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x125 = 1236LLU;
	uint8_t x126 = UINT8_MAX;
	static uint8_t x127 = 4U;
	static int64_t x128 = -1LL;
	uint64_t t16 = 0LLU;

	t16 = (x125^(x126>>(x127==x128)));

	if (t16 != 1067LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x134 = INT32_MAX;
	volatile int8_t x135 = 22;
	uint8_t x136 = UINT8_MAX;
	static int32_t t17 = 4;

	t17 = (x133^(x134>>(x135==x136)));

	if (t17 != -2147483521) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x137 = -1;
	int32_t x138 = 203;
	int32_t x140 = INT32_MAX;
	volatile int32_t t18 = 47;

	t18 = (x137^(x138>>(x139==x140)));

	if (t18 != -204) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = INT32_MIN;
	volatile uint32_t x142 = 827719U;
	uint16_t x143 = 489U;
	uint16_t x144 = UINT16_MAX;
	uint32_t t19 = 2U;

	t19 = (x141^(x142>>(x143==x144)));

	if (t19 != 2148311367U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x147 = -15;
	int32_t x148 = INT32_MAX;
	volatile uint32_t t20 = 90941230U;

	t20 = (x145^(x146>>(x147==x148)));

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x150 = 3U;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MIN;

	t21 = (x149^(x150>>(x151==x152)));

	if (t21 != 4898822483LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x153 = 59;
	static int64_t x156 = 27174709897318LL;
	static volatile uint32_t t22 = 226602U;

	t22 = (x153^(x154>>(x155==x156)));

	if (t22 != 4294967236U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x161 = 24;
	uint64_t x162 = 54997465771804LLU;
	int32_t x163 = 2;
	uint32_t x164 = UINT32_MAX;
	volatile uint64_t t23 = 219969503LLU;

	t23 = (x161^(x162>>(x163==x164)));

	if (t23 != 54997465771780LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = INT32_MIN;
	int16_t x167 = 2936;
	int16_t x168 = -1;
	uint32_t t24 = 43U;

	t24 = (x165^(x166>>(x167==x168)));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x170 = 94246196465651899LLU;
	uint64_t x171 = 39716LLU;
	volatile int64_t x172 = INT64_MIN;
	static volatile uint64_t t25 = 7297537204837106LLU;

	t25 = (x169^(x170>>(x171==x172)));

	if (t25 != 18352497877243899716LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;
	int32_t t26 = 1;

	t26 = (x173^(x174>>(x175==x176)));

	if (t26 != -32513) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint64_t x183 = UINT64_MAX;
	uint32_t x184 = 44253U;
	volatile int32_t t27 = 508;

	t27 = (x181^(x182>>(x183==x184)));

	if (t27 != 65460) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	uint64_t t28 = 0LLU;

	t28 = (x185^(x186>>(x187==x188)));

	if (t28 != 9223372036854754736LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x189 = INT32_MIN;
	static int16_t x190 = 12;
	uint32_t x191 = 10118224U;
	int16_t x192 = INT16_MIN;

	t29 = (x189^(x190>>(x191==x192)));

	if (t29 != -2147483636) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x193 = -440737;
	static volatile int16_t x194 = 1;
	uint16_t x195 = UINT16_MAX;
	volatile uint32_t x196 = 10093U;

	t30 = (x193^(x194>>(x195==x196)));

	if (t30 != -440738) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x198 = 97U;
	int32_t x199 = 190305;
	static int64_t x200 = -2257436167276LL;
	uint32_t t31 = 118U;

	t31 = (x197^(x198>>(x199==x200)));

	if (t31 != 9360597U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x205 = INT64_MAX;
	static int8_t x206 = 3;
	int16_t x207 = INT16_MAX;
	static int16_t x208 = INT16_MIN;
	int64_t t32 = -8005LL;

	t32 = (x205^(x206>>(x207==x208)));

	if (t32 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x214 = UINT64_MAX;
	int64_t x215 = -1LL;
	uint16_t x216 = 3U;

	t33 = (x213^(x214>>(x215==x216)));

	if (t33 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x221 = 209;
	volatile uint8_t x222 = UINT8_MAX;
	static int32_t x223 = -1;
	int8_t x224 = -1;
	volatile int32_t t34 = 3;

	t34 = (x221^(x222>>(x223==x224)));

	if (t34 != 174) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = INT8_MIN;
	static int64_t x230 = INT64_MAX;
	int64_t x232 = -8991138443866174LL;
	static volatile int64_t t35 = -560173912415757LL;

	t35 = (x229^(x230>>(x231==x232)));

	if (t35 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x241 = -1;
	volatile int64_t x242 = INT64_MAX;
	int16_t x243 = -124;
	volatile uint16_t x244 = 47U;
	int64_t t36 = INT64_MIN;

	t36 = (x241^(x242>>(x243==x244)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x245 = INT8_MIN;
	static uint16_t x246 = 11988U;
	static int64_t x247 = INT64_MAX;
	static uint8_t x248 = 2U;
	int32_t t37 = -10;

	t37 = (x245^(x246>>(x247==x248)));

	if (t37 != -11948) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint32_t x250 = 10U;
	static int32_t x251 = -1;

	t38 = (x249^(x250>>(x251==x252)));

	if (t38 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	int16_t x256 = -1;
	volatile uint64_t t39 = 529811666583630292LLU;

	t39 = (x253^(x254>>(x255==x256)));

	if (t39 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x262 = 3118682LL;
	int32_t x263 = -71509;
	static volatile uint64_t t40 = 752168306817LLU;

	t40 = (x261^(x262>>(x263==x264)));

	if (t40 != 18446744073706432933LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x271 = 921LL;
	volatile int8_t x272 = -3;
	int32_t t41 = 4;

	t41 = (x269^(x270>>(x271==x272)));

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = 6415452;
	uint16_t x283 = 467U;
	int16_t x284 = INT16_MIN;
	int32_t t42 = 0;

	t42 = (x281^(x282>>(x283==x284)));

	if (t42 != 6364067) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile uint32_t x302 = 247U;
	static uint16_t x303 = 1709U;
	int64_t x304 = -1LL;
	uint32_t t43 = 382519U;

	t43 = (x301^(x302>>(x303==x304)));

	if (t43 != 4294967159U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 5U;
	int32_t t44 = 404453;

	t44 = (x309^(x310>>(x311==x312)));

	if (t44 != -2147483521) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x313 = -1;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 3U;
	volatile uint64_t t45 = 152498432401386547LLU;

	t45 = (x313^(x314>>(x315==x316)));

	if (t45 != 18446744070515985696LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x318 = 6;
	int8_t x319 = INT8_MIN;
	int64_t x320 = 13499LL;
	int32_t t46 = -12318;

	t46 = (x317^(x318>>(x319==x320)));

	if (t46 != 2147483641) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x321 = -1LL;
	volatile uint64_t x322 = 0LLU;
	volatile int64_t x323 = -504975647373LL;
	static int16_t x324 = 14;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x321^(x322>>(x323==x324)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x326 = 1U;
	static volatile int16_t x327 = 1;
	volatile uint32_t t48 = 1U;

	t48 = (x325^(x326>>(x327==x328)));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x332 = INT16_MIN;
	static volatile uint32_t t49 = 27U;

	t49 = (x329^(x330>>(x331==x332)));

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 0U;
	int8_t x336 = 0;
	static volatile uint64_t t50 = 16693427LLU;

	t50 = (x333^(x334>>(x335==x336)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = 12;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = INT32_MAX;
	uint32_t t51 = 2U;

	t51 = (x341^(x342>>(x343==x344)));

	if (t51 != 4294967283U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x345 = INT64_MAX;
	volatile int32_t x347 = INT32_MAX;
	volatile uint64_t x348 = UINT64_MAX;
	int64_t t52 = -3352466075LL;

	t52 = (x345^(x346>>(x347==x348)));

	if (t52 != 9223372036854771859LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x350 = INT16_MAX;
	volatile uint16_t x352 = UINT16_MAX;
	volatile int64_t t53 = 1211658457700761815LL;

	t53 = (x349^(x350>>(x351==x352)));

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x357 = INT16_MIN;
	volatile int32_t x358 = 1026;
	int64_t x359 = 11LL;
	int64_t x360 = INT64_MIN;

	t54 = (x357^(x358>>(x359==x360)));

	if (t54 != -31742) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x365 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	volatile int64_t t55 = 714478782281380254LL;

	t55 = (x365^(x366>>(x367==x368)));

	if (t55 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x369 = -1;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;

	t56 = (x369^(x370>>(x371==x372)));

	if (t56 != 4294965618U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x378 = INT32_MAX;
	int64_t x379 = -1LL;
	uint16_t x380 = 499U;
	int32_t t57 = -2164590;

	t57 = (x377^(x378>>(x379==x380)));

	if (t57 != 2147482601) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x381 = 22LLU;
	uint32_t x382 = 502541142U;
	int32_t x383 = 242172;
	volatile int64_t x384 = 484438197941LL;
	volatile uint64_t t58 = 1LLU;

	t58 = (x381^(x382>>(x383==x384)));

	if (t58 != 502541120LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x389 = -1;
	uint64_t x390 = 45164995751090LLU;
	int16_t x392 = 455;

	t59 = (x389^(x390>>(x391==x392)));

	if (t59 != 18446698908713800525LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MAX;
	uint32_t x395 = UINT32_MAX;
	volatile uint32_t x396 = 966U;

	t60 = (x393^(x394>>(x395==x396)));

	if (t60 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x409 = 2248U;
	static volatile uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MIN;
	volatile uint32_t t61 = 1103601U;

	t61 = (x409^(x410>>(x411==x412)));

	if (t61 != 2103U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x417 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = 32963797;

	t62 = (x417^(x418>>(x419==x420)));

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x434 = 930U;
	volatile int16_t x435 = INT16_MIN;
	uint64_t t63 = 7475958681LLU;

	t63 = (x433^(x434>>(x435==x436)));

	if (t63 != 18446744073709550685LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x438 = 2LLU;
	uint32_t x439 = 10U;
	int8_t x440 = -1;
	volatile uint64_t t64 = 3LLU;

	t64 = (x437^(x438>>(x439==x440)));

	if (t64 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x441 = 292791629U;
	static volatile uint32_t x442 = 141385026U;
	uint8_t x443 = 9U;
	int8_t x444 = INT8_MAX;
	uint32_t t65 = 4169505U;

	t65 = (x441^(x442>>(x443==x444)));

	if (t65 != 421459983U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x454 = 18575U;
	static uint32_t x455 = 977882U;
	uint32_t x456 = 915861926U;

	t66 = (x453^(x454>>(x455==x456)));

	if (t66 != 46960U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x457 = UINT64_MAX;
	uint8_t x458 = 103U;
	volatile int32_t x459 = -30;
	int32_t x460 = 863586;
	uint64_t t67 = 61291725994643LLU;

	t67 = (x457^(x458>>(x459==x460)));

	if (t67 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x462 = 268894848266730245LLU;
	uint16_t x463 = 2U;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t68 = 76585179446814074LLU;

	t68 = (x461^(x462>>(x463==x464)));

	if (t68 != 268894848266730362LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x470 = INT32_MAX;
	int32_t x471 = -1;
	static int32_t t69 = -3228;

	t69 = (x469^(x470>>(x471==x472)));

	if (t69 != 1073741537) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x473 = 9U;
	static int32_t x474 = 0;
	int32_t x475 = INT32_MIN;
	static volatile int64_t x476 = INT64_MAX;
	volatile uint32_t t70 = 48812150U;

	t70 = (x473^(x474>>(x475==x476)));

	if (t70 != 9U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x481 = 18U;
	static uint16_t x482 = 32U;
	int32_t x483 = -1;
	int64_t x484 = 254536254937189LL;

	t71 = (x481^(x482>>(x483==x484)));

	if (t71 != 50) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x485 = INT64_MAX;
	int8_t x486 = 18;
	static int32_t x487 = -1;
	uint64_t x488 = 736LLU;
	volatile int64_t t72 = 5068LL;

	t72 = (x485^(x486>>(x487==x488)));

	if (t72 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x489 = -1;
	uint16_t x491 = 24055U;
	uint8_t x492 = 0U;
	int32_t t73 = -1949;

	t73 = (x489^(x490>>(x491==x492)));

	if (t73 != -65536) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x493 = -1;
	int16_t x494 = 4;
	int64_t x495 = INT64_MIN;
	volatile int16_t x496 = 23;

	t74 = (x493^(x494>>(x495==x496)));

	if (t74 != -5) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x497 = -1;
	uint32_t x498 = 13U;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = UINT32_MAX;
	uint32_t t75 = 255U;

	t75 = (x497^(x498>>(x499==x500)));

	if (t75 != 4294967282U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x501 = 7LLU;
	uint8_t x502 = 7U;
	int16_t x503 = INT16_MIN;
	int64_t x504 = INT64_MAX;
	static volatile uint64_t t76 = 249LLU;

	t76 = (x501^(x502>>(x503==x504)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x509 = INT32_MIN;
	uint64_t x510 = 303123LLU;
	int16_t x512 = INT16_MAX;
	static volatile uint64_t t77 = 415214345LLU;

	t77 = (x509^(x510>>(x511==x512)));

	if (t77 != 18446744071562371091LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x525 = UINT64_MAX;
	int64_t x527 = INT64_MIN;
	volatile int16_t x528 = -1;
	uint64_t t78 = 120572412LLU;

	t78 = (x525^(x526>>(x527==x528)));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x538 = 6;
	uint64_t x539 = UINT64_MAX;
	int8_t x540 = -28;
	static volatile int32_t t79 = 25187;

	t79 = (x537^(x538>>(x539==x540)));

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x542 = 8;
	static uint8_t x544 = 27U;
	static volatile int32_t t80 = -1;

	t80 = (x541^(x542>>(x543==x544)));

	if (t80 != -120) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x546 = UINT64_MAX;
	uint32_t x547 = UINT32_MAX;
	static int64_t x548 = INT64_MAX;
	volatile uint64_t t81 = 317945LLU;

	t81 = (x545^(x546>>(x547==x548)));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x549 = INT64_MIN;
	int8_t x551 = -1;
	static volatile int32_t x552 = INT32_MAX;
	int64_t t82 = 2729LL;

	t82 = (x549^(x550>>(x551==x552)));

	if (t82 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x554 = 1U;
	int64_t x555 = -1LL;
	uint16_t x556 = 167U;
	uint32_t t83 = 7315052U;

	t83 = (x553^(x554>>(x555==x556)));

	if (t83 != 13421U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x557 = 2889U;
	static volatile int64_t x558 = INT64_MAX;
	volatile int64_t t84 = -15880LL;

	t84 = (x557^(x558>>(x559==x560)));

	if (t84 != 9223372036854772918LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x563 = 3U;

	t85 = (x561^(x562>>(x563==x564)));

	if (t85 != 64U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x569 = 8;
	int8_t x570 = 27;
	int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MAX;

	t86 = (x569^(x570>>(x571==x572)));

	if (t86 != 19) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x586 = 0;
	uint8_t x587 = UINT8_MAX;
	volatile int64_t x588 = INT64_MAX;
	volatile int32_t t87 = 83854663;

	t87 = (x585^(x586>>(x587==x588)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x593 = INT64_MIN;
	int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MIN;
	static int64_t t88 = -1742678806439098LL;

	t88 = (x593^(x594>>(x595==x596)));

	if (t88 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x597 = -422677045138173254LL;
	static int32_t x598 = INT32_MAX;
	int16_t x599 = INT16_MAX;
	int64_t x600 = 39927220475004LL;
	volatile int64_t t89 = -67568202277LL;

	t89 = (x597^(x598>>(x599==x600)));

	if (t89 != -422677043186225851LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x601 = -74;
	int32_t x602 = 0;
	int16_t x603 = -35;
	int32_t x604 = INT32_MIN;

	t90 = (x601^(x602>>(x603==x604)));

	if (t90 != -74) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x605 = INT64_MAX;
	int8_t x606 = INT8_MAX;
	uint16_t x607 = 1069U;
	int16_t x608 = INT16_MIN;
	volatile int64_t t91 = -19154LL;

	t91 = (x605^(x606>>(x607==x608)));

	if (t91 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x613 = -1;
	int32_t x615 = 6;
	static int16_t x616 = 207;
	int64_t t92 = -3157367LL;

	t92 = (x613^(x614>>(x615==x616)));

	if (t92 != -29279LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x633 = 17U;
	static uint8_t x634 = 10U;
	volatile uint8_t x636 = 99U;
	int32_t t93 = 1;

	t93 = (x633^(x634>>(x635==x636)));

	if (t93 != 27) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x642 = 105U;
	static int64_t x644 = 241712007486LL;
	static volatile int32_t t94 = -7;

	t94 = (x641^(x642>>(x643==x644)));

	if (t94 != 22) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x649 = 12;
	uint32_t x650 = 29U;
	uint32_t x651 = 148228117U;
	uint16_t x652 = UINT16_MAX;
	volatile uint32_t t95 = 9032U;

	t95 = (x649^(x650>>(x651==x652)));

	if (t95 != 17U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x654 = UINT32_MAX;
	int32_t x655 = 219638;
	int64_t x656 = -1911453234LL;
	volatile uint32_t t96 = 7U;

	t96 = (x653^(x654>>(x655==x656)));

	if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x659 = -120492992LL;
	int32_t t97 = 686;

	t97 = (x657^(x658>>(x659==x660)));

	if (t97 != -256) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x661 = INT64_MIN;
	uint8_t x662 = UINT8_MAX;
	uint8_t x664 = 3U;

	t98 = (x661^(x662>>(x663==x664)));

	if (t98 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x665 = 2850272777LL;
	static int64_t x666 = 84423749828LL;
	static uint16_t x667 = 129U;
	int32_t x668 = -1;
	int64_t t99 = 23540365505827430LL;

	t99 = (x665^(x666>>(x667==x668)));

	if (t99 != 81636853453LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
volatile int16_t x6 = INT16_MIN;
volatile int64_t t0 = 408573LL;
volatile int64_t x20 = -1LL;
static volatile int64_t t4 = -1357506340LL;
int64_t x45 = -1LL;
volatile uint16_t x50 = 0U;
volatile uint32_t t6 = 1877U;
int8_t x54 = INT8_MIN;
int16_t x55 = -162;
int8_t x61 = INT8_MIN;
volatile int8_t x82 = 15;
uint64_t t12 = 3762847682959LLU;
int64_t x87 = -26499773LL;
int64_t t13 = 255LL;
int16_t x89 = INT16_MIN;
int8_t x94 = 4;
uint16_t x95 = 1213U;
uint64_t x100 = UINT64_MAX;
volatile int64_t x105 = 47219LL;
int64_t t18 = -15895453965853496LL;
int64_t x109 = -1LL;
int64_t t19 = 696756LL;
int64_t x113 = -596LL;
int64_t x118 = -1LL;
uint8_t x120 = UINT8_MAX;
int64_t x122 = 566758309LL;
static uint32_t x124 = 58891935U;
int64_t t22 = 13054989444LL;
int64_t x141 = -1LL;
uint32_t x144 = 1U;
static int32_t x146 = INT32_MIN;
int16_t x152 = INT16_MIN;
int8_t x155 = 0;
uint8_t x160 = UINT8_MAX;
uint64_t x168 = 1160366439483140LLU;
int16_t x173 = INT16_MIN;
int64_t x179 = -1LL;
int32_t x180 = INT32_MIN;
uint64_t t32 = 277475554479319LLU;
uint64_t x181 = 704537LLU;
uint32_t x219 = 1228U;
static volatile int8_t x228 = INT8_MAX;
static uint64_t x234 = 401090563960880656LLU;
static int8_t x235 = -19;
static volatile uint8_t x236 = 3U;
uint16_t x238 = 158U;
int64_t x240 = 10291LL;
int16_t x247 = INT16_MIN;
int8_t x250 = 0;
uint64_t x251 = 3959252336272914LLU;
int64_t x252 = INT64_MIN;
volatile int64_t x257 = -1LL;
int64_t t45 = -146533081983081LL;
uint16_t x266 = 40U;
volatile uint64_t t48 = 11LLU;
int16_t x283 = INT16_MIN;
static volatile int32_t t50 = -77;
int8_t x294 = INT8_MIN;
uint32_t x300 = UINT32_MAX;
uint64_t t53 = 80042LLU;
static int32_t x301 = INT32_MIN;
volatile int64_t t55 = 372581796059712421LL;
int64_t x310 = 225544543125LL;
uint8_t x319 = 0U;
static uint64_t x327 = 1270LLU;
int64_t x328 = INT64_MIN;
int8_t x331 = 63;
int16_t x334 = INT16_MIN;
int32_t x337 = INT32_MIN;
uint64_t x344 = 68235709012LLU;
static int32_t t63 = -534607;
static int8_t x366 = 0;
uint64_t t66 = 1394910151850948LLU;
static uint64_t x373 = 7770576LLU;
uint32_t x378 = 195012U;
volatile uint32_t t68 = 1740758194U;
static int16_t x384 = INT16_MAX;
volatile int64_t t69 = -337787LL;
volatile uint32_t t71 = 64U;
uint64_t x393 = 358799139LLU;
int8_t x395 = INT8_MAX;
static volatile uint64_t x396 = 1029065131201765786LLU;
volatile uint64_t t72 = 1958618124583859224LLU;
volatile uint16_t x403 = 1U;
volatile int64_t t73 = -3LL;
int32_t t74 = -11;
uint32_t t75 = 1053828U;
uint32_t x437 = UINT32_MAX;
static int8_t x438 = INT8_MIN;
uint16_t x440 = UINT16_MAX;
volatile uint16_t x467 = 26873U;
int32_t x479 = 113;
static uint64_t x482 = 161938132965LLU;
int64_t t81 = -223341714189365917LL;
int32_t x497 = -214740694;
uint64_t x508 = 562135049558174678LLU;
int64_t x520 = -9250681LL;
static uint32_t x523 = UINT32_MAX;
uint32_t x524 = UINT32_MAX;
uint32_t t89 = 2513417U;
int8_t x543 = INT8_MIN;
uint32_t x574 = UINT32_MAX;
int8_t x575 = INT8_MAX;
volatile uint32_t t95 = 1565173U;
int32_t x581 = INT32_MIN;
volatile uint64_t x589 = 81795LLU;
uint64_t t98 = 4924549059500586481LLU;
volatile uint64_t x597 = 5993512389995033108LLU;
int16_t x600 = -1;
static uint64_t t99 = 1872525LLU;


void f0(void) {
	int64_t x7 = -1LL;
	int8_t x8 = -1;

	t0 = ((x5+x6)*(x7+x8));

	if (t0 != 65792LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 241U;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MAX;
	static uint32_t t1 = 9370U;

	t1 = ((x9+x10)*(x11+x12));

	if (t1 != 3213360911U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 59U;
	volatile int8_t x18 = -31;
	uint16_t x19 = 9U;
	static int64_t t2 = -2123LL;

	t2 = ((x17+x18)*(x19+x20));

	if (t2 != 224LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 15304U;
	volatile uint16_t x34 = 38U;
	int32_t x35 = INT32_MAX;
	volatile int64_t x36 = -1LL;
	volatile int64_t t3 = 5588551661LL;

	t3 = ((x33+x34)*(x35+x36));

	if (t3 != 32946694096932LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = 3LL;
	int8_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = -1LL;

	t4 = ((x37+x38)*(x39+x40));

	if (t4 != 8589934588LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x46 = INT8_MIN;
	int32_t x47 = 4;
	volatile uint32_t x48 = UINT32_MAX;
	volatile int64_t t5 = 58059362119678LL;

	t5 = ((x45+x46)*(x47+x48));

	if (t5 != -387LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MAX;
	int8_t x51 = 54;
	volatile uint32_t x52 = 6U;

	t6 = ((x49+x50)*(x51+x52));

	if (t6 != 4294967236U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = -1;
	volatile uint64_t x56 = UINT64_MAX;
	static uint64_t t7 = 129912372683LLU;

	t7 = ((x53+x54)*(x55+x56));

	if (t7 != 21027LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x62 = INT8_MIN;
	static int64_t x63 = -59655833825415LL;
	int8_t x64 = INT8_MIN;
	int64_t t8 = 488796532673121LL;

	t8 = ((x61+x62)*(x63+x64));

	if (t8 != 15271893459339008LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = 5732;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t9 = 8469510115967115124LLU;

	t9 = ((x69+x70)*(x71+x72));

	if (t9 != 18446744073700358173LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x73 = -2119;
	int64_t x74 = -1LL;
	uint8_t x75 = UINT8_MAX;
	uint64_t x76 = 135340907927626LLU;
	uint64_t t10 = 30373310488078LLU;

	t10 = ((x73+x74)*(x75+x76));

	if (t10 != 18159821348902443896LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x77 = 1394333117LLU;
	uint64_t x78 = 6673546414755589102LLU;
	int32_t x79 = -3043;
	int64_t x80 = -1LL;
	volatile uint64_t t11 = 413174LLU;

	t11 = ((x77+x78)*(x79+x80));

	if (t11 != 14036678467562646196LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MIN;
	static int8_t x83 = -1;
	uint64_t x84 = 19LLU;

	t12 = ((x81+x82)*(x83+x84));

	if (t12 != 18446744073708962062LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -1;
	volatile uint16_t x86 = 1407U;
	uint16_t x88 = 3998U;

	t13 = ((x85+x86)*(x87+x88));

	if (t13 != -37253059650LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x90 = 19LL;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 366226961130LLU;
	uint64_t t14 = 349157935LLU;

	t14 = ((x89+x90)*(x91+x92));

	if (t14 != 18434750506955346123LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = UINT64_MAX;
	static uint64_t x96 = 350789272741LLU;
	volatile uint64_t t15 = 3069191485099649LLU;

	t15 = ((x93+x94)*(x95+x96));

	if (t15 != 1052367821862LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = 2719U;
	volatile uint16_t x98 = 0U;
	volatile uint8_t x99 = 105U;
	static volatile uint64_t t16 = 7555268942279LLU;

	t16 = ((x97+x98)*(x99+x100));

	if (t16 != 282776LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = 85U;
	int64_t x103 = -1LL;
	int32_t x104 = INT32_MIN;
	int64_t t17 = 11854LL;

	t17 = ((x101+x102)*(x103+x104));

	if (t17 != -180388626516LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 116564170U;
	int16_t x108 = 46;

	t18 = ((x105+x106)*(x107+x108));

	if (t18 != 1684469485416LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x110 = 9U;
	uint32_t x111 = 181U;
	int32_t x112 = INT32_MAX;

	t19 = ((x109+x110)*(x111+x112));

	if (t19 != 17179870624LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x114 = -58;
	int32_t x115 = 1288;
	static int64_t x116 = -1LL;
	volatile int64_t t20 = -412806LL;

	t20 = ((x113+x114)*(x115+x116));

	if (t20 != -841698LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x117 = 1LLU;
	volatile int64_t x119 = INT64_MIN;
	uint64_t t21 = 236481LLU;

	t21 = ((x117+x118)*(x119+x120));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x123 = INT8_MIN;

	t22 = ((x121+x122)*(x123+x124));

	if (t22 != 33381280423846108LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x137 = 248806;
	int16_t x138 = -1;
	static uint64_t x139 = 329102257186892LLU;
	int64_t x140 = 467890723LL;
	static uint64_t t23 = 252358870496970944LLU;

	t23 = ((x137+x138)*(x139+x140));

	if (t23 != 8095427218097793611LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x142 = -322077;
	int32_t x143 = 26;
	volatile int64_t t24 = -2LL;

	t24 = ((x141+x142)*(x143+x144));

	if (t24 != -8696106LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x145 = 246139510261LLU;
	static volatile int8_t x147 = INT8_MAX;
	int64_t x148 = -2142147373868LL;
	volatile uint64_t t25 = 1212LLU;

	t25 = ((x145+x146)*(x147+x148));

	if (t25 != 3167561704306118511LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = -3757347732LL;
	uint32_t x150 = 64U;
	static uint16_t x151 = UINT16_MAX;
	int64_t t26 = 545LL;

	t26 = ((x149+x150)*(x151+x152));

	if (t26 != -123117011037356LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x153 = UINT32_MAX;
	int8_t x154 = 54;
	int32_t x156 = -1;
	static volatile uint32_t t27 = 497U;

	t27 = ((x153+x154)*(x155+x156));

	if (t27 != 4294967243U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x157 = 1782871U;
	int8_t x158 = -1;
	int64_t x159 = -1LL;
	int64_t t28 = -14217LL;

	t28 = ((x157+x158)*(x159+x160));

	if (t28 != 452848980LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = INT8_MAX;
	volatile int32_t x162 = INT32_MIN;
	static int8_t x163 = INT8_MIN;
	static int64_t x164 = 436538LL;
	int64_t t29 = 26LL;

	t29 = ((x161+x162)*(x163+x164));

	if (t29 != -937183283399610LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x165 = INT64_MAX;
	int32_t x166 = 0;
	uint32_t x167 = 1027812U;
	uint64_t t30 = 12553289959LLU;

	t30 = ((x165+x166)*(x167+x168));

	if (t30 != 18445583707269040664LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x174 = -1LL;
	uint64_t x175 = 86697121789LLU;
	static int16_t x176 = 1;
	uint64_t t31 = 700669985969412919LLU;

	t31 = ((x173+x174)*(x175+x176));

	if (t31 != 18443903095725615106LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x177 = -1;
	uint64_t x178 = 908638892721301LLU;

	t32 = ((x177+x178)*(x179+x180));

	if (t32 != 9423152539505916780LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x182 = 3U;
	int8_t x183 = 30;
	int64_t x184 = INT64_MIN;
	uint64_t t33 = 46404LLU;

	t33 = ((x181+x182)*(x183+x184));

	if (t33 != 21136200LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	static uint32_t x187 = UINT32_MAX;
	static uint64_t x188 = 683LLU;
	volatile uint64_t t34 = 3165591394106099177LLU;

	t34 = ((x185+x186)*(x187+x188));

	if (t34 != 18446742974197749248LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MAX;
	uint8_t x207 = 32U;
	int64_t x208 = -1785328920LL;
	int64_t t35 = 21406892976968LL;

	t35 = ((x205+x206)*(x207+x208));

	if (t35 != -3833964589711365648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = -3;
	int64_t x218 = -1LL;
	volatile int32_t x220 = -1026;
	static int64_t t36 = 215074518581LL;

	t36 = ((x217+x218)*(x219+x220));

	if (t36 != -808LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x221 = 1U;
	uint32_t x222 = 3U;
	int32_t x223 = -1;
	uint64_t x224 = 8LLU;
	uint64_t t37 = 18297LLU;

	t37 = ((x221+x222)*(x223+x224));

	if (t37 != 28LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x225 = -1;
	volatile uint16_t x226 = 99U;
	uint64_t x227 = UINT64_MAX;
	static uint64_t t38 = 604965LLU;

	t38 = ((x225+x226)*(x227+x228));

	if (t38 != 12348LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x229 = INT32_MIN;
	uint64_t x230 = 82647734270LLU;
	volatile int8_t x231 = -29;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t39 = 11036650704354LLU;

	t39 = ((x229+x230)*(x231+x232));

	if (t39 != 5273249417244732LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t t40 = 155270LLU;

	t40 = ((x233+x234)*(x235+x236));

	if (t40 != 12029294981615984400LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x237 = UINT32_MAX;
	uint16_t x239 = UINT16_MAX;
	int64_t t41 = -3413LL;

	t41 = ((x237+x238)*(x239+x240));

	if (t41 != 11904682LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x245 = -1;
	uint8_t x246 = 1U;
	uint16_t x248 = 3596U;
	volatile int32_t t42 = 3318765;

	t42 = ((x245+x246)*(x247+x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x249 = 47361689LLU;
	volatile uint64_t t43 = 229207447843601LLU;

	t43 = ((x249+x250)*(x251+x252));

	if (t43 != 14947685860434590914LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x253 = 7896U;
	static uint16_t x254 = UINT16_MAX;
	uint32_t x255 = 0U;
	int8_t x256 = -1;
	uint32_t t44 = 2213U;

	t44 = ((x253+x254)*(x255+x256));

	if (t44 != 4294893865U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x258 = UINT32_MAX;
	int8_t x259 = INT8_MAX;
	uint16_t x260 = 37U;

	t45 = ((x257+x258)*(x259+x260));

	if (t45 != 704374636216LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = -2419;
	static volatile int8_t x263 = -1;
	int32_t x264 = -1;
	volatile int32_t t46 = 295181496;

	t46 = ((x261+x262)*(x263+x264));

	if (t46 != 4584) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = -490LL;
	uint64_t x267 = 206LLU;
	uint8_t x268 = 11U;
	volatile uint64_t t47 = 796LLU;

	t47 = ((x265+x266)*(x267+x268));

	if (t47 != 18446744073709453966LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x273 = -1;
	uint64_t x274 = 13243840188LLU;
	uint64_t x275 = 7997657278306197983LLU;
	int64_t x276 = -1LL;

	t48 = ((x273+x274)*(x275+x276));

	if (t48 != 792438840983949610LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x281 = 1;
	volatile uint32_t x282 = UINT32_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile uint32_t t49 = 57183U;

	t49 = ((x281+x282)*(x283+x284));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = 3;
	int16_t x286 = 1;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;

	t50 = ((x285+x286)*(x287+x288));

	if (t50 != -131584) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x289 = 1U;
	uint32_t x290 = UINT32_MAX;
	uint32_t x291 = 2557U;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t51 = 2840102U;

	t51 = ((x289+x290)*(x291+x292));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x293 = 56;
	int32_t x295 = -1;
	volatile uint32_t x296 = UINT32_MAX;
	volatile uint32_t t52 = 6U;

	t52 = ((x293+x294)*(x295+x296));

	if (t52 != 144U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = -469;
	volatile int32_t x299 = -100;

	t53 = ((x297+x298)*(x299+x300));

	if (t53 != 18446742055074969966LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x302 = 868460LLU;
	static volatile int32_t x303 = -3468213;
	volatile int64_t x304 = -6LL;
	static volatile uint64_t t54 = 1563578LLU;

	t54 = ((x301+x302)*(x303+x304));

	if (t54 != 7444931580710172LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x305 = 1623U;
	static int32_t x306 = INT32_MIN;
	int64_t x307 = 11010605LL;
	static int32_t x308 = -1;

	t55 = ((x305+x306)*(x307+x308));

	if (t55 != -23645074174393100LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x309 = 0LLU;
	volatile uint64_t x311 = 530341950257679LLU;
	volatile int16_t x312 = -123;
	volatile uint64_t t56 = 930510807814827581LLU;

	t56 = ((x309+x310)*(x311+x312));

	if (t56 != 16087437128081792804LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x317 = 11;
	uint8_t x318 = 14U;
	int8_t x320 = -7;
	volatile int32_t t57 = -379;

	t57 = ((x317+x318)*(x319+x320));

	if (t57 != -175) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = 18U;
	uint64_t t58 = 41598456657413LLU;

	t58 = ((x325+x326)*(x327+x328));

	if (t58 != 18446744073667959116LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = 3879;
	static int32_t x330 = -1;
	int16_t x332 = -1;
	int32_t t59 = -871463697;

	t59 = ((x329+x330)*(x331+x332));

	if (t59 != 240436) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = 29;
	int64_t x335 = -57087624365182535LL;
	uint64_t x336 = UINT64_MAX;
	static volatile uint64_t t60 = 1696503693LLU;

	t60 = ((x333+x334)*(x335+x336));

	if (t60 != 5870582647046332888LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x338 = 237U;
	static int32_t x339 = INT32_MAX;
	int64_t x340 = -31LL;
	int64_t t61 = 1614646029104897LL;

	t61 = ((x337+x338)*(x339+x340));

	if (t61 != -4611685440754294176LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x341 = 28U;
	int8_t x342 = INT8_MIN;
	static volatile int64_t x343 = -1LL;
	volatile uint64_t t62 = 367010LLU;

	t62 = ((x341+x342)*(x343+x344));

	if (t62 != 18446737250138650516LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x345 = -13;
	volatile int8_t x346 = -13;
	int8_t x347 = INT8_MIN;
	volatile uint8_t x348 = 2U;

	t63 = ((x345+x346)*(x347+x348));

	if (t63 != 3276) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = 1U;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	int64_t x352 = 15697150852729LL;
	volatile uint64_t t64 = 688043559969997142LLU;

	t64 = ((x349+x350)*(x351+x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = -1;
	uint64_t x367 = 1932LLU;
	static uint32_t x368 = UINT32_MAX;
	static volatile uint64_t t65 = 189385569304LLU;

	t65 = ((x365+x366)*(x367+x368));

	if (t65 != 18446744069414582389LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x369 = 1996341;
	static int8_t x370 = INT8_MIN;
	uint64_t x371 = 11490LLU;
	volatile uint8_t x372 = 0U;

	t66 = ((x369+x370)*(x371+x372));

	if (t66 != 22936487370LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x374 = INT8_MAX;
	volatile uint32_t x375 = 56U;
	uint16_t x376 = 10U;
	static volatile uint64_t t67 = 5LLU;

	t67 = ((x373+x374)*(x375+x376));

	if (t67 != 512866398LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x377 = 112U;
	uint8_t x379 = 93U;
	int16_t x380 = INT16_MIN;

	t68 = ((x377+x378)*(x379+x380));

	if (t68 != 2214257892U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = 994;
	volatile int64_t x382 = -1LL;
	volatile int16_t x383 = -1;

	t69 = ((x381+x382)*(x383+x384));

	if (t69 != 32536638LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = 550;
	int64_t x386 = 4243104923216LL;
	uint64_t x387 = 14256973325LLU;
	int16_t x388 = 3;
	volatile uint64_t t70 = 9747385026650007LLU;

	t70 = ((x385+x386)*(x387+x388));

	if (t70 != 6959908343715564384LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x389 = 6251748U;
	int16_t x390 = INT16_MIN;
	int8_t x391 = 3;
	uint8_t x392 = 2U;

	t71 = ((x389+x390)*(x391+x392));

	if (t71 != 31094900U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x394 = INT32_MIN;

	t72 = ((x393+x394)*(x395+x396));

	if (t72 != 6926858548797909099LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	uint32_t x404 = UINT32_MAX;

	t73 = ((x401+x402)*(x403+x404));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = -2828;
	int16_t x411 = INT16_MAX;
	int32_t x412 = -1;

	t74 = ((x409+x410)*(x411+x412));

	if (t74 != -1166338536) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x425 = 0U;
	static uint8_t x426 = UINT8_MAX;
	uint16_t x427 = 27U;
	static volatile int8_t x428 = INT8_MIN;

	t75 = ((x425+x426)*(x427+x428));

	if (t75 != 4294941541U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x439 = -1;
	static uint32_t t76 = 40923662U;

	t76 = ((x437+x438)*(x439+x440));

	if (t76 != 4286513410U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x441 = -1;
	static volatile int8_t x442 = INT8_MIN;
	uint16_t x443 = 54U;
	static uint16_t x444 = 867U;
	int32_t t77 = 1426849;

	t77 = ((x441+x442)*(x443+x444));

	if (t77 != -118809) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = -1;
	int8_t x466 = -4;
	int64_t x468 = -1LL;
	static volatile int64_t t78 = -2894979040447370462LL;

	t78 = ((x465+x466)*(x467+x468));

	if (t78 != -134360LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x477 = INT16_MIN;
	int8_t x478 = -1;
	static volatile int8_t x480 = -1;
	volatile int32_t t79 = 34;

	t79 = ((x477+x478)*(x479+x480));

	if (t79 != -3670128) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x481 = INT16_MAX;
	static uint64_t x483 = 40LLU;
	int32_t x484 = -1;
	uint64_t t80 = 4432121614LLU;

	t80 = ((x481+x482)*(x483+x484));

	if (t80 != 6315588463548LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x485 = -1LL;
	volatile int16_t x486 = INT16_MIN;
	uint8_t x487 = 118U;
	static volatile int64_t x488 = -1LL;

	t81 = ((x485+x486)*(x487+x488));

	if (t81 != -3833973LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x489 = 101;
	int16_t x490 = INT16_MAX;
	volatile int32_t x491 = INT32_MIN;
	uint32_t x492 = 7U;
	volatile uint32_t t82 = 91801U;

	t82 = ((x489+x490)*(x491+x492));

	if (t82 != 230076U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x493 = 29U;
	int32_t x494 = INT32_MIN;
	static uint16_t x495 = UINT16_MAX;
	int16_t x496 = -59;
	static volatile uint32_t t83 = 248299U;

	t83 = ((x493+x494)*(x495+x496));

	if (t83 != 1898804U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x498 = 3683U;
	int8_t x499 = -1;
	uint32_t x500 = 50297079U;
	volatile uint32_t t84 = 18185375U;

	t84 = ((x497+x498)*(x499+x500));

	if (t84 != 261810558U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x505 = -1;
	uint8_t x506 = UINT8_MAX;
	uint64_t x507 = 148679604012885LLU;
	uint64_t t85 = 484LLU;

	t85 = ((x505+x506)*(x507+x508));

	if (t85 != 13692858691228779690LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x517 = -2;
	int32_t x518 = INT32_MAX;
	int32_t x519 = 1663;
	volatile int64_t t86 = 754124490422LL;

	t86 = ((x517+x518)*(x519+x520));

	if (t86 != -19862114887310610LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x521 = 133961326192LLU;
	int64_t x522 = INT64_MIN;
	volatile uint64_t t87 = 411913503LLU;

	t87 = ((x521+x522)*(x523+x524));

	if (t87 != 3510448370509464352LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x529 = 0;
	static int8_t x530 = -3;
	volatile int32_t x531 = INT32_MIN;
	uint32_t x532 = 90U;
	volatile uint32_t t88 = 246355U;

	t88 = ((x529+x530)*(x531+x532));

	if (t88 != 2147483378U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x537 = -5189554;
	static int32_t x538 = INT32_MAX;
	static uint8_t x539 = 15U;
	uint32_t x540 = 1U;

	t89 = ((x537+x538)*(x539+x540));

	if (t89 != 4211934416U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x541 = 118565732LL;
	int16_t x542 = INT16_MIN;
	int32_t x544 = INT32_MAX;
	int64_t t90 = 6553240500197LL;

	t90 = ((x541+x542)*(x543+x544));

	if (t90 != 254547586648220316LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x549 = -1LL;
	int8_t x550 = -1;
	uint8_t x551 = 1U;
	int32_t x552 = INT32_MIN;
	int64_t t91 = 10808159517684589LL;

	t91 = ((x549+x550)*(x551+x552));

	if (t91 != 4294967294LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x557 = 2120326109818LL;
	static int64_t x558 = INT64_MIN;
	static volatile uint8_t x559 = 3U;
	uint64_t x560 = UINT64_MAX;
	uint64_t t92 = 20813342651LLU;

	t92 = ((x557+x558)*(x559+x560));

	if (t92 != 4240652219636LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x565 = 8845943U;
	volatile int16_t x566 = INT16_MIN;
	int64_t x567 = 1LL;
	volatile uint8_t x568 = UINT8_MAX;
	volatile int64_t t93 = 1LL;

	t93 = ((x565+x566)*(x567+x568));

	if (t93 != 2256172800LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x573 = 2963U;
	int16_t x576 = -1;
	uint32_t t94 = 220501360U;

	t94 = ((x573+x574)*(x575+x576));

	if (t94 != 373212U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x577 = INT32_MAX;
	static volatile uint32_t x578 = 460U;
	int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;

	t95 = ((x577+x578)*(x579+x580));

	if (t95 != 4264886272U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x582 = UINT32_MAX;
	uint32_t x583 = 52U;
	int16_t x584 = -1;
	uint32_t t96 = 997219767U;

	t96 = ((x581+x582)*(x583+x584));

	if (t96 != 2147483597U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x585 = -5;
	volatile int8_t x586 = INT8_MAX;
	static uint64_t x587 = 50647828496LLU;
	volatile uint16_t x588 = 96U;
	volatile uint64_t t97 = 12027637417893550LLU;

	t97 = ((x585+x586)*(x587+x588));

	if (t97 != 6179035088224LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x590 = 545U;
	volatile int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MAX;

	t98 = ((x589+x590)*(x591+x592));

	if (t98 != 2687495260LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x598 = INT8_MIN;
	uint32_t x599 = 650462481U;

	t99 = ((x597+x598)*(x599+x600));

	if (t99 != 7405055652754095424LLU) { NG(); } else { ; }
	
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


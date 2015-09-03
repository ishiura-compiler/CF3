#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 114792U;
uint64_t t1 = 355589815LLU;
int16_t x9 = INT16_MIN;
volatile int32_t x12 = 313466717;
volatile int32_t t2 = -1875073;
int16_t x21 = -1;
volatile uint64_t x24 = UINT64_MAX;
int64_t x27 = INT64_MAX;
static int16_t x32 = INT16_MIN;
static int16_t x49 = INT16_MIN;
uint64_t x52 = 0LLU;
int64_t x59 = 7LL;
static volatile int32_t x62 = -1;
uint32_t t14 = 34279938U;
uint64_t x74 = 196LLU;
int64_t x76 = 573374811291929LL;
int8_t x113 = -1;
int16_t x116 = 0;
volatile int32_t t25 = 31056;
uint8_t x134 = UINT8_MAX;
int64_t x143 = 1LL;
volatile uint32_t t28 = 4U;
uint32_t x149 = UINT32_MAX;
int8_t x150 = -1;
int16_t x151 = INT16_MIN;
int8_t x152 = 1;
int8_t x154 = INT8_MIN;
static volatile int32_t x162 = INT32_MAX;
volatile uint32_t x173 = 233587637U;
uint32_t t34 = 82U;
int32_t x179 = INT32_MIN;
uint32_t x180 = 2U;
volatile uint32_t t35 = 202176845U;
volatile int16_t x187 = 102;
int8_t x192 = 4;
static uint16_t x195 = 3455U;
int32_t x196 = -1;
uint32_t x202 = UINT32_MAX;
static int16_t x207 = -1;
uint16_t x210 = UINT16_MAX;
int16_t x211 = -1;
int16_t x212 = INT16_MIN;
static uint64_t t41 = 6LLU;
volatile int64_t x215 = 1813166802LL;
int8_t x221 = -1;
uint16_t x237 = UINT16_MAX;
static int64_t x238 = INT64_MIN;
int32_t t47 = 7514946;
static int8_t x264 = 57;
volatile uint16_t x265 = 10736U;
int16_t x266 = INT16_MIN;
int32_t x268 = 123200;
static int16_t x271 = INT16_MIN;
uint16_t x272 = UINT16_MAX;
volatile int64_t x279 = INT64_MAX;
volatile int16_t x284 = INT16_MIN;
int32_t t58 = 6;
static int64_t x300 = -1LL;
uint16_t x307 = 9U;
int8_t x308 = 1;
volatile uint64_t x310 = 50076214311LLU;
static uint64_t x319 = 3281777958149LLU;
volatile int64_t t66 = 20796012813118426LL;
static volatile uint64_t x322 = 324LLU;
int64_t x323 = INT64_MAX;
static int64_t x324 = INT64_MAX;
volatile int64_t t67 = -2123824LL;
volatile int16_t x330 = INT16_MAX;
static volatile int16_t x340 = -1;
volatile int32_t t71 = -691667063;
uint64_t x346 = 4033039895LLU;
int64_t t74 = 0LL;
int32_t x360 = INT32_MAX;
volatile int16_t x367 = -251;
uint8_t x381 = 23U;
uint64_t x388 = 101757257325795LLU;
int8_t x389 = -2;
static volatile uint32_t x394 = 0U;
volatile int32_t x396 = -1;
uint64_t t85 = 9LLU;
int8_t x401 = INT8_MAX;
int16_t x402 = INT16_MAX;
static uint8_t x404 = 27U;
int8_t x424 = -6;
int8_t x428 = -15;
volatile int32_t t92 = 1;
static uint16_t x438 = 234U;
int32_t x444 = 611183;
int64_t t95 = -5833657427414LL;
int32_t x445 = -85425350;
int32_t x448 = -3;
uint16_t x450 = 346U;
static volatile uint32_t t98 = 468502U;
static int16_t x459 = INT16_MIN;
int16_t x460 = 470;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int16_t x2 = INT16_MIN;
	int64_t x4 = 62LL;
	volatile int64_t t0 = -1892355339700705LL;

	t0 = (x1^((x2==x3)-x4));

	if (t0 != 66LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint8_t x6 = 71U;
	int32_t x7 = 10105023;
	uint64_t x8 = UINT64_MAX;

	t1 = (x5^((x6==x7)-x8));

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MIN;
	static int8_t x11 = 1;

	t2 = (x9^((x10==x11)-x12));

	if (t2 != 313483427) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -17438014;
	uint64_t x14 = 478999557278LLU;
	static uint64_t x15 = 347012LLU;
	int64_t x16 = -1LL;
	int64_t t3 = -290614724449661158LL;

	t3 = (x13^((x14==x15)-x16));

	if (t3 != -17438013LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -1LL;
	int16_t x23 = 1;
	uint64_t t4 = 31518491333LLU;

	t4 = (x21^((x22==x23)-x24));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -1;

	t5 = (x25^((x26==x27)-x28));

	if (t5 != 2147483519) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 30604809U;
	volatile int8_t x30 = INT8_MAX;
	static int16_t x31 = INT16_MAX;
	uint32_t t6 = 1680U;

	t6 = (x29^((x30==x31)-x32));

	if (t6 != 30572041U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	static volatile int64_t x36 = 144222766843LL;
	int64_t t7 = -10477638LL;

	t7 = (x33^((x34==x35)-x36));

	if (t7 != 144222763269LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MAX;
	static volatile uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t8 = 11657910;

	t8 = (x37^((x38==x39)-x40));

	if (t8 != -2147418114) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int64_t x42 = 1656970153585LL;
	int32_t x43 = -1;
	int16_t x44 = 5;
	volatile int64_t t9 = -202922510381900251LL;

	t9 = (x41^((x42==x43)-x44));

	if (t9 != 4LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 5731325306LLU;
	int8_t x46 = -3;
	int32_t x47 = -71;
	int32_t x48 = -1;
	static uint64_t t10 = 4673338386284LLU;

	t10 = (x45^((x46==x47)-x48));

	if (t10 != 5731325307LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	uint64_t t11 = 3159658139428475204LLU;

	t11 = (x49^((x50==x51)-x52));

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 174U;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t x55 = -121304174;
	int8_t x56 = INT8_MIN;
	int32_t t12 = -23026870;

	t12 = (x53^((x54==x55)-x56));

	if (t12 != 46) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = 0;
	int16_t x58 = -4;
	volatile uint16_t x60 = 3509U;
	int32_t t13 = 403;

	t13 = (x57^((x58==x59)-x60));

	if (t13 != -3509) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 386U;
	static int64_t x63 = INT64_MAX;
	uint32_t x64 = 1874U;

	t14 = (x61^((x62==x63)-x64));

	if (t14 != 4294965548U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	uint32_t x75 = 244527U;
	static volatile int64_t t15 = 25471303158LL;

	t15 = (x73^((x74==x75)-x76));

	if (t15 != 573375014289127LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1LL;
	uint8_t x83 = UINT8_MAX;
	volatile int8_t x84 = -9;
	int32_t t16 = -12328;

	t16 = (x81^((x82==x83)-x84));

	if (t16 != -32759) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 3687429111730498LLU;
	int16_t x86 = INT16_MAX;
	static int16_t x87 = INT16_MIN;
	volatile int32_t x88 = INT32_MAX;
	volatile uint64_t t17 = 121164LLU;

	t17 = (x85^((x86==x87)-x88));

	if (t17 != 18443056646689575235LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MAX;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t18 = -521;

	t18 = (x89^((x90==x91)-x92));

	if (t18 != -130) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	uint16_t x95 = 5152U;
	int16_t x96 = INT16_MIN;
	int64_t t19 = 12616374LL;

	t19 = (x93^((x94==x95)-x96));

	if (t19 != -32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	static uint8_t x102 = 1U;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = 117U;
	static int64_t t20 = -311746253369LL;

	t20 = (x101^((x102==x103)-x104));

	if (t20 != 9223372036854775691LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	int64_t x106 = -1LL;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = 30U;
	static volatile int32_t t21 = 14496714;

	t21 = (x105^((x106==x107)-x108));

	if (t21 != 29) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MIN;
	static volatile int16_t x111 = INT16_MIN;
	uint32_t x112 = 53994697U;
	volatile uint32_t t22 = 7U;

	t22 = (x109^((x110==x111)-x112));

	if (t22 != 53994679U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -1;
	volatile int32_t t23 = 892878;

	t23 = (x113^((x114==x115)-x116));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x117 = UINT16_MAX;
	int32_t x118 = INT32_MAX;
	static int8_t x119 = INT8_MIN;
	uint16_t x120 = 451U;
	static int32_t t24 = 30127;

	t24 = (x117^((x118==x119)-x120));

	if (t24 != -65086) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -49;
	int8_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MAX;

	t25 = (x121^((x122==x123)-x124));

	if (t25 != 77) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 11U;
	volatile int8_t x135 = 55;
	int64_t x136 = INT64_MAX;
	volatile int64_t t26 = -981046616LL;

	t26 = (x133^((x134==x135)-x136));

	if (t26 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = -1;
	volatile int64_t x142 = INT64_MIN;
	volatile int16_t x144 = INT16_MAX;
	int32_t t27 = 33757052;

	t27 = (x141^((x142==x143)-x144));

	if (t27 != 32766) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	uint64_t x146 = UINT64_MAX;
	volatile int64_t x147 = -1LL;
	uint32_t x148 = UINT32_MAX;

	t28 = (x145^((x146==x147)-x148));

	if (t28 != 4294967170U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t t29 = 1U;

	t29 = (x149^((x150==x151)-x152));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 1261U;
	int64_t x155 = INT64_MIN;
	int32_t x156 = -1;
	uint32_t t30 = 1476717004U;

	t30 = (x153^((x154==x155)-x156));

	if (t30 != 1260U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 28111048482LLU;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	uint64_t t31 = 1963LLU;

	t31 = (x157^((x158==x159)-x160));

	if (t31 != 28111048480LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x161 = 25U;
	volatile uint8_t x163 = 0U;
	int8_t x164 = -1;
	static volatile int32_t t32 = 203045649;

	t32 = (x161^((x162==x163)-x164));

	if (t32 != 24) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = 0;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = -1;
	static uint8_t x172 = 17U;
	int32_t t33 = 445;

	t33 = (x169^((x170==x171)-x172));

	if (t33 != -16) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x174 = 1533919296956349438LLU;
	uint32_t x175 = 138U;
	int16_t x176 = INT16_MIN;

	t34 = (x173^((x174==x175)-x176));

	if (t34 != 233620405U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = 1062U;
	int64_t x178 = INT64_MIN;

	t35 = (x177^((x178==x179)-x180));

	if (t35 != 4294966232U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MAX;
	static volatile uint32_t x186 = UINT32_MAX;
	volatile int32_t x188 = -1467;
	volatile int32_t t36 = -11786;

	t36 = (x185^((x186==x187)-x188));

	if (t36 != 31300) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 113U;
	int64_t x190 = 0LL;
	int16_t x191 = INT16_MIN;
	static volatile int32_t t37 = -127414710;

	t37 = (x189^((x190==x191)-x192));

	if (t37 != -115) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x193 = -2;
	static volatile uint16_t x194 = 3384U;
	int32_t t38 = -917337;

	t38 = (x193^((x194==x195)-x196));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x201 = 120U;
	int64_t x203 = -78831160040922LL;
	volatile uint16_t x204 = 7284U;
	volatile int32_t t39 = 243639;

	t39 = (x201^((x202==x203)-x204));

	if (t39 != -7180) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x205 = INT64_MIN;
	uint64_t x206 = 53LLU;
	int8_t x208 = INT8_MIN;
	volatile int64_t t40 = 350058951714814340LL;

	t40 = (x205^((x206==x207)-x208));

	if (t40 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 69214286168964LLU;

	t41 = (x209^((x210==x211)-x212));

	if (t41 != 69214286136196LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = INT32_MIN;
	static uint64_t x214 = 200605116208176346LLU;
	int16_t x216 = -1;
	int32_t t42 = -1;

	t42 = (x213^((x214==x215)-x216));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = -1;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 78U;
	uint64_t t43 = 2LLU;

	t43 = (x217^((x218==x219)-x220));

	if (t43 != 77LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	static volatile int32_t x224 = -4405736;
	volatile int32_t t44 = -1669;

	t44 = (x221^((x222==x223)-x224));

	if (t44 != -4405737) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = -1;
	static uint32_t x226 = 11U;
	int32_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t45 = -5151;

	t45 = (x225^((x226==x227)-x228));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x233 = 7;
	int8_t x234 = INT8_MAX;
	volatile int64_t x235 = INT64_MIN;
	static int16_t x236 = INT16_MAX;
	static int32_t t46 = -137;

	t46 = (x233^((x234==x235)-x236));

	if (t46 != -32762) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x239 = -1;
	volatile int16_t x240 = 1;

	t47 = (x237^((x238==x239)-x240));

	if (t47 != -65536) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 14190U;
	uint16_t x244 = 13601U;
	static volatile int64_t t48 = 1477909LL;

	t48 = (x241^((x242==x243)-x244));

	if (t48 != 9223372036854762207LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x245 = UINT8_MAX;
	static uint32_t x246 = 2141517641U;
	static int16_t x247 = INT16_MAX;
	int64_t x248 = -1835408608477680971LL;
	volatile int64_t t49 = -1022454758LL;

	t49 = (x245^((x246==x247)-x248));

	if (t49 != 1835408608477681076LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x249 = 1458396773U;
	uint16_t x250 = 1268U;
	int64_t x251 = -1LL;
	int8_t x252 = -34;
	volatile uint32_t t50 = 20652617U;

	t50 = (x249^((x250==x251)-x252));

	if (t50 != 1458396743U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x253 = UINT16_MAX;
	volatile int64_t x254 = INT64_MIN;
	uint8_t x255 = 0U;
	static int16_t x256 = INT16_MIN;
	int32_t t51 = 64013566;

	t51 = (x253^((x254==x255)-x256));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = UINT16_MAX;
	static int8_t x260 = INT8_MAX;
	int32_t t52 = -44819426;

	t52 = (x257^((x258==x259)-x260));

	if (t52 != 32641) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x261 = 39;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = 5;
	static int32_t t53 = -404556394;

	t53 = (x261^((x262==x263)-x264));

	if (t53 != -32) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x267 = 4293U;
	int32_t t54 = -21677296;

	t54 = (x265^((x266==x267)-x268));

	if (t54 != -116944) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x269 = 0LLU;
	int8_t x270 = 24;
	uint64_t t55 = 5396345031LLU;

	t55 = (x269^((x270==x271)-x272));

	if (t55 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int16_t x276 = -1;
	int32_t t56 = 290668;

	t56 = (x273^((x274==x275)-x276));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	int16_t x280 = INT16_MAX;
	volatile int32_t t57 = -2;

	t57 = (x277^((x278==x279)-x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1LL;
	int8_t x283 = -1;

	t58 = (x281^((x282==x283)-x284));

	if (t58 != -2147450879) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x285 = 2707710141LLU;
	int64_t x286 = INT64_MAX;
	volatile int16_t x287 = -1;
	int8_t x288 = 13;
	static uint64_t t59 = 2LLU;

	t59 = (x285^((x286==x287)-x288));

	if (t59 != 18446744071001841486LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x290 = -704368152895LL;
	uint16_t x291 = 0U;
	volatile int64_t x292 = INT64_MAX;
	int64_t t60 = 63936651LL;

	t60 = (x289^((x290==x291)-x292));

	if (t60 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x293 = UINT8_MAX;
	static volatile int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = 9U;
	static int32_t t61 = 2;

	t61 = (x293^((x294==x295)-x296));

	if (t61 != -248) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x297 = 7LLU;
	static int32_t x298 = INT32_MIN;
	int32_t x299 = -1602916;
	static uint64_t t62 = 1763778825263602LLU;

	t62 = (x297^((x298==x299)-x300));

	if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x301 = UINT64_MAX;
	volatile int8_t x302 = 3;
	static int8_t x303 = -38;
	static volatile uint16_t x304 = UINT16_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = (x301^((x302==x303)-x304));

	if (t63 != 65534LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x305 = 25U;
	static volatile uint16_t x306 = 342U;
	volatile int32_t t64 = 23663212;

	t64 = (x305^((x306==x307)-x308));

	if (t64 != -26) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x309 = 3U;
	volatile uint32_t x311 = 406387946U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t65 = -301;

	t65 = (x309^((x310==x311)-x312));

	if (t65 != -65534) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MIN;
	int64_t x320 = -1LL;

	t66 = (x317^((x318==x319)-x320));

	if (t66 != -127LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x321 = 100U;

	t67 = (x321^((x322==x323)-x324));

	if (t67 != -9223372036854775707LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t68 = 11825827;

	t68 = (x325^((x326==x327)-x328));

	if (t68 != -2147483394) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = 1;
	static int64_t x331 = 25908629LL;
	int64_t x332 = INT64_MAX;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x329^((x330==x331)-x332));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = 60U;
	int32_t x334 = -1;
	uint8_t x335 = 32U;
	int64_t x336 = 240236LL;
	volatile int64_t t70 = 3404LL;

	t70 = (x333^((x334==x335)-x336));

	if (t70 != -240216LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x337 = 60U;
	static int16_t x338 = -1;
	int8_t x339 = INT8_MAX;

	t71 = (x337^((x338==x339)-x340));

	if (t71 != 61) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x341 = 7;
	volatile int16_t x342 = -1;
	volatile uint64_t x343 = 1498542208199LLU;
	int16_t x344 = -12748;
	volatile int32_t t72 = 29;

	t72 = (x341^((x342==x343)-x344));

	if (t72 != 12747) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x345 = 30U;
	volatile uint16_t x347 = UINT16_MAX;
	int8_t x348 = 29;
	uint32_t t73 = 109460712U;

	t73 = (x345^((x346==x347)-x348));

	if (t73 != 4294967293U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = -3;
	int32_t x351 = 384274675;
	volatile int8_t x352 = INT8_MIN;

	t74 = (x349^((x350==x351)-x352));

	if (t74 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 88U;
	int32_t x354 = INT32_MIN;
	int64_t x355 = 40LL;
	static int16_t x356 = -1;
	static int32_t t75 = -176431;

	t75 = (x353^((x354==x355)-x356));

	if (t75 != 89) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 3314U;
	volatile uint8_t x359 = 2U;
	uint32_t t76 = 1U;

	t76 = (x357^((x358==x359)-x360));

	if (t76 != 2147483646U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x361 = -1;
	volatile uint8_t x362 = 0U;
	int64_t x363 = -500211126LL;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t77 = 5735;

	t77 = (x361^((x362==x363)-x364));

	if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MAX;
	uint32_t x366 = 10852U;
	uint8_t x368 = 19U;
	volatile int32_t t78 = 13603;

	t78 = (x365^((x366==x367)-x368));

	if (t78 != -110) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = -1;
	volatile int32_t x374 = INT32_MAX;
	uint8_t x375 = 14U;
	int64_t x376 = INT64_MAX;
	int64_t t79 = -25LL;

	t79 = (x373^((x374==x375)-x376));

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x377 = 331528402U;
	volatile int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;
	int8_t x380 = -3;
	static volatile uint32_t t80 = 9068097U;

	t80 = (x377^((x378==x379)-x380));

	if (t80 != 331528401U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x382 = -1;
	int16_t x383 = -245;
	int64_t x384 = 151837677724439LL;
	int64_t t81 = 126256593LL;

	t81 = (x381^((x382==x383)-x384));

	if (t81 != -151837677724418LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x385 = INT16_MIN;
	static uint16_t x386 = 554U;
	static int64_t x387 = INT64_MIN;
	static volatile uint64_t t82 = 19504488975659452LLU;

	t82 = (x385^((x386==x387)-x388));

	if (t82 != 101757257343773LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x390 = INT16_MAX;
	static uint8_t x391 = 3U;
	int8_t x392 = INT8_MIN;
	int32_t t83 = -3718784;

	t83 = (x389^((x390==x391)-x392));

	if (t83 != -130) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x393 = INT32_MIN;
	static volatile uint64_t x395 = 231954LLU;
	int32_t t84 = 218;

	t84 = (x393^((x394==x395)-x396));

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 4LLU;
	static uint16_t x398 = 341U;
	volatile uint16_t x399 = 30362U;
	int32_t x400 = 34;

	t85 = (x397^((x398==x399)-x400));

	if (t85 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x403 = 3;
	static volatile int32_t t86 = 57295044;

	t86 = (x401^((x402==x403)-x404));

	if (t86 != -102) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int16_t x406 = INT16_MAX;
	static int8_t x407 = 46;
	volatile int64_t x408 = -1LL;
	volatile int64_t t87 = 0LL;

	t87 = (x405^((x406==x407)-x408));

	if (t87 != -127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = 53LL;
	static volatile int64_t x411 = -457LL;
	int64_t x412 = -64853975061361LL;
	int64_t t88 = -22988499642638131LL;

	t88 = (x409^((x410==x411)-x412));

	if (t88 != -9223307182879714447LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	volatile int64_t t89 = -134094333170161325LL;

	t89 = (x413^((x414==x415)-x416));

	if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x417 = UINT64_MAX;
	static uint32_t x418 = 4U;
	int64_t x419 = -85586156833068905LL;
	int64_t x420 = INT64_MAX;
	uint64_t t90 = 7705754961LLU;

	t90 = (x417^((x418==x419)-x420));

	if (t90 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x421 = UINT64_MAX;
	volatile int32_t x422 = INT32_MIN;
	int16_t x423 = -1;
	volatile uint64_t t91 = 85LLU;

	t91 = (x421^((x422==x423)-x424));

	if (t91 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = INT16_MIN;
	uint16_t x426 = 1U;
	static volatile int32_t x427 = INT32_MIN;

	t92 = (x425^((x426==x427)-x428));

	if (t92 != -32753) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x429 = 3319LLU;
	uint64_t x430 = 323842163746664LLU;
	volatile uint8_t x431 = UINT8_MAX;
	uint8_t x432 = 3U;
	uint64_t t93 = 3294148519050583LLU;

	t93 = (x429^((x430==x431)-x432));

	if (t93 != 18446744073709548298LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x437 = -316LL;
	int16_t x439 = -8;
	static volatile uint64_t x440 = 498032204857LLU;
	static volatile uint64_t t94 = 782562045817824180LLU;

	t94 = (x437^((x438==x439)-x440));

	if (t94 != 498032205059LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x441 = 942675LL;
	uint8_t x442 = 16U;
	int32_t x443 = -1;

	t95 = (x441^((x442==x443)-x444));

	if (t95 != -471358LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x446 = -1;
	uint8_t x447 = UINT8_MAX;
	int32_t t96 = 4128263;

	t96 = (x445^((x446==x447)-x448));

	if (t96 != -85425351) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x449 = 67827222488122LLU;
	volatile int16_t x451 = INT16_MIN;
	int32_t x452 = -24;
	volatile uint64_t t97 = 107460681114479122LLU;

	t97 = (x449^((x450==x451)-x452));

	if (t97 != 67827222488098LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x453 = 735U;
	uint32_t x454 = 22326566U;
	int64_t x455 = INT64_MIN;
	static uint16_t x456 = 1U;

	t98 = (x453^((x454==x455)-x456));

	if (t98 != 4294966560U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = 321LL;
	int8_t x458 = INT8_MAX;
	static volatile int64_t t99 = 722667LL;

	t99 = (x457^((x458==x459)-x460));

	if (t99 != -149LL) { NG(); } else { ; }
	
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


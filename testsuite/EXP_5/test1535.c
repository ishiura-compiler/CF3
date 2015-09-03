#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
uint64_t x14 = 1787LLU;
int64_t x15 = -1LL;
static volatile int32_t t2 = 12;
int32_t t3 = 6093415;
uint64_t x21 = UINT64_MAX;
uint32_t x37 = 13233U;
int16_t x47 = -1;
static uint8_t x52 = UINT8_MAX;
int64_t x56 = -1LL;
uint64_t x61 = 24892LLU;
uint8_t x63 = UINT8_MAX;
static int8_t x69 = 2;
static volatile uint64_t t12 = 30LLU;
uint16_t x82 = 2U;
int64_t x94 = -1LL;
int64_t x98 = INT64_MAX;
int64_t t18 = -988244547LL;
static int16_t x103 = INT16_MAX;
static uint64_t x119 = 19691583267LLU;
int16_t x122 = INT16_MAX;
int32_t x127 = INT32_MIN;
int8_t x128 = 21;
int8_t x129 = INT8_MIN;
int16_t x138 = -1;
static volatile int32_t t28 = -5;
static int32_t x146 = INT32_MIN;
int32_t x156 = INT32_MAX;
static int16_t x168 = INT16_MIN;
int64_t x170 = INT64_MIN;
int8_t x178 = INT8_MIN;
int64_t x180 = INT64_MAX;
volatile int16_t x181 = INT16_MIN;
static uint32_t x184 = 701156U;
uint32_t t40 = 154U;
int32_t t42 = 96;
uint16_t x221 = 0U;
int16_t x224 = -1;
static volatile uint16_t x237 = 0U;
int32_t x240 = -1;
int32_t x249 = 75094;
int16_t x252 = INT16_MIN;
static volatile uint8_t x253 = 54U;
int16_t x255 = INT16_MAX;
static volatile int16_t x260 = -1;
int8_t x261 = -1;
static int8_t x264 = -2;
volatile int32_t t51 = 2429;
static int64_t x272 = 97428LL;
static volatile int32_t x284 = 1516007;
uint32_t t53 = 6762749U;
int32_t x289 = 376309;
volatile int64_t x290 = INT64_MIN;
int8_t x292 = INT8_MIN;
static int32_t t55 = 19419;
uint64_t x295 = 3386877255232761LLU;
static int16_t x297 = -1;
int32_t t57 = -1099557;
uint16_t x308 = 247U;
static uint64_t x311 = UINT64_MAX;
static volatile uint64_t t61 = 26LLU;
uint16_t x329 = UINT16_MAX;
static int8_t x330 = -1;
int64_t x337 = 197856LL;
uint32_t x339 = 31010238U;
static volatile uint64_t t66 = 4349126LLU;
static uint32_t x341 = 212481931U;
volatile uint64_t x342 = 1063495786517460003LLU;
uint64_t x343 = 230362868443910332LLU;
int8_t x350 = -1;
int32_t x351 = -1;
int32_t x352 = -1;
volatile int32_t t68 = 276828803;
volatile uint32_t t69 = 462002U;
uint64_t x357 = 159575LLU;
int8_t x365 = 0;
int64_t x366 = -733258953LL;
volatile int32_t x367 = 202979;
int8_t x375 = INT8_MIN;
int16_t x379 = INT16_MIN;
uint64_t t76 = 262783952734319210LLU;
int64_t x389 = -23638145429720LL;
int64_t x390 = 6517829914506LL;
uint8_t x393 = 19U;
uint8_t x399 = 7U;
int32_t t79 = -168349986;
int64_t x409 = INT64_MAX;
static volatile int64_t t81 = -23902855LL;
int32_t x425 = INT32_MAX;
static uint16_t x430 = 3409U;
volatile uint8_t x435 = 56U;
static int32_t x444 = -164659;
int32_t x448 = -1;
volatile int64_t t88 = -1229148514982481804LL;
int16_t x452 = -177;
uint32_t t89 = 2246U;
uint64_t x454 = UINT64_MAX;
static int8_t x458 = INT8_MIN;
volatile uint8_t x473 = 100U;
int32_t x475 = 201453;
int16_t x478 = INT16_MIN;
int64_t x480 = 12133155110227LL;
int64_t t95 = 689563722431LL;
uint8_t x481 = 0U;
int16_t x487 = 224;
int8_t x492 = -1;
int8_t x495 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static uint64_t x2 = 13049779207877LLU;
	int64_t x3 = 883875LL;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 1;

	t0 = (x1+((x2<=x3)-x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = -1;
	uint16_t x11 = 60U;
	int8_t x12 = INT8_MAX;
	int32_t t1 = -2666;

	t1 = (x9+((x10<=x11)-x12));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 342136175;
	static uint8_t x16 = 0U;

	t2 = (x13+((x14<=x15)-x16));

	if (t2 != 342136176) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = -1;
	int16_t x19 = 2;
	int16_t x20 = -7;

	t3 = (x17+((x18<=x19)-x20));

	if (t3 != 263) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = 132776800;
	uint64_t x23 = 2LLU;
	int8_t x24 = -1;
	uint64_t t4 = 574859500415522LLU;

	t4 = (x21+((x22<=x23)-x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -597;
	int64_t x30 = -1LL;
	static int16_t x31 = -1;
	static uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 6539137746214LLU;

	t5 = (x29+((x30<=x31)-x32));

	if (t5 != 18446744073709551021LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = -1;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 689U;
	volatile int32_t x36 = INT32_MAX;
	static int32_t t6 = 1983;

	t6 = (x33+((x34<=x35)-x36));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 8991702330829LLU;

	t7 = (x37+((x38<=x39)-x40));

	if (t7 != 13235LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -417;
	int16_t x46 = -1;
	int64_t x48 = -1006463549LL;
	int64_t t8 = 0LL;

	t8 = (x45+((x46<=x47)-x48));

	if (t8 != 1006463133LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	int64_t x51 = 426LL;
	static int32_t t9 = 0;

	t9 = (x49+((x50<=x51)-x52));

	if (t9 != -382) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int64_t x54 = 580198313679614050LL;
	static uint8_t x55 = UINT8_MAX;
	volatile uint64_t t10 = 1528577804641922245LLU;

	t10 = (x53+((x54<=x55)-x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x62 = -8037;
	uint64_t x64 = 64650730112924356LLU;
	uint64_t t11 = 206866341961230LLU;

	t11 = (x61+((x62<=x63)-x64));

	if (t11 != 18382093343596652153LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x70 = 63641254587211605LLU;
	static int64_t x71 = -13LL;
	volatile uint64_t x72 = UINT64_MAX;

	t12 = (x69+((x70<=x71)-x72));

	if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 937U;
	int16_t x74 = INT16_MIN;
	static int64_t x75 = -2428517LL;
	int64_t x76 = 168950108LL;
	int64_t t13 = 4978LL;

	t13 = (x73+((x74<=x75)-x76));

	if (t13 != -168949171LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = UINT32_MAX;
	static int32_t x78 = 2435356;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 20188U;
	uint32_t t14 = 60279398U;

	t14 = (x77+((x78<=x79)-x80));

	if (t14 != 4294947107U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 15U;
	static uint64_t x83 = 1858445LLU;
	uint8_t x84 = 3U;
	volatile int32_t t15 = -60694720;

	t15 = (x81+((x82<=x83)-x84));

	if (t15 != 13) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 9707941977442140LLU;
	int16_t x86 = -16;
	volatile int8_t x87 = -1;
	int64_t x88 = -1LL;
	volatile uint64_t t16 = 2220703729LLU;

	t16 = (x85+((x86<=x87)-x88));

	if (t16 != 9707941977442142LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	volatile int32_t x96 = 76;
	int32_t t17 = -187;

	t17 = (x93+((x94<=x95)-x96));

	if (t17 != 179) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x99 = 61U;
	int64_t x100 = -1LL;

	t18 = (x97+((x98<=x99)-x100));

	if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = 6U;
	int32_t x104 = -164180;
	volatile int64_t t19 = 40200868238182212LL;

	t19 = (x101+((x102<=x103)-x104));

	if (t19 != 164180LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = 2U;
	static uint64_t x106 = UINT64_MAX;
	volatile int16_t x107 = INT16_MAX;
	volatile int64_t x108 = -720LL;
	int64_t t20 = 30676LL;

	t20 = (x105+((x106<=x107)-x108));

	if (t20 != 722LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = -1;
	int32_t x114 = -4016;
	int16_t x115 = -1;
	int16_t x116 = INT16_MAX;
	int32_t t21 = 50553;

	t21 = (x113+((x114<=x115)-x116));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x117 = 774U;
	static uint64_t x118 = 70594463982632622LLU;
	static uint32_t x120 = UINT32_MAX;
	uint32_t t22 = 220271U;

	t22 = (x117+((x118<=x119)-x120));

	if (t22 != 775U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = 2;
	static int32_t x123 = INT32_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t23 = -179;

	t23 = (x121+((x122<=x123)-x124));

	if (t23 != 32771) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = INT16_MAX;
	uint32_t x126 = UINT32_MAX;
	int32_t t24 = -34566;

	t24 = (x125+((x126<=x127)-x128));

	if (t24 != 32746) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 58979671U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t25 = 3662;

	t25 = (x129+((x130<=x131)-x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -151;
	int64_t x134 = INT64_MIN;
	int64_t x135 = -1LL;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t26 = 330;

	t26 = (x133+((x134<=x135)-x136));

	if (t26 != -22) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x137 = -2;
	volatile int8_t x139 = INT8_MIN;
	uint8_t x140 = 2U;
	volatile int32_t t27 = 30885;

	t27 = (x137+((x138<=x139)-x140));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -749;
	int32_t x142 = 21;
	uint64_t x143 = 27143404775LLU;
	static int16_t x144 = -1;

	t28 = (x141+((x142<=x143)-x144));

	if (t28 != -747) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 7925U;
	static int16_t x147 = INT16_MIN;
	int8_t x148 = 0;
	volatile int32_t t29 = -121932;

	t29 = (x145+((x146<=x147)-x148));

	if (t29 != 7926) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x149 = UINT16_MAX;
	static int64_t x150 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	volatile int64_t x152 = 209900477LL;
	static int64_t t30 = -48007485LL;

	t30 = (x149+((x150<=x151)-x152));

	if (t30 != -209834941LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = INT64_MIN;
	uint64_t x155 = 5759LLU;
	volatile uint64_t t31 = 69237LLU;

	t31 = (x153+((x154<=x155)-x156));

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	static uint8_t x163 = 0U;
	int32_t x164 = 2;
	volatile int32_t t32 = 977;

	t32 = (x161+((x162<=x163)-x164));

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int16_t x166 = -1;
	int32_t x167 = INT32_MAX;
	int32_t t33 = 7;

	t33 = (x165+((x166<=x167)-x168));

	if (t33 != 33024) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x169 = 1033009;
	int16_t x171 = -1;
	static volatile uint16_t x172 = 0U;
	int32_t t34 = -1887993;

	t34 = (x169+((x170<=x171)-x172));

	if (t34 != 1033010) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x173 = 1491017799756481305LLU;
	static int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = UINT8_MAX;
	uint64_t t35 = 1333571677588264LLU;

	t35 = (x173+((x174<=x175)-x176));

	if (t35 != 1491017799756481050LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x179 = 3426U;
	volatile int64_t t36 = -519156868005034LL;

	t36 = (x177+((x178<=x179)-x180));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x182 = 15U;
	int64_t x183 = INT64_MIN;
	volatile uint32_t t37 = 125486807U;

	t37 = (x181+((x182<=x183)-x184));

	if (t37 != 4294233372U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x189 = 2U;
	int64_t x190 = 14385373LL;
	static int64_t x191 = -1LL;
	volatile int64_t x192 = INT64_MAX;
	volatile int64_t t38 = 342249353LL;

	t38 = (x189+((x190<=x191)-x192));

	if (t38 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = -4528153392214184LL;
	int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MIN;
	int16_t x200 = -16143;
	volatile int64_t t39 = -175533830386054LL;

	t39 = (x197+((x198<=x199)-x200));

	if (t39 != -4528153392198041LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = UINT16_MAX;
	static volatile int64_t x206 = -1LL;
	volatile int16_t x207 = INT16_MIN;
	uint32_t x208 = 1U;

	t40 = (x205+((x206<=x207)-x208));

	if (t40 != 65534U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = 31U;
	static uint16_t x210 = UINT16_MAX;
	int32_t x211 = 90985348;
	uint32_t x212 = 54U;
	volatile uint32_t t41 = 1U;

	t41 = (x209+((x210<=x211)-x212));

	if (t41 != 4294967274U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x217 = -3;
	static volatile int32_t x218 = INT32_MIN;
	uint8_t x219 = 3U;
	uint16_t x220 = UINT16_MAX;

	t42 = (x217+((x218<=x219)-x220));

	if (t42 != -65537) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x222 = INT16_MIN;
	int8_t x223 = -2;
	volatile int32_t t43 = -2450;

	t43 = (x221+((x222<=x223)-x224));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x225 = UINT32_MAX;
	volatile int32_t x226 = 47306213;
	static uint8_t x227 = 6U;
	uint64_t x228 = 24675LLU;
	volatile uint64_t t44 = 5911847744713342LLU;

	t44 = (x225+((x226<=x227)-x228));

	if (t44 != 4294942620LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x229 = 24LLU;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	int8_t x232 = 23;
	uint64_t t45 = 111195370LLU;

	t45 = (x229+((x230<=x231)-x232));

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = 21;
	int32_t t46 = 60390676;

	t46 = (x237+((x238<=x239)-x240));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x245 = 0U;
	static int32_t x246 = INT32_MIN;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = -1;
	static volatile int32_t t47 = 24240;

	t47 = (x245+((x246<=x247)-x248));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x250 = 27056U;
	uint32_t x251 = 2405188U;
	int32_t t48 = 18950;

	t48 = (x249+((x250<=x251)-x252));

	if (t48 != 107863) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x254 = -115LL;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t49 = -120494604;

	t49 = (x253+((x254<=x255)-x256));

	if (t49 != -72) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x257 = -759;
	uint16_t x258 = 1815U;
	int8_t x259 = -1;
	int32_t t50 = 0;

	t50 = (x257+((x258<=x259)-x260));

	if (t50 != -758) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;

	t51 = (x261+((x262<=x263)-x264));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x269 = 2864574265171LLU;
	int16_t x270 = -44;
	int16_t x271 = INT16_MAX;
	uint64_t t52 = 868062138447LLU;

	t52 = (x269+((x270<=x271)-x272));

	if (t52 != 2864574167744LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x281 = 1451744605U;
	uint32_t x282 = 144U;
	int8_t x283 = INT8_MAX;

	t53 = (x281+((x282<=x283)-x284));

	if (t53 != 1450228598U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x285 = INT32_MIN;
	uint32_t x286 = 141242U;
	volatile int32_t x287 = INT32_MIN;
	volatile int16_t x288 = INT16_MIN;
	int32_t t54 = 30557;

	t54 = (x285+((x286<=x287)-x288));

	if (t54 != -2147450879) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x291 = INT32_MIN;

	t55 = (x289+((x290<=x291)-x292));

	if (t55 != 376438) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 1501233LLU;
	volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t56 = 9173691751LLU;

	t56 = (x293+((x294<=x295)-x296));

	if (t56 != 257LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = 11109;
	static int16_t x300 = INT16_MAX;

	t57 = (x297+((x298<=x299)-x300));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x301 = INT32_MAX;
	static int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t58 = -3LL;

	t58 = (x301+((x302<=x303)-x304));

	if (t58 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x305 = -13;
	static int64_t x306 = -820766LL;
	volatile uint16_t x307 = UINT16_MAX;
	volatile int32_t t59 = 216;

	t59 = (x305+((x306<=x307)-x308));

	if (t59 != -259) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x309 = UINT32_MAX;
	int32_t x310 = 3300;
	int8_t x312 = -1;
	static uint32_t t60 = 226U;

	t60 = (x309+((x310<=x311)-x312));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x317 = -1;
	static uint16_t x318 = 54U;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 5615613936169LLU;

	t61 = (x317+((x318<=x319)-x320));

	if (t61 != 18446738458095615446LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = -1;
	uint64_t x322 = 509LLU;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t62 = 377487053;

	t62 = (x321+((x322<=x323)-x324));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 492302835U;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 154U;
	static int8_t x328 = INT8_MAX;
	uint32_t t63 = 196126802U;

	t63 = (x325+((x326<=x327)-x328));

	if (t63 != 492302709U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x331 = -1LL;
	uint16_t x332 = 3U;
	static volatile int32_t t64 = 1038587;

	t64 = (x329+((x330<=x331)-x332));

	if (t64 != 65533) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x333 = 65U;
	uint32_t x334 = 26671641U;
	uint32_t x335 = 6680747U;
	static uint8_t x336 = UINT8_MAX;
	int32_t t65 = -1185;

	t65 = (x333+((x334<=x335)-x336));

	if (t65 != -190) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x338 = 821952175LL;
	uint64_t x340 = 267840379837314595LLU;

	t66 = (x337+((x338<=x339)-x340));

	if (t66 != 18178903693872434877LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t67 = 4798652293LLU;

	t67 = (x341+((x342<=x343)-x344));

	if (t67 != 212481932LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = INT32_MIN;

	t68 = (x349+((x350<=x351)-x352));

	if (t68 != -2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x353 = INT32_MAX;
	uint32_t x354 = 1206U;
	uint32_t x355 = 128502002U;
	uint32_t x356 = UINT32_MAX;

	t69 = (x353+((x354<=x355)-x356));

	if (t69 != 2147483649U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MAX;
	int8_t x360 = -1;
	volatile uint64_t t70 = 1346220495LLU;

	t70 = (x357+((x358<=x359)-x360));

	if (t70 != 159577LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = 0U;
	volatile int64_t x362 = INT64_MAX;
	int32_t x363 = -248;
	volatile uint64_t x364 = 441263563102LLU;
	volatile uint64_t t71 = 236319LLU;

	t71 = (x361+((x362<=x363)-x364));

	if (t71 != 18446743632445988514LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x368 = INT64_MAX;
	volatile int64_t t72 = -553273966LL;

	t72 = (x365+((x366<=x367)-x368));

	if (t72 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x369 = 0U;
	uint64_t x370 = 533142811261990LLU;
	int32_t x371 = -1;
	uint32_t x372 = 106U;
	uint32_t t73 = 1513U;

	t73 = (x369+((x370<=x371)-x372));

	if (t73 != 4294967191U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x373 = 42346;
	int32_t x374 = 874429;
	int64_t x376 = -1LL;
	static volatile int64_t t74 = -74LL;

	t74 = (x373+((x374<=x375)-x376));

	if (t74 != 42347LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = INT32_MIN;
	int32_t x380 = 76;
	int32_t t75 = -7256730;

	t75 = (x377+((x378<=x379)-x380));

	if (t75 != -203) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -1;
	static int64_t x383 = 1089606809LL;
	static uint64_t x384 = UINT64_MAX;

	t76 = (x381+((x382<=x383)-x384));

	if (t76 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x391 = -1;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t77 = 294788853845585617LLU;

	t77 = (x389+((x390<=x391)-x392));

	if (t77 != 18446720435564121897LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x394 = 12U;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = -1;
	volatile int32_t t78 = -107;

	t78 = (x393+((x394<=x395)-x396));

	if (t78 != 20) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x397 = 4U;
	volatile int16_t x398 = -1;
	int8_t x400 = -15;

	t79 = (x397+((x398<=x399)-x400));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x405 = 2526132751165971LLU;
	volatile uint32_t x406 = 20876033U;
	int16_t x407 = -1;
	volatile uint16_t x408 = 245U;
	volatile uint64_t t80 = 1LLU;

	t80 = (x405+((x406<=x407)-x408));

	if (t80 != 2526132751165727LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x410 = 2LL;
	volatile uint16_t x411 = UINT16_MAX;
	static uint16_t x412 = 2776U;

	t81 = (x409+((x410<=x411)-x412));

	if (t81 != 9223372036854773032LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x417 = INT16_MIN;
	static uint8_t x418 = 102U;
	static uint16_t x419 = UINT16_MAX;
	volatile int64_t x420 = -1LL;
	volatile int64_t t82 = -14LL;

	t82 = (x417+((x418<=x419)-x420));

	if (t82 != -32766LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = 0;
	int16_t x422 = -1;
	int64_t x423 = INT64_MAX;
	int16_t x424 = -1;
	volatile int32_t t83 = -54440490;

	t83 = (x421+((x422<=x423)-x424));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x426 = -1LL;
	volatile int64_t x427 = 489386426947492132LL;
	static int16_t x428 = INT16_MAX;
	int32_t t84 = 208608;

	t84 = (x425+((x426<=x427)-x428));

	if (t84 != 2147450881) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x429 = 237555U;
	static int32_t x431 = INT32_MIN;
	int16_t x432 = INT16_MIN;
	uint32_t t85 = 0U;

	t85 = (x429+((x430<=x431)-x432));

	if (t85 != 270323U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = 29778461129LL;
	int8_t x434 = -1;
	static int16_t x436 = INT16_MIN;
	int64_t t86 = 6244987847LL;

	t86 = (x433+((x434<=x435)-x436));

	if (t86 != 29778493898LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x441 = -1;
	volatile int64_t x442 = INT64_MAX;
	int8_t x443 = INT8_MIN;
	volatile int32_t t87 = 7027;

	t87 = (x441+((x442<=x443)-x444));

	if (t87 != 164658) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;

	t88 = (x445+((x446<=x447)-x448));

	if (t88 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x449 = 47U;
	uint32_t x450 = UINT32_MAX;
	static uint32_t x451 = 11805U;

	t89 = (x449+((x450<=x451)-x452));

	if (t89 != 224U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = -1;
	static int8_t x455 = INT8_MAX;
	static int8_t x456 = -1;
	int32_t t90 = 382;

	t90 = (x453+((x454<=x455)-x456));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x457 = INT32_MIN;
	int8_t x459 = 3;
	volatile int8_t x460 = 1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x457+((x458<=x459)-x460));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = INT16_MIN;
	int32_t x462 = 3;
	int8_t x463 = 0;
	int8_t x464 = INT8_MIN;
	volatile int32_t t92 = -1;

	t92 = (x461+((x462<=x463)-x464));

	if (t92 != -32640) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x465 = -1;
	int32_t x466 = -1;
	int8_t x467 = INT8_MIN;
	volatile uint64_t x468 = 1080701860101213LLU;
	volatile uint64_t t93 = 3617978631LLU;

	t93 = (x465+((x466<=x467)-x468));

	if (t93 != 18445663371849450402LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x474 = -541LL;
	static uint32_t x476 = 76596651U;
	uint32_t t94 = 1172U;

	t94 = (x473+((x474<=x475)-x476));

	if (t94 != 4218370746U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x477 = INT32_MAX;
	static volatile uint16_t x479 = UINT16_MAX;

	t95 = (x477+((x478<=x479)-x480));

	if (t95 != -12131007626579LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x482 = INT32_MAX;
	int64_t x483 = INT64_MAX;
	uint8_t x484 = 14U;
	static volatile int32_t t96 = -7550;

	t96 = (x481+((x482<=x483)-x484));

	if (t96 != -13) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x485 = 3398U;
	volatile uint16_t x486 = 3376U;
	uint16_t x488 = UINT16_MAX;
	volatile int32_t t97 = -98;

	t97 = (x485+((x486<=x487)-x488));

	if (t97 != -62137) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x489 = -1LL;
	int8_t x490 = -1;
	static uint64_t x491 = 328813271663371019LLU;
	static int64_t t98 = 8239468136431601LL;

	t98 = (x489+((x490<=x491)-x492));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x493 = -1;
	int16_t x494 = -1;
	uint16_t x496 = 1U;
	int32_t t99 = 2015892;

	t99 = (x493+((x494<=x495)-x496));

	if (t99 != -1) { NG(); } else { ; }
	
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

